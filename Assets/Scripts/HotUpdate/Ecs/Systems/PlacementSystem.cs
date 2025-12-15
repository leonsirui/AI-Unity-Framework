using cfg;
using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics;
using Unity.Physics.Systems;
using Unity.Transforms;
using UnityEngine;
using RaycastHit = Unity.Physics.RaycastHit;

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial class PlacementSystem : SystemBase
    {
        private GridSystem _gridSystem;
        private GridEntityVisualizationSystem _gridVisSystem; // 1. 恢复引用
        private Camera _mainCamera;

        private GameObject _previewObject;
        private int _lastLoadedObjectId = -1;
        private PlacementType _lastPlacementType;
        private bool _isResourceLoading = false;

        private quaternion _defaultRotation = quaternion.identity;
        private int _currentPlacementLayer = 4;

        private UnityEngine.Material _validMat;
        private UnityEngine.Material _invalidMat;

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();
            RequireForUpdate<PlacementStateComponent>();
            RequireForUpdate<PhysicsWorldSingleton>();

            if (!SystemAPI.HasSingleton<PlacementStateComponent>())
            {
                EntityManager.CreateSingleton<PlacementStateComponent>();
            }

            // 加载材质
            _validMat = Resources.Load<UnityEngine.Material>("Green");
            _invalidMat = Resources.Load<UnityEngine.Material>("Red");
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridSystem>();
            _gridVisSystem = World.GetExistingSystemManaged<GridEntityVisualizationSystem>(); // 2. 获取系统
            _mainCamera = Camera.main;
        }

        protected override void OnUpdate()
        {
            var gridConfig = SystemAPI.GetSingleton<GridConfigComponent>();
            var physicsWorld = SystemAPI.GetSingleton<PhysicsWorldSingleton>();
            var stateRef = SystemAPI.GetSingletonRW<PlacementStateComponent>();
            ref var state = ref stateRef.ValueRW;

            HandleInput(ref state, gridConfig);

            if (!state.IsActive)
            {
                if (_previewObject != null) CleanupPreview();
                return;
            }

            // 模式切换检测
            if (_lastPlacementType != state.Type)
            {
                OnPlacementModeChanged(state.Type);
                _lastPlacementType = state.Type;
            }

            // 资源加载
            if ((_previewObject == null || _lastLoadedObjectId != state.CurrentObjectId) && !_isResourceLoading)
            {
                CreatePreviewGameObject(state.CurrentObjectId, state.Type).Forget();
                return;
            }

            if (_previewObject == null) return;

            // 旋转
            if (Input.GetKeyDown(KeyCode.R))
            {
                state.RotationIndex = (state.RotationIndex + 1) % 4;
            }

            // 1. 射线检测
            bool hasHoverGrid = PerformRaycast(physicsWorld.CollisionWorld, gridConfig.CellSize, out int3 hitGridPos);

            if (hasHoverGrid)
            {
                int3 baseSize = GetObjectSizeFromConfig(state.CurrentObjectId, state.Type);
                int3 finalSize = (state.RotationIndex % 2 == 1) ? new int3(baseSize.z, baseSize.y, baseSize.x) : baseSize;

                int3 targetGridPos = CalculateFinalPlacementPosition(hitGridPos, finalSize, state.Type);
                state.CurrentGridPos = targetGridPos;

                state.IsPositionValid = ValidatePosition(state.Type, targetGridPos, finalSize);

                UpdatePreviewTransform(targetGridPos, finalSize, state.RotationIndex, gridConfig.CellSize);
                UpdatePreviewMaterial(state.IsPositionValid);

                // 确认放置
                if ((Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space)) && state.IsPositionValid)
                {
                    int airSpace = 5;
                    if (state.Type == PlacementType.Island && ConfigManager.Instance.Tables != null)
                    {
                        var cfg = ConfigManager.Instance.Tables.IslandCfg.Get(state.CurrentObjectId);
                        if (cfg != null) airSpace = cfg.AirHeight;
                    }
                    SendPlacementRequest(state.CurrentObjectId, state.Type, targetGridPos, finalSize, state.RotationIndex, airSpace);
                }
            }
            else
            {
                _previewObject.SetActive(false);
            }
        }

        private void HandleInput(ref PlacementStateComponent state, GridConfigComponent gridConfig)
        {
            if (Input.GetKeyDown(KeyCode.B)) { ToggleMode(ref state, PlacementType.Island, 100001); }
            if (Input.GetKeyDown(KeyCode.K)) { ToggleMode(ref state, PlacementType.Building, 200001); }
            if (Input.GetKeyDown(KeyCode.L)) { ToggleMode(ref state, PlacementType.Bridge, 300001); }
            if (Input.GetKeyDown(KeyCode.Escape)) { state.IsActive = false; }

            if (state.IsActive)
            {
                if (Input.GetKeyDown(KeyCode.Alpha1)) ChangeHeightLayer(1, gridConfig.Height);
                if (Input.GetKeyDown(KeyCode.Alpha2)) ChangeHeightLayer(-1, gridConfig.Height);
            }
        }

        private void ToggleMode(ref PlacementStateComponent state, PlacementType type, int defaultId)
        {
            if (state.IsActive && state.Type == type)
            {
                state.IsActive = false;
            }
            else
            {
                state.IsActive = true;
                state.Type = type;
                state.CurrentObjectId = defaultId;
                state.RotationIndex = 0;
                // 重置模式标记以触发 OnPlacementModeChanged
                _lastPlacementType = PlacementType.None;
            }
        }

        private void ChangeHeightLayer(int delta, int maxHeight)
        {
            int oldLayer = _currentPlacementLayer;
            _currentPlacementLayer = math.clamp(_currentPlacementLayer + delta, 0, maxHeight - 1);

            if (_currentPlacementLayer != oldLayer)
            {
                Debug.Log($"[Placement] 切换高度层: {oldLayer} -> {_currentPlacementLayer}");
                // 3. 更新网格显示
                _gridVisSystem?.SetVisualizationRange(_currentPlacementLayer, _currentPlacementLayer);
            }
        }

        private void OnPlacementModeChanged(PlacementType newType)
        {
            // 4. 模式切换时更新网格显示
            _gridVisSystem?.SetVisualizationRange(_currentPlacementLayer, _currentPlacementLayer);

            if (newType == PlacementType.Bridge)
            {
                ShowBridgeHints();
            }
        }

        private void CleanupPreview()
        {
            if (_previewObject != null)
            {
                Object.Destroy(_previewObject);
                _previewObject = null;
            }
            _lastLoadedObjectId = -1;
            // 5. 退出时隐藏网格
            _gridVisSystem?.SetVisualizationRange(-1, -1);
            _defaultRotation = quaternion.identity;
        }

        private int3 CalculateFinalPlacementPosition(int3 hitPos, int3 size, PlacementType type)
        {
            int targetY = _currentPlacementLayer;
            int offsetX = (size.x % 2 == 1) ? (size.x / 2) : ((size.x - 1) / 2);
            int offsetZ = (size.z % 2 == 1) ? (size.z / 2) : ((size.z - 1) / 2);
            return new int3(hitPos.x - offsetX, targetY, hitPos.z - offsetZ);
        }

        private bool ValidatePosition(PlacementType type, int3 pos, int3 size)
        {
            int3 endPos = pos + size - new int3(1, 1, 1);
            switch (type)
            {
                case PlacementType.Island: return _gridSystem.CheckIslandPlacement(pos, size, 5);
                case PlacementType.Building: return _gridSystem.IsBuildingBuildable(pos, endPos);
                case PlacementType.Bridge: return _gridSystem.IsBridgeBuildable(pos);
            }
            return false;
        }

        private bool PerformRaycast(CollisionWorld collisionWorld, float cellSize, out int3 gridPos)
        {
            gridPos = int3.zero;
            UnityEngine.Ray unityRay = _mainCamera.ScreenPointToRay(Input.mousePosition);
            // 增加射线长度，确保能检测到
            RaycastInput raycastInput = new RaycastInput { Start = unityRay.origin, End = unityRay.origin + unityRay.direction * 5000f, Filter = CollisionFilter.Default };

            if (collisionWorld.CastRay(raycastInput, out RaycastHit hit))
            {
                // [修改点 1] 严格检查：只有当击中的实体拥有 GridPositionComponent 组件时才视为有效
                if (EntityManager.HasComponent<GridPositionComponent>(hit.Entity))
                {
                    gridPos = EntityManager.GetComponentData<GridPositionComponent>(hit.Entity).Value;
                    // 强制覆盖 Y 轴为当前的放置层级 (虽然是点击了格子，但放置逻辑可能在空中)
                    gridPos.y = _currentPlacementLayer;
                    return true;
                }

                // [修改点 1] 如果击中的是没有 Grid 组件的普通物体（如背景、未初始化的地面），直接忽略
                // 之前的 float3 hitPoint = hit.Position... 逻辑已被移除
            }
            return false;
        }

        private void SendPlacementRequest(int id, PlacementType type, int3 pos, int3 size, int rotation, int airSpace)
        {
            var requestEntity = EntityManager.CreateEntity();
            quaternion finalRotation = math.mul(quaternion.RotateY(math.radians(90 * rotation)), _defaultRotation);

            EntityManager.AddComponentData(requestEntity, new PlaceObjectRequest
            {
                ObjectId = id,
                Position = pos,
                Type = type,
                Size = size,
                Rotation = finalRotation,
                AirspaceHeight = airSpace,
                RotationIndex = rotation // [新增] 传递旋转索引
            });
            Debug.Log($"[Placement] 发送请求: {type} at {pos}");
        }

        private async UniTaskVoid CreatePreviewGameObject(int configId, PlacementType type)
        {
            _isResourceLoading = true;
            _lastLoadedObjectId = configId;
            string resourcePath = null;

            if (ConfigManager.Instance.Tables != null)
            {
                switch (type)
                {
                    case PlacementType.Island: resourcePath = ConfigManager.Instance.Tables.IslandCfg.Get(configId)?.ResourceName; break;
                    case PlacementType.Building: resourcePath = ConfigManager.Instance.Tables.BuildingCfg.Get(configId)?.ResourceName; break;
                    case PlacementType.Bridge: resourcePath = ConfigManager.Instance.Tables.BridgeCfg.Get(configId)?.ResourceName; break;
                }
            }

            if (!string.IsNullOrEmpty(resourcePath))
            {
                var prefab = await ResourceManager.Instance.LoadAssetAsync<GameObject>(resourcePath);
                if (prefab != null)
                {
                    if (_previewObject != null) Object.Destroy(_previewObject);
                    _previewObject = Object.Instantiate(prefab);
                    _defaultRotation = _previewObject.transform.rotation;
                }
            }
            _isResourceLoading = false;
        }

        private void UpdatePreviewTransform(int3 gridPos, int3 size, int rotIndex, float cellSize)
        {
            if (_previewObject == null) return;
            _previewObject.SetActive(true);

            // [修改点 2] 不再手动计算偏移，而是调用 GridSystem 的接口
            // 传入计算好的 逻辑锚点坐标(gridPos) 和 尺寸(size)
            float3 worldPos = _gridSystem.CalculateObjectCenterWorldPosition(gridPos, size);

            _previewObject.transform.position = worldPos;
            _previewObject.transform.rotation = math.mul(quaternion.RotateY(math.radians(90 * rotIndex)), _defaultRotation);
        }

        private void UpdatePreviewMaterial(bool isValid)
        {
            if (_previewObject == null) return;
            var renderers = _previewObject.GetComponentsInChildren<Renderer>();
            UnityEngine.Material targetMat = isValid ? _validMat : _invalidMat;
            foreach (var r in renderers)
            {
                var mats = new UnityEngine.Material[r.sharedMaterials.Length];
                for (int i = 0; i < mats.Length; i++) mats[i] = targetMat;
                r.sharedMaterials = mats;
            }
        }

        private int3 GetObjectSizeFromConfig(int objectId, PlacementType type)
        {
            if (ConfigManager.Instance.Tables == null) return new int3(1, 1, 1);
            switch (type)
            {
                case PlacementType.Building:
                    var bCfg = ConfigManager.Instance.Tables.BuildingCfg.Get(objectId);
                    return bCfg != null ? new int3((int)bCfg.Length, 1, (int)bCfg.Width) : new int3(1, 1, 1);
                case PlacementType.Island:
                    var iCfg = ConfigManager.Instance.Tables.IslandCfg.Get(objectId);
                    return iCfg != null ? new int3((int)iCfg.Length, (int)iCfg.Height, (int)iCfg.Width) : new int3(1, 1, 1);
            }
            return new int3(1, 1, 1);
        }

        private void ShowBridgeHints()
        {
            var bridgeableCells = _gridSystem.GetBridgeablePositions(Allocator.Temp);
            // TODO: 调用可视化系统显示高亮
            bridgeableCells.Dispose();
        }
    }
}
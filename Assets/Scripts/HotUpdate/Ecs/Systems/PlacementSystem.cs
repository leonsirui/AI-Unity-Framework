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
    /// <summary>
    /// 放置系统 (ECS完整版)
    /// 集成功能：动态高度层级、中心偏移、旋转修正、射线检测视差修复、岛屿合法性校验
    /// </summary>
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial class PlacementSystem : SystemBase
    {
        private GridSystem _gridSystem;
        private GridEntityVisualizationSystem _gridVisSystem;
        private Camera _mainCamera;

        private GameObject _previewObject;
        private int _lastLoadedObjectId = -1;
        private PlacementType _lastPlacementType;
        private bool _isResourceLoading = false;

        // 记录预制体的默认旋转 (解决模型导入 -90度问题)
        private quaternion _defaultRotation = quaternion.identity;

        // 当前放置高度层 (默认 4, 可按 1/2 调整)
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

            LoadMaterials();
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridSystem>();
            _gridVisSystem = World.GetExistingSystemManaged<GridEntityVisualizationSystem>();
            _mainCamera = Camera.main;
        }

        private void LoadMaterials()
        {
            _validMat = Resources.Load<UnityEngine.Material>("Green");
            _invalidMat = Resources.Load<UnityEngine.Material>("Red");
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

            if (_lastPlacementType != state.Type)
            {
                OnPlacementModeChanged(state.Type);
                _lastPlacementType = state.Type;
            }

            if ((_previewObject == null || _lastLoadedObjectId != state.CurrentObjectId) && !_isResourceLoading)
            {
                CreatePreviewGameObject(state.CurrentObjectId, state.Type).Forget();
                return;
            }

            if (_previewObject == null) return;

            if (Input.GetKeyDown(KeyCode.R))
            {
                state.RotationIndex = (state.RotationIndex + 1) % 4;
            }

            // 1. 获取鼠标击中的网格坐标 (基于当前高度层进行检测，消除视差)
            bool hasHoverGrid = PerformRaycast(physicsWorld.CollisionWorld, gridConfig.CellSize, out int3 hitGridPos);

            if (hasHoverGrid)
            {
                // 2. 获取物体实际尺寸 (考虑旋转)
                // 必须正确读取岛屿的高度(Height)以便校验
                int3 baseSize = GetObjectSizeFromConfig(state.CurrentObjectId, state.Type);
                int3 finalSize = (state.RotationIndex % 2 == 1) ? new int3(baseSize.z, baseSize.y, baseSize.x) : baseSize;

                // 3. 计算最终放置坐标 (应用中心偏移 + 动态高度层)
                int3 targetGridPos = CalculateFinalPlacementPosition(hitGridPos, finalSize, state.Type);

                state.CurrentGridPos = targetGridPos;

                // 4. 合法性校验 (针对岛屿调用特殊检测)
                state.IsPositionValid = ValidatePosition(state.Type, targetGridPos, finalSize);

                // 5. 更新预览显示 (位置和旋转)
                UpdatePreviewTransform(targetGridPos, finalSize, state.RotationIndex, gridConfig.CellSize);
                UpdatePreviewMaterial(state.IsPositionValid);

                // 6. 确认放置
                if (Input.GetMouseButtonDown(0) && state.IsPositionValid)
                {
                    SendPlacementRequest(state.CurrentObjectId, state.Type, targetGridPos, finalSize, state.RotationIndex);
                }
            }
            else
            {
                _previewObject.SetActive(false);
            }
        }

        // ===========================================================================================
        // 核心逻辑: 坐标计算与检测
        // ===========================================================================================

        private int3 CalculateFinalPlacementPosition(int3 hitPos, int3 size, PlacementType type)
        {
            // [修改] 让所有类型都跟随 _currentPlacementLayer，实现高度自由放置
            int targetY = _currentPlacementLayer;

            // [修改] 中心锚点偏移算法
            // 确保鼠标位于物体的几何中心附近
            int offsetX = size.x / 2;
            int offsetZ = size.z / 2;

            return new int3(hitPos.x - offsetX, targetY, hitPos.z - offsetZ);
        }

        private bool ValidatePosition(PlacementType type, int3 pos, int3 size)
        {
            int3 endPos = pos + size - new int3(1, 1, 1);
            switch (type)
            {
                case PlacementType.Island:
                    // 读取配置中的空域高度
                    int airspace = 5;
                    if (ConfigManager.Instance.Tables != null)
                    {
                        var state = SystemAPI.GetSingleton<PlacementStateComponent>();
                        var iCfg = ConfigManager.Instance.Tables.IslandCfg.Get(state.CurrentObjectId);
                    }
                    // 调用 GridSystem 专门的岛屿检测 API (含底部边界检查)
                    return _gridSystem.CheckIslandPlacement(pos, size, airspace);

                case PlacementType.Building:
                    return _gridSystem.IsBuildingBuildable(pos, endPos);

                case PlacementType.Bridge:
                    return _gridSystem.IsBridgeBuildable(pos);

                default:
                    return false;
            }
        }

        private bool PerformRaycast(CollisionWorld collisionWorld, float cellSize, out int3 gridPos)
        {
            gridPos = int3.zero;
            UnityEngine.Ray unityRay = _mainCamera.ScreenPointToRay(Input.mousePosition);

            // A. 优先检测场景实体
            RaycastInput raycastInput = new RaycastInput { Start = unityRay.origin, End = unityRay.origin + unityRay.direction * 1000f, Filter = CollisionFilter.Default };

            if (collisionWorld.CastRay(raycastInput, out RaycastHit hit))
            {
                if (EntityManager.HasComponent<GridPositionComponent>(hit.Entity))
                {
                    gridPos = EntityManager.GetComponentData<GridPositionComponent>(hit.Entity).Value;
                    // 强制使用当前设置的层级，覆盖被击中物体的高度
                    gridPos.y = _currentPlacementLayer;
                    return true;
                }

                // Fallback
                float3 hitPoint = hit.Position;
                gridPos = _gridSystem.WorldToGridPosition(hitPoint);
                gridPos.y = _currentPlacementLayer;
                return true;
            }

            return false;
        }

        // ===========================================================================================
        // 输入与状态管理
        // ===========================================================================================

        private void HandleInput(ref PlacementStateComponent state, GridConfigComponent gridConfig)
        {
            // 切换模式
            if (Input.GetKeyDown(KeyCode.B)) { ToggleMode(ref state, PlacementType.Island, 100001); }
            if (Input.GetKeyDown(KeyCode.K)) { ToggleMode(ref state, PlacementType.Building, 200001); }
            if (Input.GetKeyDown(KeyCode.L)) { ToggleMode(ref state, PlacementType.Bridge, 300001); }
            if (Input.GetKeyDown(KeyCode.Escape)) { state.IsActive = false; }

            // 高度调节 (1=Up, 2=Down)
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
            }
        }

        private void ChangeHeightLayer(int delta, int maxHeight)
        {
            int oldLayer = _currentPlacementLayer;
            _currentPlacementLayer = math.clamp(_currentPlacementLayer + delta, 0, maxHeight - 1);

            if (_currentPlacementLayer != oldLayer)
            {
                Debug.Log($"[Placement] 切换高度层: {oldLayer} -> {_currentPlacementLayer}");
                // 更新网格可视化
                _gridVisSystem?.SetVisualizationRange(_currentPlacementLayer, _currentPlacementLayer);
            }
        }

        private void OnPlacementModeChanged(PlacementType newType)
        {
            // 切换模式时，默认显示当前高度层
            _gridVisSystem?.SetVisualizationRange(_currentPlacementLayer, _currentPlacementLayer);

            if (newType == PlacementType.Bridge)
            {
                ShowBridgeHints();
            }
        }

        private void ShowBridgeHints()
        {
            var bridgeableCells = _gridSystem.GetBridgeablePositions(Allocator.Temp);
            // TODO: 这里可以调用可视化系统显示高亮提示
            bridgeableCells.Dispose();
        }

        // ===========================================================================================
        // 资源与显示更新
        // ===========================================================================================

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

                    // [关键] 记录预制体原始旋转
                    _defaultRotation = _previewObject.transform.rotation;
                }
            }
            _isResourceLoading = false;
        }

        private void UpdatePreviewTransform(int3 gridPos, int3 size, int rotIndex, float cellSize)
        {
            if (_previewObject == null) return;
            _previewObject.SetActive(true);

            // 根据锚点 (gridPos) 和尺寸 (size) 计算中心位置进行显示
            float3 worldPos = new float3(
                gridPos.x * cellSize + (size.x * cellSize * 0.5f) - (cellSize * 0.5f),
                gridPos.y * cellSize,
                gridPos.z * cellSize + (size.z * cellSize * 0.5f) - (cellSize * 0.5f)
            );

            _previewObject.transform.position = worldPos;
            // 应用组合旋转
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

        private void SendPlacementRequest(int id, PlacementType type, int3 pos, int3 size, int rotation)
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
                AirspaceHeight = 5 // 可后续从配置读取
            });
        }

        private void CleanupPreview()
        {
            if (_previewObject != null)
            {
                Object.Destroy(_previewObject);
                _previewObject = null;
            }
            _lastLoadedObjectId = -1;
            _gridVisSystem?.SetVisualizationRange(-1, -1);
            _defaultRotation = quaternion.identity;
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
                    // 读取完整尺寸 (长, 高, 宽)
                    return iCfg != null ? new int3((int)iCfg.Length, (int)iCfg.Height, (int)iCfg.Width) : new int3(1, 1, 1);
            }
            return new int3(1, 1, 1);
        }
    }
}
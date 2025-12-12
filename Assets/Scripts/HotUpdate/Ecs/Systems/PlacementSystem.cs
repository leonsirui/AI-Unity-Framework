using cfg;
using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics; // [新增] 引入物理命名空间
using Unity.Physics.Systems; // [新增] 用于获取 PhysicsWorld
using Unity.Transforms;
using UnityEngine;

// 解决冲突：使用 Unity 物理的 RaycastHit
using RaycastHit = Unity.Physics.RaycastHit;

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial class PlacementSystem : SystemBase
    {
        private GridOccupancySystem _gridSystem;
        private Camera _mainCamera;

        // --- 虚影预览相关 ---
        private GameObject _previewObject;
        private UnityEngine.Material _validMat;
        private UnityEngine.Material _invalidMat;
        private int _lastLoadedObjectId = -1;
        private bool _isResourceLoading = false;

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();
            // [移除] RequireForUpdate<GlobalInputComponent>(); 
            RequireForUpdate<PlacementStateComponent>();
            RequireForUpdate<PhysicsWorldSingleton>(); // [新增] 需要物理世界单例

            if (!SystemAPI.HasSingleton<PlacementStateComponent>())
            {
                EntityManager.CreateSingleton<PlacementStateComponent>();
            }

            LoadMaterials();
        }

        private void LoadMaterials()
        {
            _validMat = Resources.Load<UnityEngine.Material>("Prefabs/Green");
            _invalidMat = Resources.Load<UnityEngine.Material>("Prefabs/Red");
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridOccupancySystem>();
            _mainCamera = Camera.main; // 获取主摄像机
        }

        protected override void OnUpdate()
        {
            var gridConfig = SystemAPI.GetSingleton<GridConfigComponent>();
            var physicsWorldSingleton = SystemAPI.GetSingleton<PhysicsWorldSingleton>();
            var collisionWorld = physicsWorldSingleton.CollisionWorld;

            var stateRef = SystemAPI.GetSingletonRW<PlacementStateComponent>();
            ref var state = ref stateRef.ValueRW;

            // --- 0. 调试开关 (按 B 键) ---
            if (Input.GetKeyDown(KeyCode.B))
            {
                state.IsActive = !state.IsActive;
                state.Type = PlacementType.Island;
                state.CurrentObjectId = 100001;
                state.RotationIndex = 0;
                Debug.Log($"放置模式: {state.IsActive}");
            }

            // --- 1. 退出/取消处理 ---
            // 直接读取 Unity Input
            if (!state.IsActive || Input.GetKeyDown(KeyCode.Escape))
            {
                if (state.IsActive) state.IsActive = false;
                CleanupPreview();
                return;
            }

            // --- 2. 资源加载与虚影管理 ---
            if ((_previewObject == null || _lastLoadedObjectId != state.CurrentObjectId) && !_isResourceLoading)
            {
                CreatePreviewGameObject(state.CurrentObjectId, state.Type).Forget();
                return;
            }

            if (_previewObject == null) return;

            // --- 3. 旋转逻辑 (按 R 键) ---
            if (Input.GetKeyDown(KeyCode.R))
            {
                state.RotationIndex = (state.RotationIndex + 1) % 4;
            }

            // --- 4. [核心修改] 射线检测获取网格位置 ---
            // --- 4. [核心修改] 射线检测获取网格位置 ---
            bool hasHoverGrid = false;

            UnityEngine.Ray unityRay = _mainCamera.ScreenPointToRay(Input.mousePosition);
            RaycastInput raycastInput = new RaycastInput
            {
                Start = unityRay.origin,
                End = unityRay.origin + unityRay.direction * 1000f,
                Filter = CollisionFilter.Default
            };

            if (collisionWorld.CastRay(raycastInput, out RaycastHit hit))
            {
                Entity hitEntity = hit.Entity;
                Debug.Log($"[检测] EntityIndex: {hitEntity}");
                if (EntityManager.HasComponent<GridPositionComponent>(hitEntity))
                {
                    int3 hitGridPos = EntityManager.GetComponentData<GridPositionComponent>(hitEntity).Value;

                    // [新增] 点击调试功能
                    if (Input.GetMouseButtonDown(0))
                    {
                        Debug.Log($"[点击网格] EntityIndex: {hitEntity.Index}, GridPos: {hitGridPos}");
                    }

                    state.CurrentGridPos = hitGridPos;
                    hasHoverGrid = true;
                }
            }

            // --- 5. 尺寸计算与预览更新 ---
            if (hasHoverGrid)
            {
                // 获取原始尺寸
                int3 baseSize = GetObjectSizeFromConfig(state.CurrentObjectId, state.Type);

                // 旋转尺寸
                int3 rotatedSize = baseSize;
                if (state.RotationIndex == 1 || state.RotationIndex == 3)
                {
                    rotatedSize = new int3(baseSize.z, baseSize.y, baseSize.x);
                }

                // A. 合法性检测
                state.IsPositionValid = _gridSystem.IsAreaAvailable(state.CurrentGridPos, rotatedSize);

                // B. 计算世界坐标 (含中心偏移)
                float3 worldPos = new float3(
                    state.CurrentGridPos.x * gridConfig.CellSize + (rotatedSize.x * gridConfig.CellSize * 0.5f),
                    state.CurrentGridPos.y * gridConfig.CellSize,
                    state.CurrentGridPos.z * gridConfig.CellSize + (rotatedSize.z * gridConfig.CellSize * 0.5f)
                );

                // C. 应用位置和旋转
                _previewObject.transform.position = worldPos;
                _previewObject.transform.rotation = quaternion.RotateY(math.radians(90 * state.RotationIndex));
                _previewObject.SetActive(true);

                // D. 更新材质
                UpdatePreviewMaterial(state.IsPositionValid);

                // --- 6. 确认放置 (鼠标左键) ---
                if (Input.GetMouseButtonDown(0) && state.IsPositionValid)
                {
                    var requestEntity = EntityManager.CreateEntity();
                    EntityManager.AddComponentData(requestEntity, new PlaceObjectRequest
                    {
                        ObjectId = state.CurrentObjectId,
                        Position = state.CurrentGridPos,
                        Type = state.Type,
                        Size = rotatedSize,
                        Rotation = quaternion.RotateY(math.radians(90 * state.RotationIndex)),
                        AirspaceHeight = 5
                    });

                    Debug.Log($"[Placement] 生成请求: Pos={state.CurrentGridPos}");
                }
            }
            else
            {
                // 如果鼠标没有指着网格，隐藏预览
                if (_previewObject.activeSelf) _previewObject.SetActive(false);
            }
        }

        // --- 辅助方法保持不变 ---
        private async UniTaskVoid CreatePreviewGameObject(int configId, PlacementType type)
        {
            _isResourceLoading = true;
            _lastLoadedObjectId = configId;
            string resourcePath = null;

            if (ConfigManager.Instance.Tables != null)
            {
                switch (type)
                {
                    case PlacementType.Building:
                        var bCfg = ConfigManager.Instance.Tables.BuildingCfg.Get(configId);
                        resourcePath = bCfg?.ResourceName;
                        break;
                    case PlacementType.Island:
                        var iCfg = ConfigManager.Instance.Tables.IslandCfg.Get(configId);
                        resourcePath = iCfg?.ResourceName;
                        break;
                }
            }

            Debug.Log(resourcePath);
            if (string.IsNullOrEmpty(resourcePath)) resourcePath = "Assets/Resources_moved/GridCell.prefab";

            var prefab = await ResourceManager.Instance.LoadAssetAsync<GameObject>(resourcePath);

            if (prefab != null)
            {
                if (_previewObject != null) Object.Destroy(_previewObject);
                _previewObject = Object.Instantiate(prefab);
                foreach (var c in _previewObject.GetComponentsInChildren<UnityEngine.Collider>()) c.enabled = false;
                UpdatePreviewMaterial(true);
            }
            _isResourceLoading = false;
        }

        private void UpdatePreviewMaterial(bool isValid)
        {
            if (_previewObject == null || _validMat == null || _invalidMat == null) return;
            var renderers = _previewObject.GetComponentsInChildren<Renderer>();
            UnityEngine.Material targetMat = isValid ? _validMat : _invalidMat;
            foreach (var r in renderers)
            {
                var mats = new UnityEngine.Material[r.sharedMaterials.Length];
                for (int i = 0; i < mats.Length; i++) mats[i] = targetMat;
                r.sharedMaterials = mats;
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
        }

        private int3 GetObjectSizeFromConfig(int objectId, PlacementType type)
        {
            if (ConfigManager.Instance.Tables == null) return new int3(1, 1, 1);
            switch (type)
            {
                case PlacementType.Building:
                    var bCfg = ConfigManager.Instance.Tables.BuildingCfg.Get(objectId);
                    if (bCfg != null) return new int3((int)bCfg.Length, 1, (int)bCfg.Width);
                    break;
                case PlacementType.Island:
                    var iCfg = ConfigManager.Instance.Tables.IslandCfg.Get(objectId);
                    if (iCfg != null) return new int3((int)iCfg.Length, 1, (int)iCfg.Width);
                    break;
            }
            return new int3(1, 1, 1);
        }
    }
}
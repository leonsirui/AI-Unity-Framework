using cfg; // 引入 Luban 命名空间
using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial class PlacementSystem : SystemBase
    {
        private GridOccupancySystem _gridSystem;

        // --- 混合架构：虚影预览相关 ---
        private GameObject _previewObject;
        private Material _validMat;
        private Material _invalidMat;
        private int _lastLoadedObjectId = -1;
        private bool _isResourceLoading = false;

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();
            RequireForUpdate<GlobalInputComponent>();
            RequireForUpdate<PlacementStateComponent>();

            // 确保单例存在
            if (!SystemAPI.HasSingleton<PlacementStateComponent>())
            {
                EntityManager.CreateSingleton<PlacementStateComponent>();
            }

            LoadMaterials();
        }

        private void LoadMaterials()
        {
            // 请确保 Resources/Prefabs 目录下有这两个材质
            _validMat = Resources.Load<Material>("Prefabs/Green");
            _invalidMat = Resources.Load<Material>("Prefabs/Red");
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridOccupancySystem>();
        }

        protected override void OnUpdate()
        {
            var input = SystemAPI.GetSingleton<GlobalInputComponent>();
            var gridConfig = SystemAPI.GetSingleton<GridConfigComponent>();

            var stateRef = SystemAPI.GetSingletonRW<PlacementStateComponent>();
            ref var state = ref stateRef.ValueRW;

            // --- 0. 调试开关 (按 B 键) ---
            if (UnityEngine.Input.GetKeyDown(KeyCode.B))
            {
                state.IsActive = !state.IsActive;
                state.Type = PlacementType.Island;
                state.CurrentObjectId = 100001; // 测试ID
                state.RotationIndex = 0;
                Debug.Log($"放置模式: {state.IsActive}");
            }

            // --- 1. 退出/取消处理 ---
            if (!state.IsActive || input.IsCancelPlace)
            {
                if (state.IsActive) state.IsActive = false;
                CleanupPreview();
                return;
            }

            // --- 2. 资源加载与虚影管理 ---
            // 检查是否需要重新加载虚影 (ID变化 或 虚影为空)
            if ((_previewObject == null || _lastLoadedObjectId != state.CurrentObjectId) && !_isResourceLoading)
            {
                CreatePreviewGameObject(state.CurrentObjectId, state.Type).Forget();
                return; // 加载中，跳过本帧
            }

            if (_previewObject == null) return;

            // --- 3. 旋转逻辑 (按 R 键) ---
            if (UnityEngine.Input.GetKeyDown(KeyCode.R))
            {
                state.RotationIndex = (state.RotationIndex + 1) % 4;
            }

            // --- 4. 尺寸与坐标计算 ---
            // 获取原始尺寸
            int3 baseSize = GetObjectSizeFromConfig(state.CurrentObjectId, state.Type);

            // 根据旋转交换长宽 (90度和270度时交换 X/Z)
            int3 rotatedSize = baseSize;
            if (state.RotationIndex == 1 || state.RotationIndex == 3)
            {
                rotatedSize = new int3(baseSize.z, baseSize.y, baseSize.x);
            }

            // --- 5. 位置更新与合法性检测 ---
            if (input.HasHoverTarget)
            {
                state.CurrentGridPos = input.HoverGridPosition;

                // A. 合法性检测
                state.IsPositionValid = _gridSystem.IsAreaAvailable(state.CurrentGridPos, rotatedSize);

                // B. 计算世界坐标 (关键修改：应用中心偏移)
                // 公式：网格角点坐标 + (物体尺寸 * 格子大小 * 0.5)
                float3 worldPos = new float3(
                    state.CurrentGridPos.x * gridConfig.CellSize + (rotatedSize.x * gridConfig.CellSize * 0.5f),
                    state.CurrentGridPos.y * gridConfig.CellSize, // 高度通常不需要偏移，除非中心点在物体几何中心
                    state.CurrentGridPos.z * gridConfig.CellSize + (rotatedSize.z * gridConfig.CellSize * 0.5f)
                );

                // C. 应用位置和旋转到虚影
                _previewObject.transform.position = worldPos;
                _previewObject.transform.rotation = quaternion.RotateY(math.radians(90 * state.RotationIndex));

                // D. 更新材质反馈
                UpdatePreviewMaterial(state.IsPositionValid);
            }

            // --- 6. 确认放置 ---
            if (input.IsConfirmPlace && state.IsPositionValid)
            {
                var requestEntity = EntityManager.CreateEntity();
                EntityManager.AddComponentData(requestEntity, new PlaceObjectRequest
                {
                    ObjectId = state.CurrentObjectId,
                    Position = state.CurrentGridPos,
                    Type = state.Type,
                    Size = rotatedSize, // 存入旋转后的实际占用尺寸
                    Rotation = quaternion.RotateY(math.radians(90 * state.RotationIndex)), // 存入旋转
                    AirspaceHeight = 5 // 示例值，应从 Config 读取
                });

                Debug.Log($"[Placement] 生成请求: Pos={state.CurrentGridPos}");
            }
        }

        // --- 辅助方法 ---

        private async UniTaskVoid CreatePreviewGameObject(int configId, PlacementType type)
        {
            _isResourceLoading = true;
            _lastLoadedObjectId = configId;
            string resourcePath = null;

            // 从 Luban 表获取路径
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

            // 兜底路径
            if (string.IsNullOrEmpty(resourcePath)) resourcePath = "Assets/Resources_moved/GridCell.prefab";

            var prefab = await ResourceManager.Instance.LoadAssetAsync<GameObject>(resourcePath);

            if (prefab != null)
            {
                if (_previewObject != null) Object.Destroy(_previewObject);
                _previewObject = Object.Instantiate(prefab);

                // 禁用碰撞体
                foreach (var c in _previewObject.GetComponentsInChildren<Collider>()) c.enabled = false;
                UpdatePreviewMaterial(true);
            }

            _isResourceLoading = false;
        }

        private void UpdatePreviewMaterial(bool isValid)
        {
            if (_previewObject == null || _validMat == null || _invalidMat == null) return;
            var renderers = _previewObject.GetComponentsInChildren<Renderer>();
            Material targetMat = isValid ? _validMat : _invalidMat;
            foreach (var r in renderers)
            {
                // 简单替换所有材质
                var mats = new Material[r.sharedMaterials.Length];
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

            // 根据你的实际 Luban 结构修改
            switch (type)
            {
                case PlacementType.Building:
                    var bCfg = ConfigManager.Instance.Tables.BuildingCfg.Get(objectId);
                    // 假设配表里是 Size (Vector3)
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

    // ==========================================
    // 实体生成系统 (消费请求)
    // ==========================================
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    public partial struct ObjectSpawnSystem : ISystem
    {
        public void OnUpdate(ref SystemState state)
        {
            var ecbSingleton = SystemAPI.GetSingleton<EndSimulationEntityCommandBufferSystem.Singleton>();
            var ecb = ecbSingleton.CreateCommandBuffer(state.WorldUnmanaged);

            if (!SystemAPI.TryGetSingleton(out GridConfigComponent gridConfig)) return;

            foreach (var (req, entity) in SystemAPI.Query<RefRO<PlaceObjectRequest>>().WithEntityAccess())
            {
                var request = req.ValueRO;

                // 【关键同步】这里也必须应用同样的中心偏移公式
                float3 worldPos = new float3(
                    request.Position.x * gridConfig.CellSize + (request.Size.x * gridConfig.CellSize * 0.5f),
                    request.Position.y * gridConfig.CellSize,
                    request.Position.z * gridConfig.CellSize + (request.Size.z * gridConfig.CellSize * 0.5f)
                );

                // 创建实体
                // 注意：这里最好调用 EntityFactory 来生成带 Mesh 的实体
                // 下面是纯 ECS 方式的演示，你需要确保创建出来的 Entity 有 RenderMesh
                var newEntity = ecb.CreateEntity();

                ecb.AddComponent(newEntity, new LocalTransform
                {
                    Position = worldPos,
                    Rotation = request.Rotation,
                    Scale = 1f
                });
                ecb.AddComponent(newEntity, new GridPositionComponent { Value = request.Position });
                ecb.AddComponent(newEntity, new ObjectSizeComponent { Size = request.Size });

                if (request.Type == PlacementType.Island)
                {
                    ecb.AddComponent(newEntity, new IslandTag());
                    ecb.AddComponent(newEntity, new IslandComponent { AirspaceHeight = request.AirspaceHeight });
                    ecb.AddComponent(newEntity, new NewIslandTag());
                }
                else if (request.Type == PlacementType.Building)
                {
                    ecb.AddComponent(newEntity, new BuildingTag());
                    // 如果有建筑注册系统，这里应添加 NewBuildingTag
                }

                // 销毁请求
                ecb.DestroyEntity(entity);
            }
        }
    }
}
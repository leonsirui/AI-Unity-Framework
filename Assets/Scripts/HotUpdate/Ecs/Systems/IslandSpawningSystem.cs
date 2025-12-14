using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.ECS.Systems
{
    /// <summary>
    /// 岛屿生成系统：消费放置请求，生成实体，更新网格数据
    /// </summary>
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    public partial class IslandSpawningSystem : SystemBase
    {
        private GridSystem _gridSystem;

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridSystem>();
        }

        protected override void OnUpdate()
        {
            // 使用 EntityCommandBuffer 在帧末统一修改结构，避免在遍历中修改引发错误
            var ecb = SystemAPI.GetSingleton<EndSimulationEntityCommandBufferSystem.Singleton>()
                .CreateCommandBuffer(World.Unmanaged);

            // 遍历所有放置请求
            foreach (var (req, entity) in SystemAPI.Query<RefRO<PlaceObjectRequest>>().WithEntityAccess())
            {
                // 只处理岛屿类型的请求
                if (req.ValueRO.Type == PlacementType.Island)
                {
                    SpawnIsland(ecb, req.ValueRO);
                }

                // 无论是否处理，都销毁请求实体，避免重复执行
                ecb.DestroyEntity(entity);
            }
        }

        private void SpawnIsland(EntityCommandBuffer ecb, PlaceObjectRequest req)
        {
            // 1. 获取配置数据 (资源路径)
            string resourcePath = "Unknown";
            if (ConfigManager.Instance.Tables != null)
            {
                var config = ConfigManager.Instance.Tables.IslandCfg.Get(req.ObjectId);
                if (config != null)
                {
                    resourcePath = config.ResourceName;
                }
            }

            // 2. 创建岛屿实体
            Entity islandEntity = ecb.CreateEntity();

            // 3. 添加 ECS 组件
            // A. 本地变换组件 (LocalTransform)
            ecb.AddComponent(islandEntity, LocalTransform.FromPositionRotation(
                _gridSystem.GridToWorldPosition(req.Position, req.Size), // 需要 GridSystem 提供转换方法
                req.Rotation
            ));

            // B. 网格位置组件 (逻辑坐标)
            ecb.AddComponent(islandEntity, new GridPositionComponent
            {
                Value = req.Position
            });

            // C. 岛屿数据组件
            ecb.AddComponent(islandEntity, new IslandComponent
            {
                ConfigId = req.ObjectId,
                Size = req.Size,
                AirSpace = req.AirspaceHeight
            });

            // D. 资源引用组件 (触发可视化系统加载模型)
            if (!string.IsNullOrEmpty(resourcePath))
            {
                ecb.AddComponent(islandEntity, new AssetReferenceComponent
                {
                    ResourcePath = resourcePath
                });
            }

            // 4. 在 GridSystem 中注册占用
            // 注意：因为是 Managed System，这里可以直接调用，但要注意多线程安全（SystemBase 是主线程安全的）
            _gridSystem.SetIslandOccupancy(req.Position, req.Size, req.AirspaceHeight, true);

            Debug.Log($"[IslandSpawningSystem] 岛屿实体已创建: ID={req.ObjectId} Pos={req.Position}");
        }
    }
}
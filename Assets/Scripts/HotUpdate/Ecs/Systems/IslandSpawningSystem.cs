using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics;
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.ECS.Systems
{
    /// <summary>
    /// 岛屿生成系统 (修复重叠问题版)
    /// </summary>
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    public partial class IslandSpawningSystem : SystemBase
    {
        private GridSystem _gridSystem;
        private EntityFactory _entityFactory;
        private GridConfigComponent _gridConfig;

        // 防止资源正在加载时重复提交的简单锁
        private HashSet<int> _loadingAssets = new HashSet<int>();

        protected override void OnCreate()
        {
            base.OnCreate();
            _entityFactory = new EntityFactory(EntityManager);
            RequireForUpdate<GridConfigComponent>();
        }

        protected override void OnDestroy()
        {
            _entityFactory.Dispose();
            base.OnDestroy();
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridSystem>();
            _gridConfig = SystemAPI.GetSingleton<GridConfigComponent>();
        }

        protected override void OnUpdate()
        {
            var query = SystemAPI.QueryBuilder().WithAll<PlaceObjectRequest>().Build();
            if (query.IsEmpty) return;

            var requestEntities = query.ToEntityArray(Allocator.Temp);
            var requests = query.ToComponentDataArray<PlaceObjectRequest>(Allocator.Temp);

            for (int i = 0; i < requestEntities.Length; i++)
            {
                var entity = requestEntities[i];
                var req = requests[i];

                if (req.Type == PlacementType.Island)
                {
                    // [关键修复 Step 1] 再次检查位置是否合法
                    // 虽然 PlacementSystem 可能检查过，但为了数据安全，生成前必须最后确认一次
                    // 如果此时返回 false，说明这个位置刚刚已经被占用了
                    if (!_gridSystem.CheckIslandPlacement(req.Position, req.Size, req.AirspaceHeight))
                    {
                        Debug.LogWarning($"[IslandSpawningSystem] 拒绝生成：位置 {req.Position} 已被占用");
                        EntityManager.DestroyEntity(entity); // 直接销毁无效请求
                        continue;
                    }

                    // 尝试生成实体
                    bool success = TrySpawnIsland(req, out Entity spawnedEntity);

                    if (success)
                    {
                        // 获取配置数据
                        var islandConfig = ConfigManager.Instance.Tables.IslandCfg.Get(req.ObjectId);

                        if (islandConfig != null)
                        {
                            // 调用新的注册接口，传入 Config 和 RotationIndex
                            _gridSystem.RegisterIsland(req.Position, islandConfig, req.RotationIndex);
                        }

                        EntityManager.DestroyEntity(entity);
                    }
                    else
                    {
                        // 如果返回 false，通常是因为资源正在异步加载中
                        // 我们保留这个请求实体（不销毁），下一帧继续尝试
                        // 注意：为了防止每一帧都触发加载，TrySpawnIsland 内部有 _loadingAssets 缓存判断
                    }
                }
                else
                {
                    // 其他类型的处理（如建筑），暂时略过或销毁
                    EntityManager.DestroyEntity(entity);
                }
            }

            requestEntities.Dispose();
            requests.Dispose();
        }

        /// <summary>
        /// 尝试生成岛屿实体
        /// </summary>
        private bool TrySpawnIsland(PlaceObjectRequest req, out Entity spawnedEntity)
        {
            spawnedEntity = Entity.Null;

            // A. 获取配置
            string resourcePath = "";
            if (ConfigManager.Instance.Tables != null)
            {
                var config = ConfigManager.Instance.Tables.IslandCfg.Get(req.ObjectId);
                if (config != null) resourcePath = config.ResourceName;
            }

            if (string.IsNullOrEmpty(resourcePath))
            {
                Debug.LogError($"配置无效 ID: {req.ObjectId}");
                return true;
            }

            // B. 计算物理参数
            float cellSize = _gridConfig.CellSize > 0 ? _gridConfig.CellSize : 1f;
            float3 colliderSize = new float3(req.Size.x, req.Size.y, req.Size.z) * cellSize;

            var boxGeometry = new BoxGeometry
            {
                Center = float3.zero,
                Orientation = quaternion.identity,
                Size = colliderSize,
                BevelRadius = 0f
            };

            float3 worldPos = _gridSystem.GridToWorldPosition(req.Position, req.Size);

            // ========================= 修改开始 =========================
            // C. 检查与生成
            // 先检查工厂里是否有这个 Entity 的原型，避免直接调用 Spawn 报错
            if (_entityFactory.HasEntity(req.ObjectId))
            {
                spawnedEntity = _entityFactory.SpawnColliderEntity(
                    req.ObjectId,
                    worldPos,
                    req.Rotation,
                    boxGeometry
                );
            }
            else
            {
                // 如果没有，保持 spawnedEntity 为 Null，流转到下方 D 步骤触发加载
                spawnedEntity = Entity.Null;
            }
            // ========================= 修改结束 =========================

            // D. 结果处理
            if (spawnedEntity == Entity.Null)
            {
                // 工厂返回 Null 说明原型还没加载
                if (!_loadingAssets.Contains(req.ObjectId))
                {
                    _loadingAssets.Add(req.ObjectId);
                    // 触发异步加载，不阻塞主线程
                    LoadAssetAndCleanState(req.ObjectId, resourcePath).Forget();
                }
                // 返回 false，请求实体会被保留，等待下一帧重试
                return false;
            }

            // E. 实体生成成功，添加组件
            EntityManager.AddComponentData(spawnedEntity, new GridPositionComponent { Value = req.Position });
            EntityManager.AddComponentData(spawnedEntity, new IslandComponent
            {
                ConfigId = req.ObjectId,
                Size = req.Size,
                AirSpace = req.AirspaceHeight
            });

            return true;
        }

        private async UniTaskVoid LoadAssetAndCleanState(int id, string path)
        {
            await _entityFactory.LoadEntityArchetypeAsync(id, path);
            _loadingAssets.Remove(id);
            // 加载完成后，_loadingAssets 解锁，下一帧 Update 循环会再次尝试生成，这次就会从工厂缓存中拿到实体
        }
    }
}
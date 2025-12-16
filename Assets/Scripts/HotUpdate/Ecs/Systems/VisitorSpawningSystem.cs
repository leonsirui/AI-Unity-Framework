using Cysharp.Threading.Tasks;
using GameFramework.ECS.Components;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;
using Random = Unity.Mathematics.Random;

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    public partial class VisitorSpawningSystem : SystemBase
    {
        private EntityFactory _entityFactory;
        private Random _random;

        // 游客配置定义 (实际项目中应从配置表读取)
        private const int VISITOR_CONFIG_ID = 90001;
        private const string VISITOR_PREFAB_PATH = "Tourist"; // 根据你上传的文件推测的路径

        // 防止重复加载的标志集合
        private HashSet<int> _loadingAssets = new HashSet<int>();

        protected override void OnCreate()
        {
            // 初始化工厂
            _entityFactory = new EntityFactory(EntityManager);
            _random = new Random(1234);
            RequireForUpdate<GridConfigComponent>();
        }

        protected override void OnDestroy()
        {
            // 销毁工厂缓存
            _entityFactory.Dispose();
            base.OnDestroy();
        }

        protected override void OnUpdate()
        {
            float dt = SystemAPI.Time.DeltaTime;
            float cellSize = SystemAPI.GetSingleton<GridConfigComponent>().CellSize;

            // 使用 EntityCommandBuffer 可以在遍历时安全地添加组件
            var ecb = new EntityCommandBuffer(Allocator.Temp);

            // 遍历所有游客中心
            foreach (var (center, gridPos, entity) in SystemAPI.Query<RefRW<VisitorCenterComponent>, RefRO<GridPositionComponent>>()
                         .WithEntityAccess())
            {
                // 1. 检查库存
                if (center.ValueRO.UnspawnedVisitorCount <= 0) continue;

                // 2. 更新计时器
                center.ValueRW.SpawnTimer -= dt;
                if (center.ValueRO.SpawnTimer > 0) continue;

                // 3. 准备生成
                // 检查工厂是否有原型缓存
                if (_entityFactory.HasEntity(VISITOR_CONFIG_ID))
                {
                    // === A. 执行生成 ===

                    // 计算世界坐标 (生成在格子中心，稍微抬高一点以免穿模)
                    float3 spawnPos = new float3(
                        gridPos.ValueRO.Value.x * cellSize,
                        gridPos.ValueRO.Value.y * cellSize + 0.5f,
                        gridPos.ValueRO.Value.z * cellSize
                    );

                    // 通过工厂同步生成实体 (原型模式)
                    Entity visitorEntity = _entityFactory.SpawnEntity(
                        VISITOR_CONFIG_ID,
                        spawnPos,
                        quaternion.identity
                    );

                    if (visitorEntity != Entity.Null)
                    {
                        // 挂载/初始化游客组件
                        // 注意：这里使用 SetComponent 因为 EntityFactory 生成的实体可能已经有了默认组件
                        // 如果没有，ecb.AddComponent 也是安全的，但 SpawnEntity 返回的实体是存在的
                        EntityManager.AddComponentData(visitorEntity, new VisitorComponent
                        {
                            Name = new FixedString64Bytes($"Visitor_{_random.NextInt(1000, 9999)}"),
                            Age = _random.NextInt(18, 90),
                            MoveSpeed = _random.NextFloat(1.5f, 3.5f)
                        });

                        // 确保有 GridPositionComponent 以便网格系统管理
                        EntityManager.AddComponentData(visitorEntity, new GridPositionComponent
                        {
                            Value = gridPos.ValueRO.Value
                        });

                        // 逻辑闭环：扣除库存，重置计时器
                        center.ValueRW.UnspawnedVisitorCount--;
                        center.ValueRW.SpawnTimer = center.ValueRO.SpawnInterval;

                        Debug.Log($"[VisitorSystem] 成功生成游客! 剩余: {center.ValueRW.UnspawnedVisitorCount}");
                    }
                }
                else
                {
                    // === B. 触发异步加载 ===
                    if (!_loadingAssets.Contains(VISITOR_CONFIG_ID))
                    {
                        _loadingAssets.Add(VISITOR_CONFIG_ID);
                        Debug.Log($"[VisitorSystem] 开始加载游客资源: {VISITOR_PREFAB_PATH}");
                        LoadAssetAndCleanState(VISITOR_CONFIG_ID, VISITOR_PREFAB_PATH).Forget();
                    }
                    // 加载中，本帧跳过，等待资源就绪
                }
            }

            ecb.Playback(EntityManager);
            ecb.Dispose();
        }

        // 异步加载辅助方法
        private async UniTaskVoid LoadAssetAndCleanState(int id, string path)
        {
            var entity = await _entityFactory.LoadEntityArchetypeAsync(id, path);
            if (entity != Entity.Null)
            {
                Debug.Log($"[VisitorSystem] 资源加载完成: {id}");
            }
            else
            {
                Debug.LogError($"[VisitorSystem] 资源加载失败: {path}");
            }
            _loadingAssets.Remove(id);
        }
    }
}
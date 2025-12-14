using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics; // 必须引用物理命名空间
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.ECS.Systems
{
    /// <summary>
    /// 岛屿生成系统 (纯ECS版)
    /// 功能：消费放置请求 -> 确保资源加载 -> 通过工厂生成带渲染和碰撞的实体 -> 注册网格
    /// </summary>
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    public partial class IslandSpawningSystem : SystemBase
    {
        private GridSystem _gridSystem;
        private EntityFactory _entityFactory;
        private GridConfigComponent _gridConfig;

        // 用于防止重复触发加载的简单缓存 Set
        private HashSet<int> _loadingAssets = new HashSet<int>();

        protected override void OnCreate()
        {
            base.OnCreate();
            // 初始化实体工厂
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
            // 1. 获取所有放置请求
            // 使用 EntityQuery 获取实体，以便我们可以选择性地销毁它们
            var query = SystemAPI.QueryBuilder().WithAll<PlaceObjectRequest>().Build();
            if (query.IsEmpty) return;

            // 转换为数组进行遍历 (Structural Changes 必须在主线程且不能在Query迭代中进行)
            var requestEntities = query.ToEntityArray(Allocator.Temp);
            var requests = query.ToComponentDataArray<PlaceObjectRequest>(Allocator.Temp);

            for (int i = 0; i < requestEntities.Length; i++)
            {
                var entity = requestEntities[i];
                var req = requests[i];

                if (req.Type == PlacementType.Island)
                {
                    // 尝试生成岛屿
                    bool success = TrySpawnIsland(req);

                    if (success)
                    {
                        // 成功生成，销毁请求
                        EntityManager.DestroyEntity(entity);
                    }
                    else
                    {
                        // 未成功（通常是因为资源还在加载），保留请求实体，下一帧重试
                        // 注意：这里什么都不做，实体留存
                    }
                }
                else
                {
                    // 非岛屿类型，暂时销毁或交给其他系统处理
                    EntityManager.DestroyEntity(entity);
                }
            }

            requestEntities.Dispose();
            requests.Dispose();
        }

        /// <summary>
        /// 尝试生成岛屿实体
        /// </summary>
        /// <returns>如果是 true 表示处理完毕（无论成功失败都销毁请求）；如果 false 表示资源未就绪，需等待</returns>
        private bool TrySpawnIsland(PlaceObjectRequest req)
        {
            // A. 获取配置
            string resourcePath = "";
            if (ConfigManager.Instance.Tables != null)
            {
                var config = ConfigManager.Instance.Tables.IslandCfg.Get(req.ObjectId);
                if (config != null) resourcePath = config.ResourceName;
            }

            if (string.IsNullOrEmpty(resourcePath))
            {
                Debug.LogError($"[IslandSystem] 配置无效 ID: {req.ObjectId}");
                return true; // 视为处理完毕（失败）
            }

            // B. 尝试生成 (检查工厂缓存)
            // 我们构建一个物理几何体参数
            float cellSize = _gridConfig.CellSize > 0 ? _gridConfig.CellSize : 1f;

            // 计算碰撞盒尺寸：逻辑尺寸 * 格子大小
            float3 colliderSize = new float3(req.Size.x, req.Size.y, req.Size.z) * cellSize;

            // 构建 BoxGeometry
            // Center 设置为 0，因为 GridSystem.GridToWorldPosition 返回的是物体中心点
            // EntityFactory 会将实体放置在中心点，所以碰撞体相对于实体中心应该是 0
            var boxGeometry = new BoxGeometry
            {
                Center = float3.zero,
                Orientation = quaternion.identity,
                Size = colliderSize,
                BevelRadius = 0f // 可选：倒角
            };

            // 计算世界坐标
            float3 worldPos = _gridSystem.GridToWorldPosition(req.Position, req.Size);

            // 调用工厂方法生成
            Entity islandEntity = _entityFactory.SpawnColliderEntity(
                req.ObjectId,
                worldPos,
                req.Rotation,
                boxGeometry
            );

            // C. 结果处理
            if (islandEntity == Entity.Null)
            {
                // 工厂返回 Null 说明原型还没加载
                if (!_loadingAssets.Contains(req.ObjectId))
                {
                    _loadingAssets.Add(req.ObjectId);
                    Debug.Log($"[IslandSystem] 资源未加载，触发异步加载: {resourcePath}");
                    LoadAssetAndCleanState(req.ObjectId, resourcePath).Forget();
                }
                // 返回 false，保留请求，下一帧再试
                return false;
            }

            // D. 实体生成成功，追加游戏逻辑组件
            EntityManager.AddComponentData(islandEntity, new GridPositionComponent { Value = req.Position });
            EntityManager.AddComponentData(islandEntity, new IslandComponent
            {
                ConfigId = req.ObjectId,
                Size = req.Size,
                AirSpace = req.AirspaceHeight
            });

            // 可选：添加 Tag 组件方便查询
            // EntityManager.AddComponent<IslandTag>(islandEntity);

            // E. 注册网格占用
            //_gridSystem.SetIslandOccupancy(islandEntity, req.Position, req.Size, true);

            Debug.Log($"[IslandSystem] 纯ECS实体生成完毕: Index={islandEntity.Index}");
            return true;
        }

        private async UniTaskVoid LoadAssetAndCleanState(int id, string path)
        {
            await _entityFactory.LoadEntityArchetypeAsync(id, path);
            _loadingAssets.Remove(id);
            // 加载完成后，下一帧的 OnUpdate 循环会再次尝试 TrySpawnIsland，这次就会成功
        }
    }
}
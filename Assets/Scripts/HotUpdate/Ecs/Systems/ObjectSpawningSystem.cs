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
    /// 对象生成系统 (扩展版：支持岛屿和建筑)
    /// </summary>
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    public partial class ObjectSpawningSystem : SystemBase // 建议类名改为 ObjectSpawningSystem
    {
        private GridSystem _gridSystem;
        private EntityFactory _entityFactory;
        private GridConfigComponent _gridConfig;

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

                bool isProcessed = false;

                // ---------------- 岛屿生成逻辑 ----------------
                if (req.Type == PlacementType.Island)
                {
                    // 1. 再次校验
                    if (!_gridSystem.CheckIslandPlacement(req.Position, req.Size, req.AirspaceHeight))
                    {
                        Debug.LogWarning($"[Spawning] 拒绝生成岛屿：位置 {req.Position} 无效");
                        EntityManager.DestroyEntity(entity);
                        continue;
                    }

                    // 2. 尝试生成
                    if (TrySpawnObject(req, out Entity spawnedEntity))
                    {
                        var config = ConfigManager.Instance.Tables.IslandCfg.Get(req.ObjectId);
                        if (config != null)
                        {
                            // 3. 注册网格 (岛屿特有逻辑)
                            _gridSystem.RegisterIsland(req.Position, config, req.RotationIndex);

                            // 4. 添加组件
                            EntityManager.AddComponentData(spawnedEntity, new IslandComponent
                            {
                                ConfigId = req.ObjectId,
                                Size = req.Size,
                                AirSpace = req.AirspaceHeight
                            });

                            isProcessed = true;
                        }
                    }
                }
                // ---------------- 建筑生成逻辑 (新增) ----------------
                else if (req.Type == PlacementType.Building)
                {
                    int3 endPos = req.Position + req.Size - new int3(1, 1, 1);

                    // 1. 再次校验 (建筑规则)
                    if (!_gridSystem.IsBuildingBuildable(req.Position, endPos))
                    {
                        Debug.LogWarning($"[Spawning] 拒绝生成建筑：位置 {req.Position} 不可建造");
                        EntityManager.DestroyEntity(entity);
                        continue;
                    }

                    // 2. 尝试生成
                    if (TrySpawnObject(req, out Entity spawnedEntity))
                    {
                        // 3. 注册网格 (建筑特有逻辑)
                        FixedString64Bytes buildingId = new FixedString64Bytes(req.ObjectId.ToString());
                        _gridSystem.RegisterBuilding(req.Position, req.Size, buildingId);

                        // 4. 添加组件 (建筑特有组件)
                        EntityManager.AddComponentData(spawnedEntity, new BuildingComponent
                        {
                            ConfigId = req.ObjectId,
                            Size = req.Size
                        });

                        Debug.Log($"[Spawning] 建筑生成成功 ID:{req.ObjectId} @ {req.Position}");
                        isProcessed = true;
                    }
                }
                // ---------------- 桥梁生成逻辑 (可预留) ----------------
                else if (req.Type == PlacementType.Bridge)
                {
                    // 类似逻辑：校验 -> 生成 -> RegisterBridge -> 添加 BridgeComponent
                    // ...
                }

                // 如果处理成功（非加载等待中），则销毁请求实体
                if (isProcessed)
                {
                    EntityManager.DestroyEntity(entity);
                }
                // 如果 isProcessed 为 false，说明可能正在异步加载资源，保留 entity 下一帧重试
            }

            requestEntities.Dispose();
            requests.Dispose();
        }

        /// <summary>
        /// 通用的对象生成尝试方法 (合并了原有的 TrySpawnIsland)
        /// </summary>
        private bool TrySpawnObject(PlaceObjectRequest req, out Entity spawnedEntity)
        {
            spawnedEntity = Entity.Null;

            // A. 根据类型获取资源路径
            string resourcePath = "";
            if (ConfigManager.Instance.Tables != null)
            {
                switch (req.Type)
                {
                    case PlacementType.Island:
                        resourcePath = ConfigManager.Instance.Tables.IslandCfg.Get(req.ObjectId)?.ResourceName;
                        break;
                    case PlacementType.Building:
                        resourcePath = ConfigManager.Instance.Tables.BuildingCfg.Get(req.ObjectId)?.ResourceName;
                        break;
                    case PlacementType.Bridge:
                        resourcePath = ConfigManager.Instance.Tables.BridgeCfg.Get(req.ObjectId)?.ResourceName;
                        break;
                }
            }

            if (string.IsNullOrEmpty(resourcePath))
            {
                Debug.LogError($"配置无效或资源路径缺失 ID: {req.ObjectId}");
                return true; // 视为处理完成（失败），避免死循环
            }

            // B. 计算世界坐标
            // 注意：建筑通常需要在地表上，计算中心点
            float3 worldPos = _gridSystem.CalculateObjectCenterWorldPosition(req.Position, req.Size);

            // C. 检查工厂缓存与生成
            if (_entityFactory.HasEntity(req.ObjectId))
            {
                // 计算碰撞体大小 (简单包围盒)
                float cellSize = _gridConfig.CellSize > 0 ? _gridConfig.CellSize : 1f;
                float3 colliderSize = new float3(req.Size.x, req.Size.y, req.Size.z) * cellSize;

                var boxGeometry = new BoxGeometry
                {
                    Center = float3.zero + new float3(0, 0, -2),
                    Orientation = quaternion.identity,
                    Size = new float3(colliderSize.x, colliderSize.z, colliderSize.y),
                    BevelRadius = 0f
                };

                spawnedEntity = _entityFactory.SpawnColliderEntity(
                    req.ObjectId,
                    worldPos,
                    req.Rotation,
                    boxGeometry
                );
            }
            else
            {
                spawnedEntity = Entity.Null;
            }

            // D. 触发异步加载
            if (spawnedEntity == Entity.Null)
            {
                if (!_loadingAssets.Contains(req.ObjectId))
                {
                    _loadingAssets.Add(req.ObjectId);
                    LoadAssetAndCleanState(req.ObjectId, resourcePath).Forget();
                }
                return false; // 等待加载
            }

            // E. 所有物体通用的组件
            EntityManager.AddComponentData(spawnedEntity, new GridPositionComponent { Value = req.Position });

            return true;
        }

        private async UniTaskVoid LoadAssetAndCleanState(int id, string path)
        {
            await _entityFactory.LoadEntityArchetypeAsync(id, path);
            _loadingAssets.Remove(id);
        }
    }
}
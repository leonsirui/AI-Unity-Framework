using Cysharp.Threading.Tasks;
using GameFramework.ECS.Components;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics;
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(PresentationSystemGroup))]
    public partial class GridEntityVisualizationSystem : SystemBase
    {
        // 引用逻辑系统，用于读取网格数据
        private GridSystem _gridSystem;
        private EntityFactory _entityFactory;

        // 缓存生成的实体列表，方便销毁
        private NativeList<Entity> _spawnedEntities;

        private bool _isResourceLoaded = false;
        private bool _hasGeneratedGrid = false; // 标记网格是否已生成

        // 配置ID与路径
        private const int GRID_VIEW_ID = 9001;
        private const string PREFAB_PATH = "Assets/Resources_moved/GridCell.prefab";

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();

            _entityFactory = new EntityFactory(EntityManager);
            _spawnedEntities = new NativeList<Entity>(Allocator.Persistent);

            LoadGridResource().Forget();
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridSystem>();
        }

        private async UniTaskVoid LoadGridResource()
        {
            // 预加载网格实体原型
            var entity = await _entityFactory.LoadEntityArchetypeAsync(GRID_VIEW_ID, PREFAB_PATH);
            if (entity != Entity.Null)
            {
                _isResourceLoaded = true;
                Debug.Log("[GridVis] 网格资源加载就绪");
            }
        }

        protected override void OnDestroy()
        {
            ClearGrid();
            if (_spawnedEntities.IsCreated) _spawnedEntities.Dispose();
            _entityFactory.Dispose();
        }

        protected override void OnUpdate()
        {
            // 1. 检查前置条件：资源加载完成、GridSystem存在、且还没生成过网格
            if (!_isResourceLoaded || _gridSystem == null || _hasGeneratedGrid) return;

            // 2. 检查 GridSystem 的数据是否已经准备好
            if (!_gridSystem.WorldGrid.IsCreated || _gridSystem.WorldGrid.IsEmpty) return;

            // 3. 执行全量生成
            GenerateFull3DGrid();
            _hasGeneratedGrid = true;
        }

        /// <summary>
        /// 生成所有高度层的所有网格实体
        /// </summary>
        private void GenerateFull3DGrid()
        {
            var config = SystemAPI.GetSingleton<GridConfigComponent>();
            Debug.Log($"[GridVis] 开始生成全量三维网格 ({config.Width}x{config.Height}x{config.Length})...");

            // 预先创建碰撞体参数，所有格子共用
            var boxGeometry = new BoxGeometry
            {
                Size = new float3(config.CellSize, 0.1f, config.CellSize),
                Center = float3.zero,
                Orientation = quaternion.identity
            };

            // 遍历所有维度 (X, Y, Z)
            for (int x = 0; x < config.Width; x++)
            {
                for (int y = 0; y < config.Height; y++)
                {
                    for (int z = 0; z < config.Length; z++)
                    {
                        int3 gridPos = new int3(x, y, z);

                        // 从 GridSystem 获取数据，确保位置有效
                        if (_gridSystem.WorldGrid.TryGetValue(gridPos, out GridCellData cellData))
                        {
                            SpawnSingleGridCell(cellData.WorldPosition, gridPos, boxGeometry);
                        }
                    }
                }
            }

            Debug.Log($"[GridVis] 网格生成完毕，当前活动格子数量: {_spawnedEntities.Length}");
        }

        /// <summary>
        /// 生成单个网格实体
        /// </summary>
        private void SpawnSingleGridCell(float3 worldPos, int3 logicalPos, BoxGeometry colliderParams)
        {
            Entity e = _entityFactory.SpawnColliderEntity(
                GRID_VIEW_ID,
                worldPos,
                quaternion.RotateX(math.radians(90)), // 旋转90度平铺
                colliderParams,
                1.0f
            );

            if (e != Entity.Null)
            {
                // [关键] 写入逻辑坐标，供 PlacementSystem 射线检测读取
                EntityManager.AddComponentData(e, new GridPositionComponent { Value = logicalPos });

                // 标记为可视化的网格
                EntityManager.AddComponent<VisualGridTag>(e);

                _spawnedEntities.Add(e);
            }
        }

        private void ClearGrid()
        {
            if (!_spawnedEntities.IsEmpty)
            {
                EntityManager.DestroyEntity(_spawnedEntities.AsArray());
                _spawnedEntities.Clear();
                Debug.Log("[GridVis] 清理网格显示");
            }
            _hasGeneratedGrid = false;
        }
    }
}
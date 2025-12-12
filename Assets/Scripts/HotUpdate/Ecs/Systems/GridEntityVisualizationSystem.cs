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
    // 定义 Tag 组件方便调试或查询
    public struct VisualGridTag : IComponentData { }

    [UpdateInGroup(typeof(PresentationSystemGroup))]
    public partial class GridEntityVisualizationSystem : SystemBase
    {
        private GridSystem _gridSystem;
        private EntityFactory _entityFactory;

        // 仅维护“当前可见”的网格实体列表
        private NativeList<Entity> _currentVisualEntities;

        private bool _isResourceLoaded = false;

        // 记录当前显示的范围，用于去重判断 (-1, -1 表示当前未显示)
        private int2 _currentRange = new int2(-1, -1);

        private const int GRID_VIEW_ID = 9001;
        private const string PREFAB_PATH = "Assets/Resources_moved/GridCell.prefab";

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();

            _entityFactory = new EntityFactory(EntityManager);
            _currentVisualEntities = new NativeList<Entity>(Allocator.Persistent);

            LoadGridResource().Forget();
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridSystem>();
        }

        private async UniTaskVoid LoadGridResource()
        {
            // 仅预加载资源，不再触发生成
            var entity = await _entityFactory.LoadEntityArchetypeAsync(GRID_VIEW_ID, PREFAB_PATH);
            if (entity != Entity.Null)
            {
                _isResourceLoaded = true;
                Debug.Log("[GridVis] 网格资源加载就绪 (懒加载模式)");
            }
        }

        protected override void OnDestroy()
        {
            ClearCurrentGrid();
            if (_currentVisualEntities.IsCreated) _currentVisualEntities.Dispose();
            _entityFactory.Dispose();
        }

        protected override void OnUpdate()
        {
            // [优化] 不再在 Update 中执行任何生成逻辑，完全由外部事件驱动
        }

        /// <summary>
        /// 外部调用接口：设置显示的层级范围
        /// </summary>
        /// <param name="yMin">起始高度 (包含)</param>
        /// <param name="yMax">结束高度 (包含)</param>
        /// <remarks>传入 (-1, -1) 或负数索引即可关闭显示并销毁实体</remarks>
        public void SetVisualizationRange(int yMin, int yMax)
        {
            // 1. 前置检查：资源和数据必须就绪
            if (!_isResourceLoaded || _gridSystem == null || !_gridSystem.WorldGrid.IsCreated)
            {
                // 在游戏刚启动极短时间内按B可能会触发这里，属于正常现象
                return;
            }

            // 2. 状态去重：如果请求的范围和当前一致，直接跳过 (避免重复销毁重建导致的闪烁)
            if (_currentRange.x == yMin && _currentRange.y == yMax) return;

            // 更新当前状态记录
            _currentRange = new int2(yMin, yMax);

            // 3. 核心逻辑：无论显示还是隐藏，先清理当前已有的实体
            // 这种“全量销毁再生成”的策略在此时是最优解，因为 PlacementSystem 通常只显示一层，
            // 实体数量较少 (100x100 = 1万个)，重建开销远小于维护 15万个隐藏实体的开销。
            ClearCurrentGrid();

            // 4. 如果是隐藏指令，清理完直接返回
            if (yMin < 0 || yMax < 0)
            {
                // Debug.Log("[GridVis] 关闭网格显示");
                return;
            }

            // 5. 生成新范围的网格
            GenerateGridInRange(yMin, yMax);
        }

        private void GenerateGridInRange(int yMin, int yMax)
        {
            var config = SystemAPI.GetSingleton<GridConfigComponent>();

            // 估算容量，减少 List 扩容开销
            int estimatedCount = config.Width * config.Length * (yMax - yMin + 1);
            if (_currentVisualEntities.Capacity < estimatedCount)
                _currentVisualEntities.Capacity = estimatedCount;

            // 复用碰撞体参数
            var boxGeometry = new BoxGeometry
            {
                Size = new float3(config.CellSize, 0.1f, config.CellSize),
                Center = float3.zero,
                Orientation = quaternion.identity
            };

            Debug.Log($"[GridVis] 生成网格层级: {yMin}-{yMax} (Count: {estimatedCount})");

            // 仅遍历需要的高度层
            for (int y = yMin; y <= yMax; y++)
            {
                // 安全检查：防止传入越界的层级
                if (y >= config.Height) continue;

                for (int x = 0; x < config.Width; x++)
                {
                    for (int z = 0; z < config.Length; z++)
                    {
                        int3 gridPos = new int3(x, y, z);

                        // 确保数据存在才生成
                        if (_gridSystem.WorldGrid.TryGetValue(gridPos, out GridCellData cellData))
                        {
                            SpawnSingleGridCell(cellData.WorldPosition, gridPos, boxGeometry);
                        }
                    }
                }
            }
        }

        private void SpawnSingleGridCell(float3 worldPos, int3 logicalPos, BoxGeometry colliderParams)
        {
            // 既然是按需生成，这里直接 Scale = 1.0f (可见)
            Entity e = _entityFactory.SpawnColliderEntity(
                GRID_VIEW_ID,
                worldPos,
                quaternion.RotateX(math.radians(90)),
                colliderParams,
                1.0f
            );

            if (e != Entity.Null)
            {
                // 写入坐标数据供射线检测使用
                EntityManager.AddComponentData(e, new GridPositionComponent { Value = logicalPos });
                EntityManager.AddComponent<VisualGridTag>(e);

                // 加入列表管理，以便后续销毁
                _currentVisualEntities.Add(e);
            }
        }

        private void ClearCurrentGrid()
        {
            if (!_currentVisualEntities.IsEmpty)
            {
                // 批量销毁，性能极高
                EntityManager.DestroyEntity(_currentVisualEntities.AsArray());
                _currentVisualEntities.Clear();
            }
        }
    }
}
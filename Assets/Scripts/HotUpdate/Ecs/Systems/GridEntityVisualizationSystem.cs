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
        private EntityFactory _entityFactory;
        private NativeList<Entity> _spawnedGridEntities;

        private bool _wasActive;
        private bool _isResourceLoaded;

        private const int GRID_CELL_CONFIG_ID = 9001;
        private const string GRID_CELL_PATH = "Assets/Resources_moved/GridCell.prefab";

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();
            RequireForUpdate<PlacementStateComponent>();

            _entityFactory = new EntityFactory(EntityManager);
            _spawnedGridEntities = new NativeList<Entity>(Allocator.Persistent);

            LoadGridResource().Forget();
        }

        private async UniTaskVoid LoadGridResource()
        {
            var entity = await _entityFactory.LoadEntityArchetypeAsync(GRID_CELL_CONFIG_ID, GRID_CELL_PATH);

            if (entity != Entity.Null)
            {
                _isResourceLoaded = true;
                Debug.Log("[GridSystem] 网格资源加载完毕，准备就绪。");
            }
        }

        protected override void OnDestroy()
        {
            ClearGrid();
            if (_spawnedGridEntities.IsCreated) _spawnedGridEntities.Dispose();
            _entityFactory.Dispose();
        }

        protected override void OnUpdate()
        {
            if (!_isResourceLoaded) return;

            var stateEntity = SystemAPI.GetSingletonEntity<PlacementStateComponent>();
            var state = SystemAPI.GetComponent<PlacementStateComponent>(stateEntity);
            var config = SystemAPI.GetSingleton<GridConfigComponent>();

            if (state.IsActive && !_wasActive)
            {
                ShowGrid(config);
            }
            else if (!state.IsActive && _wasActive)
            {
                ClearGrid();
            }

            _wasActive = state.IsActive;
        }

        private void ShowGrid(GridConfigComponent config)
        {
            if (!_spawnedGridEntities.IsEmpty) return;

            Debug.Log($"[GridSystem] 开始生成网格实体... 尺寸: {config.Width}x{config.Length}");

            int width = config.Width;
            int length = config.Length;
            float cellSize = config.CellSize;

            _spawnedGridEntities.Capacity = width * length;

            // [新增] 创建物理碰撞体资源 (所有格子共用一份 BlobAsset)
            // 创建一个与格子大小匹配的 Box 几何体
            var boxGeometry = new BoxGeometry
            {
                Center = float3.zero,
                Orientation = quaternion.identity,
                Size = new float3(cellSize, 0.1f, cellSize), // 厚度设为 0.1，方便射线检测
                BevelRadius = 0f
            };
            // 创建 BlobAsset (注意：Default 过滤器允许所有层级检测)

            for (int x = 0; x < width; x++)
            {
                for (int z = 0; z < length; z++)
                {
                    // 计算世界坐标
                    float3 pos = new float3(
                        x * cellSize + cellSize * 0.5f,
                        0.02f, // 稍微抬高一点点，防止与地面穿插 (Z-fighting)
                        z * cellSize + cellSize * 0.5f
                    );

                    // 生成可视化实体
                    Entity cellEntity = _entityFactory.SpawnColliderEntity(
                        GRID_CELL_CONFIG_ID,
                        pos,
                        quaternion.RotateX(math.radians(90)),
                        boxGeometry,
                        1.0f
                    );

                    if (cellEntity != Entity.Null)
                    {
                        // [关键步骤] 挂载逻辑坐标组件
                        // 这样鼠标射线打到这个实体时，就能直接读取它是哪个 (x, z) 格子
                        EntityManager.AddComponentData(cellEntity, new GridPositionComponent { Value = new int3(x, 0, z) });

                        // [关键步骤] 挂载物理碰撞体
                        // 这样 Unity.Physics 的射线才能检测到它

                        // [可选] 挂载标签组件，方便后续进行特定过滤
                        EntityManager.AddComponent<GridCellTag>(cellEntity);

                        _spawnedGridEntities.Add(cellEntity);
                    }
                }
            }
        }

        private void ClearGrid()
        {
            if (_spawnedGridEntities.IsEmpty) return;

            EntityManager.DestroyEntity(_spawnedGridEntities.AsArray());
            _spawnedGridEntities.Clear();

            Debug.Log("[GridSystem] 网格实体已清理。");
        }
    }
}
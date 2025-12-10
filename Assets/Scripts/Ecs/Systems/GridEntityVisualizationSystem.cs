using Cysharp.Threading.Tasks;
using GameFramework.ECS.Components;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine; // 仅用于 Debug

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(PresentationSystemGroup))]
    public partial class GridEntityVisualizationSystem : SystemBase
    {
        private EntityFactory _entityFactory;
        private NativeList<Entity> _spawnedGridEntities; // 记录所有生成的网格实体

        private bool _wasActive;
        private bool _isResourceLoaded;

        // 假设我们在 Luban 配置表里定义了一个 ID 为 9001 的 GridCell 资源
        // 它的路径应该指向一个简单的 Quad 模型，材质球用半透明线条或颜色
        private const int GRID_CELL_CONFIG_ID = 9001;
        private const string GRID_CELL_PATH = "Assets/Resources_moved/GridCell.prefab"; // 替换为你实际的资源路径

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();
            RequireForUpdate<PlacementStateComponent>();

            // 初始化 Factory
            _entityFactory = new EntityFactory(EntityManager);
            _spawnedGridEntities = new NativeList<Entity>(Allocator.Persistent);

            // 预加载网格资源 (Fire and forget)
            LoadGridResource().Forget();
        }

        private async UniTaskVoid LoadGridResource()
        {
            // 这里调用 EntityFactory 的加载逻辑
            // 实际项目中，Path 应该从 ConfigManager 获取
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

            // 状态从未激活 -> 激活：生成网格
            if (state.IsActive && !_wasActive)
            {
                ShowGrid(config);
            }
            // 状态从激活 -> 未激活：销毁网格
            else if (!state.IsActive && _wasActive)
            {
                ClearGrid();
            }

            _wasActive = state.IsActive;
        }

        private void ShowGrid(GridConfigComponent config)
        {
            // 防止重复生成
            if (!_spawnedGridEntities.IsEmpty) return;

            Debug.Log($"[GridSystem] 开始生成网格实体... 尺寸: {config.Width}x{config.Length}");

            int width = config.Width;
            int length = config.Length;
            float cellSize = config.CellSize;

            // 预先分配内存
            _spawnedGridEntities.Capacity = width * length;

            for (int x = 0; x < width; x++)
            {
                for (int z = 0; z < length; z++)
                {
                    // 计算世界坐标 (格子中心)
                    float3 pos = new float3(
                        x * cellSize + cellSize * 0.5f,
                        0.02f, // 稍微抬高一点点，防止与地面 Z-fighting
                        z * cellSize + cellSize * 0.5f
                    );

                    // 使用 EntityFactory 统一接口生成实体
                    // 假设网格预制体是 1x1 大小的，我们需要缩放到 CellSize
                    Entity cellEntity = _entityFactory.SpawnEntity(
                        GRID_CELL_CONFIG_ID,
                        pos,
                        quaternion.RotateX(math.radians(90)), // 如果用的是 Quad，通常需要旋转平铺
                        cellSize
                    );

                    if (cellEntity != Entity.Null)
                    {
                        // 记录下来以便稍后销毁
                        _spawnedGridEntities.Add(cellEntity);
                    }
                }
            }
        }

        private void ClearGrid()
        {
            if (_spawnedGridEntities.IsEmpty) return;

            // 批量销毁实体，这是 ECS 的优势，非常快
            EntityManager.DestroyEntity(_spawnedGridEntities.AsArray());
            _spawnedGridEntities.Clear();

            Debug.Log("[GridSystem] 网格实体已清理。");
        }
    }
}
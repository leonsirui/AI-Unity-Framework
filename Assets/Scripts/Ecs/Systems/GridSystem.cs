using GameFramework.ECS.Components;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;

namespace GameFramework.ECS.Systems
{
    // 维护一个 HashMap 来存储哪些格子被占用了
    [UpdateInGroup(typeof(InitializationSystemGroup))]
    public partial class GridOccupancySystem : SystemBase
    {
        // Key: 网格坐标 (x,y,z), Value: 占用的实体 Entity
        public NativeParallelHashMap<int3, Entity> OccupiedCells;

        protected override void OnCreate()
        {
            // 初始化地图，容量预设为 10000
            OccupiedCells = new NativeParallelHashMap<int3, Entity>(10000, Allocator.Persistent);

            // 初始化网格配置单例 (这里硬编码，实际可从 ConfigAssets 读取)
            EntityManager.CreateSingleton(new GridConfigComponent
            {
                Width = 100,
                Length = 100,
                Height = 15,
                CellSize = 2.0f
            });
        }

        protected override void OnDestroy()
        {
            if (OccupiedCells.IsCreated) OccupiedCells.Dispose();
        }

        protected override void OnUpdate()
        {
            // 每帧开始前清空占用表
            OccupiedCells.Clear();

            // 【关键修改 1】获取 ParallelWriter 并存为本地变量
            // 这样 Lambda 捕获的是这个 struct 变量，而不是 'this'
            var cellMap = OccupiedCells.AsParallelWriter();

            // 遍历所有有位置和尺寸的实体 (排除预览物体)
            Entities
                .WithNone<PreviewTag>()
                .ForEach((Entity entity, in GridPositionComponent pos, in ObjectSizeComponent size) =>
                {
                    // 【关键修改 2】直接在这里写逻辑，不要调用 AddToMap 方法
                    int3 anchor = pos.Value;
                    int3 s = size.Size;

                    for (int x = 0; x < s.x; x++)
                    {
                        for (int y = 0; y < s.y; y++)
                        {
                            for (int z = 0; z < s.z; z++)
                            {
                                int3 cell = anchor + new int3(x, y, z);
                                // 并行写入需要使用 TryAdd
                                cellMap.TryAdd(cell, entity);
                            }
                        }
                    }
                }).ScheduleParallel(); // 现在可以安全地使用 ScheduleParallel 了

            // 【重要】因为 PlacementSystem 会在主线程直接读取 OccupiedCells
            // 我们需要确保上面的 Job 在这一帧 Update 结束前完成
            // 否则 PlacementSystem 可能会读到空数据或脏数据
            Dependency.Complete();
        }

        // 供外部查询：检查区域是否可用
        // 这个方法在主线程运行，可以安全访问 OccupiedCells
        public bool IsAreaAvailable(int3 startPos, int3 size)
        {
            for (int x = 0; x < size.x; x++)
            {
                for (int y = 0; y < size.y; y++)
                {
                    for (int z = 0; z < size.z; z++)
                    {
                        int3 checkPos = startPos + new int3(x, y, z);
                        if (OccupiedCells.ContainsKey(checkPos)) return false;
                    }
                }
            }
            return true;
        }
    }
}
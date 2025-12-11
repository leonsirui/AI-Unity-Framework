using GameFramework.ECS.Components;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    // 必须在 Grid 系统之后运行，确保 Map 已创建
    [UpdateAfter(typeof(GridOccupancySystem))]
    public partial class IslandRegistrationSystem : SystemBase
    {
        protected override void OnUpdate()
        {
            // 1. 获取 GridOccupancySystem (我们需要向它的 WorldGrid 写入数据)
            var gridSys = World.GetExistingSystemManaged<GridOccupancySystem>();
            if (!gridSys.WorldGrid.IsCreated) return;

            // 获取并发写入器，允许我们在 Job 中并行写入
            var gridWriter = gridSys.WorldGrid.AsParallelWriter();

            // 2. 获取 ECB 用于在处理完后移除标签
            var ecbSingleton = SystemAPI.GetSingleton<EndSimulationEntityCommandBufferSystem.Singleton>();
            var ecb = ecbSingleton.CreateCommandBuffer(World.Unmanaged);

            // 3. 调度 Job 处理所有带有 "NewIslandTag" 的实体
            Entities
                .WithAll<IslandTag, NewIslandTag>() // 只筛选新岛屿
                .ForEach((Entity entity, in GridPositionComponent pos, in ObjectSizeComponent size, in IslandComponent islandData) =>
                {
                    // --- 逻辑复刻开始 ---

                    int3 anchor = pos.Value;   // 锚点 (x, y, z)
                    int3 s = size.Size;        // 尺寸 (长, 高, 宽)
                    int airspace = islandData.AirspaceHeight;

                    // A. 注册岛屿本体 (Body)
                    // 对应原代码：SetGridInfo(GridType.Island) -> 阻挡
                    for (int x = 0; x < s.x; x++)
                    {
                        for (int y = 0; y < s.y; y++)
                        {
                            for (int z = 0; z < s.z; z++)
                            {
                                int3 cellPos = anchor + new int3(x, y, z);

                                // 写入状态：Occupied (被占据，不可走)
                                gridWriter.TryAdd(cellPos, new CellData
                                {
                                    Flags = CellFlags.Occupied,
                                    Owner = entity
                                });
                            }
                        }
                    }

                    // B. 注册岛屿地表 (Surface) - 核心差异点！
                    // 对应原代码：SetGroundInfo(true, true) -> 可行走 & 可建造
                    // 地表位置 = 锚点Y + 高度Y (即岛屿顶部的上一层)
                    int surfaceY = anchor.y + s.y;

                    for (int x = 0; x < s.x; x++)
                    {
                        for (int z = 0; z < s.z; z++)
                        {
                            int3 surfacePos = anchor + new int3(x, s.y, z); // 注意是相对高度 s.y (即顶部+1层)

                            // 写入状态：Walkable | Buildable
                            // 即使这里没有实体模型，我们在逻辑网格上也标记它为“地”
                            gridWriter.TryAdd(surfacePos, new CellData
                            {
                                Flags = CellFlags.Walkable | CellFlags.Buildable,
                                Owner = entity
                            });
                        }
                    }

                    // C. 注册空域 (Airspace)
                    // 对应原代码：SetGridInfo(GridType.IslandAirspace)
                    for (int h = 1; h <= airspace; h++)
                    {
                        for (int x = 0; x < s.x; x++)
                        {
                            for (int z = 0; z < s.z; z++)
                            {
                                int3 airspacePos = anchor + new int3(x, s.y + h, z);

                                // 写入状态：Airspace
                                // 注意：这里简化了逻辑，如果需要保留之前的 Flags 需要更复杂的处理
                                gridWriter.TryAdd(airspacePos, new CellData
                                {
                                    Flags = CellFlags.Airspace,
                                    Owner = entity
                                });
                            }
                        }
                    }

                    // --- 逻辑复刻结束 ---

                    // 4. 移除 NewIslandTag，防止下一帧重复注册
                    ecb.RemoveComponent<NewIslandTag>(entity);

                }).ScheduleParallel();
        }
    }
}
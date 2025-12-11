using GameFramework.ECS.Components;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;

namespace GameFramework.ECS.Systems
{
    // [新定义] 单元格数据结构 (放在这个文件或者单独放在 Components 文件夹均可)
    [System.Flags]
    public enum CellFlags : byte
    {
        None = 0,
        Occupied = 1 << 0,    // 有物体 (阻挡)
        Walkable = 1 << 1,    // 地面 (可行走)
        Buildable = 1 << 2,   // 地基 (可建造)
        Airspace = 1 << 3     // 空域 (限高)
    }

    public struct CellData
    {
        public CellFlags Flags;
        public Entity Owner; // 谁占据了这个格子
    }

    // [系统升级] 原 GridOccupancySystem -> 升级为状态管理系统
    // 不再每帧清空，而是作为静态数据的容器
    [UpdateInGroup(typeof(InitializationSystemGroup))]
    public partial class GridOccupancySystem : SystemBase
    {
        // 核心地图数据：从只存 Entity 变为存 CellData
        public NativeParallelHashMap<int3, CellData> WorldGrid;

        protected override void OnCreate()
        {
            // 初始化地图，容量根据项目规模调整
            WorldGrid = new NativeParallelHashMap<int3, CellData>(10000, Allocator.Persistent);

            // 初始化配置 (如果之前有了可以保留)
            if (!SystemAPI.HasSingleton<GridConfigComponent>())
            {
                EntityManager.CreateSingleton(new GridConfigComponent
                {
                    Width = 50,
                    Length = 50,
                    Height = 15,
                    CellSize = 2.0f
                });
            }
        }

        protected override void OnDestroy()
        {
            if (WorldGrid.IsCreated) WorldGrid.Dispose();
        }

        protected override void OnUpdate()
        {
            // [重要修改] 
            // 以前这里有 OccupiedCells.Clear(); 
            // 现在我们 *去掉* 这个清除操作。
            // 因为岛屿是静态的，我们希望 IslandRegistrationSystem 写入一次后，数据一直保留。
            // 只有当物体被销毁时，我们才需要去移除它 (后续可以添加移除逻辑)。
        }

        // [查询API] 供 PlacementSystem 和 寻路系统 调用
        public bool IsCellBuildable(int3 pos)
        {
            if (WorldGrid.TryGetValue(pos, out CellData data))
            {
                // 必须包含 Buildable 标记，且不能被 Occupied (除非允许重叠)
                return (data.Flags & CellFlags.Buildable) != 0 && (data.Flags & CellFlags.Occupied) == 0;
            }
            return false;
        }

        // [查询API] 检查区域是否被占用 (用于放置检测)
        public bool IsAreaAvailable(int3 startPos, int3 size)
        {
            for (int x = 0; x < size.x; x++)
                for (int y = 0; y < size.y; y++)
                    for (int z = 0; z < size.z; z++)
                    {
                        int3 checkPos = startPos + new int3(x, y, z);
                        if (WorldGrid.TryGetValue(checkPos, out CellData data))
                        {
                            if ((data.Flags & CellFlags.Occupied) != 0) return false;
                        }
                    }
            return true;
        }
    }
}
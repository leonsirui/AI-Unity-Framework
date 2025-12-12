using System.Collections.Generic;
using GameFramework.ECS.Components;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;

namespace GameFramework.ECS.Systems
{
    /// <summary>
    /// 网格核心逻辑系统
    /// 负责：维护全局网格数据、初始化配置、提供注册和寻路API
    /// </summary>
    [UpdateInGroup(typeof(SimulationSystemGroup), OrderFirst = true)]
    public partial class GridSystem : SystemBase
    {
        // [核心数据] 全局网格数据容器
        // Key: int3 (x, y, z 逻辑坐标)
        // Value: GridCellData (包含类型、归属、是否可行走等信息)
        public NativeParallelHashMap<int3, GridCellData> WorldGrid;

        private bool _isInitialized = false;

        protected override void OnCreate()
        {
            // 1. 初始化 NativeHashMap
            // Allocator.Persistent 表示这块内存在游戏运行期间一直存在，直到 OnDestroy 释放
            // 初始容量设为 150000 (100*100*15) 以避免频繁扩容
            WorldGrid = new NativeParallelHashMap<int3, GridCellData>(150000, Allocator.Persistent);

            // [关键修改] 补回配置初始化逻辑
            // 检查 EntityWorld 中是否已经存在 GridConfigComponent
            // 如果不存在，则创建一个默认配置单例。这确保了后续系统（如可视化）能读取到正确的地图尺寸。
            if (!SystemAPI.HasSingleton<GridConfigComponent>())
            {
                EntityManager.CreateSingleton(new GridConfigComponent
                {
                    Width = 100,    // 地图 X 轴长度
                    Length = 100,   // 地图 Z 轴长度
                    Height = 15,    // 地图 Y 轴高度层数
                    CellSize = 2.0f // 单个格子的世界坐标尺寸
                });
                Debug.Log("[GridSystem] 自动创建默认网格配置 (100x100x15, CellSize:2)");
            }
        }

        protected override void OnDestroy()
        {
            // 销毁时释放 Native 内存，防止内存泄漏
            if (WorldGrid.IsCreated) WorldGrid.Dispose();
        }

        protected override void OnUpdate()
        {
            // 确保只初始化一次网格数据
            // 等待 GridConfigComponent 就绪后执行
            if (!_isInitialized && SystemAPI.HasSingleton<GridConfigComponent>())
            {
                InitializeGridData();
                _isInitialized = true;
            }
        }

        // --- 1. 网格数据初始化 (对应 GridManager.InitializeGridData) ---
        private void InitializeGridData()
        {
            var config = SystemAPI.GetSingleton<GridConfigComponent>();

            // 确保容量足够
            int totalCells = config.Width * config.Length * config.Height;
            if (WorldGrid.Capacity < totalCells)
            {
                WorldGrid.Capacity = totalCells;
            }

            // 遍历所有坐标，初始化为 Space (空)
            for (int x = 0; x < config.Width; x++)
            {
                for (int z = 0; z < config.Length; z++)
                {
                    for (int h = 0; h < config.Height; h++)
                    {
                        int3 gridKey = new int3(x, h, z);
                        float3 worldPos = new float3(x * config.CellSize, h * config.CellSize, z * config.CellSize);

                        GridCellData data = new GridCellData
                        {
                            Position = gridKey,
                            WorldPosition = worldPos,
                            Type = GridType.Space,
                            IslandID = "",
                            BuildingID = "",
                            IsMovable = false,
                            IsBuildable = false
                        };

                        // 使用 TryAdd 防止重复添加
                        WorldGrid.TryAdd(gridKey, data);
                    }
                }
            }
            Debug.Log($"[GridSystem] 网格数据初始化完成");
        }

        // --- 2. 岛屿注册逻辑 (对应 GridManager.RegisterIsland) ---
        public bool RegisterIsland(int3 pos, int3 size, int airspace, FixedString64Bytes islandId)
        {
            if (!WorldGrid.IsCreated) return false;

            // 计算占用范围
            // 假设 pos 为锚点（通常在物体底部或顶部，需根据原项目对齐），这里假设 pos 为岛屿顶部锚点
            int3 startPos = new int3(pos.x, pos.y - size.y + 1, pos.z);
            int3 endPos = new int3(pos.x + size.x - 1, pos.y + airspace, pos.z + size.z - 1);

            // 检查区域是否被占用
            if (!IsAreaAvailable(startPos, endPos)) return false;

            // A. 设置岛屿本体 (Solid Body)
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int h = 0; h < size.y; h++)
                    {
                        int3 current = startPos + new int3(x, h, z);
                        UpdateCell(current, (ref GridCellData data) =>
                        {
                            data.Type = GridType.Island;
                            data.IslandID = islandId;
                        });
                    }

            // B. 设置空域 (Airspace, 岛屿上方不可建区域)
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int h = 1; h <= airspace; h++)
                    {
                        int3 current = pos + new int3(x, h, z); // 从锚点向上
                        UpdateCell(current, (ref GridCellData data) =>
                        {
                            data.Type = GridType.IslandAirspace;
                            data.IslandID = islandId;
                        });
                    }

            // C. 设置岛屿表面 (Surface) 为可行走区域
            // 假设 pos.y + 1 为角色站立层
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                {
                    int3 surfaceKey = pos + new int3(x, 1, z);
                    UpdateCell(surfaceKey, (ref GridCellData data) =>
                    {
                        data.IsMovable = true;   // NPC 可移动
                        data.IsBuildable = true; // 可建造建筑
                    });
                }

            return true;
        }

        // --- 3. 辅助方法 ---

        // 定义委托，用于原地修改 Struct 数据
        private delegate void CellUpdateDelegate(ref GridCellData data);

        private void UpdateCell(int3 pos, CellUpdateDelegate action)
        {
            if (WorldGrid.TryGetValue(pos, out GridCellData data))
            {
                action(ref data);
                WorldGrid[pos] = data; // Struct 是值类型，修改后必须赋值回 HashMap
            }
        }

        /// <summary>
        /// 检查区域内所有格子是否为空 (Space)
        /// </summary>
        public bool IsAreaAvailable(int3 start, int3 end)
        {
            for (int x = start.x; x <= end.x; x++)
                for (int y = start.y; y <= end.y; y++)
                    for (int z = start.z; z <= end.z; z++)
                    {
                        int3 key = new int3(x, y, z);
                        if (!WorldGrid.TryGetValue(key, out GridCellData data) || data.Type != GridType.Space)
                            return false;
                    }
            return true;
        }

        // --- 4. A* 寻路逻辑 (对应 GridManager.FindPath) ---
        /// <summary>
        /// 计算两点间的最短路径
        /// </summary>
        /// <returns>路径坐标列表，若无路径返回 null</returns>
        public List<int3> FindPath(int3 startPos, int3 endPos)
        {
            // 基础校验
            if (!WorldGrid.ContainsKey(startPos) || !WorldGrid.ContainsKey(endPos)) return null;
            if (!WorldGrid[startPos].IsMovable || !WorldGrid[endPos].IsMovable) return null;

            var openSet = new List<int3> { startPos };
            var cameFrom = new Dictionary<int3, int3>();

            // gScore: 起点到当前点的代价
            var gScore = new Dictionary<int3, int>();
            gScore[startPos] = 0;

            // fScore: gScore + 启发式代价 (H)
            var fScore = new Dictionary<int3, int>();
            fScore[startPos] = ManhattanDistance(startPos, endPos);

            while (openSet.Count > 0)
            {
                // 1. 取出 F 值最小的节点
                int3 current = openSet[0];
                for (int i = 1; i < openSet.Count; i++)
                {
                    if (fScore.GetValueOrDefault(openSet[i], int.MaxValue) < fScore.GetValueOrDefault(current, int.MaxValue))
                        current = openSet[i];
                }

                // 2. 到达终点
                if (current.Equals(endPos))
                    return ReconstructPath(cameFrom, current);

                openSet.Remove(current);

                // 3. 遍历邻居
                foreach (int3 neighbor in GetNeighbors(current))
                {
                    int tentativeG = gScore[current] + 1; // 假设每格代价为 1

                    if (tentativeG < gScore.GetValueOrDefault(neighbor, int.MaxValue))
                    {
                        cameFrom[neighbor] = current;
                        gScore[neighbor] = tentativeG;
                        fScore[neighbor] = tentativeG + ManhattanDistance(neighbor, endPos);

                        if (!openSet.Contains(neighbor))
                            openSet.Add(neighbor);
                    }
                }
            }

            return null; // 无法到达
        }

        /// <summary>
        /// 获取前后左右的可行走邻居
        /// </summary>
        private List<int3> GetNeighbors(int3 pos)
        {
            List<int3> list = new List<int3>();
            int3[] dirs = { new int3(1, 0, 0), new int3(-1, 0, 0), new int3(0, 0, 1), new int3(0, 0, -1) };

            foreach (var dir in dirs)
            {
                int3 next = pos + dir;
                // 必须在网格内，且标记为 IsMovable
                if (WorldGrid.TryGetValue(next, out GridCellData data) && data.IsMovable)
                {
                    list.Add(next);
                }
            }
            return list;
        }

        private int ManhattanDistance(int3 a, int3 b)
        {
            return math.abs(a.x - b.x) + math.abs(a.y - b.y) + math.abs(a.z - b.z);
        }

        private List<int3> ReconstructPath(Dictionary<int3, int3> cameFrom, int3 current)
        {
            var path = new List<int3> { current };
            while (cameFrom.ContainsKey(current))
            {
                current = cameFrom[current];
                path.Add(current);
            }
            path.Reverse();
            return path;
        }
    }
    // [对应 GridData.cs 类]
    // 注意：ECS中尽量避免使用 string，改用 FixedString
    public struct GridCellData
    {
        public int3 Position;       // 逻辑坐标
        public float3 WorldPosition; // 世界坐标

        public GridType Type;
        public FixedString64Bytes IslandID;   // 归属岛屿ID
        public FixedString64Bytes BuildingID; // 归属建筑ID

        public bool IsMovable;   // 可移动 (用于寻路)
        public bool IsBuildable; // 可建造 (用于放置)
    }
    // [对应 GridData.cs 中的 GridType 枚举]
    public enum GridType : byte
    {
        Space,          // 空地
        Island,         // 岛屿实体
        IslandAirspace, // 岛屿空域
        PublicBridge,   // 公共桥梁
        PrivateBridge   // 私人桥梁
    }
}
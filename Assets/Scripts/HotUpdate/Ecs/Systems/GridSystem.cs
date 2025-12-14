using System.Collections.Generic;
using System.Linq;
using GameFramework.ECS.Components;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;
using Random = Unity.Mathematics.Random;

namespace GameFramework.ECS.Systems
{
    /// <summary>
    /// 网格核心系统 (ECS版)
    /// 负责：全局网格数据维护、注册/注销逻辑、寻路算法、坐标转换
    /// </summary>
    [UpdateInGroup(typeof(SimulationSystemGroup), OrderFirst = true)]
    public partial class GridSystem : SystemBase
    {
        // [核心数据] 全局网格数据容器
        public NativeParallelHashMap<int3, GridCellData> WorldGrid;

        private Random _random;
        private bool _isInitialized = false;

        protected override void OnCreate()
        {
            // 初始化 NativeHashMap (容量预估 100x100x15 = 150,000)
            WorldGrid = new NativeParallelHashMap<int3, GridCellData>(150000, Allocator.Persistent);
            _random = new Random(1234); // 随机种子

            // 自动创建默认配置 (防止空引用)
            if (!SystemAPI.HasSingleton<GridConfigComponent>())
            {
                EntityManager.CreateSingleton(new GridConfigComponent
                {
                    Width = 100,
                    Length = 100,
                    Height = 15,
                    CellSize = 2.0f
                });
                Debug.Log("[GridSystem] 创建默认配置 (100x100x15)");
            }
        }

        protected override void OnDestroy()
        {
            if (WorldGrid.IsCreated) WorldGrid.Dispose();
        }

        protected override void OnUpdate()
        {
            // 延迟初始化：等待配置组件就绪
            if (!_isInitialized && SystemAPI.HasSingleton<GridConfigComponent>())
            {
                InitializeGridData();
                _isInitialized = true;
            }
        }

        // ===========================================================================================
        // 1. 初始化
        // ===========================================================================================
        private void InitializeGridData()
        {
            var config = SystemAPI.GetSingleton<GridConfigComponent>();
            int totalCells = config.Width * config.Length * config.Height;
            if (WorldGrid.Capacity < totalCells) WorldGrid.Capacity = totalCells;

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
                        WorldGrid.TryAdd(gridKey, data);
                    }
                }
            }
        }

        // ===========================================================================================
        // 2. 核心注册/注销逻辑
        // ===========================================================================================

        /// <summary>
        /// 注册岛屿
        /// </summary>
        public bool RegisterIsland(int3 pos, int3 size, int airspace, FixedString64Bytes islandId)
        {
            if (!WorldGrid.IsCreated) return false;

            // 使用严格检测逻辑
            if (!CheckIslandPlacement(pos, size, airspace)) return false;

            // 计算起始位置 (实体底部)
            int3 startPos = new int3(pos.x, pos.y - size.y + 1, pos.z);

            // A. 设置岛屿本体
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int h = 0; h < size.y; h++)
                    {
                        UpdateCell(startPos + new int3(x, h, z), (ref GridCellData data) => {
                            data.Type = GridType.Island;
                            data.IslandID = islandId;
                        });
                    }

            // B. 设置空域 (从锚点上方开始)
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int h = 1; h <= airspace; h++)
                    {
                        UpdateCell(pos + new int3(x, h, z), (ref GridCellData data) => {
                            data.Type = GridType.IslandAirspace;
                            data.IslandID = islandId;
                        });
                    }

            // C. 设置表面 (假设锚点上方一格为表面)
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                {
                    UpdateCell(pos + new int3(x, 1, z), (ref GridCellData data) => {
                        data.IsMovable = true;
                        data.IsBuildable = true;
                    });
                }
            return true;
        }

        public bool UnregisterIsland(int3 pos, int3 size, int airspace, FixedString64Bytes islandId)
        {
            if (!WorldGrid.IsCreated) return false;
            int3 startPos = new int3(pos.x, pos.y - size.y + 1, pos.z);

            // 清理本体
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int h = 0; h < size.y; h++)
                        ResetCellIfMatch(startPos + new int3(x, h, z), islandId);

            // 清理空域
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int h = 1; h <= airspace; h++)
                        ResetCellIfMatch(pos + new int3(x, h, z), islandId);

            // 清理表面属性
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                {
                    UpdateCell(pos + new int3(x, 1, z), (ref GridCellData data) => {
                        data.IsMovable = false;
                        data.IsBuildable = false;
                    });
                }
            return true;
        }

        /// <summary>
        /// 注册建筑
        /// </summary>
        public bool RegisterBuilding(int3 pos, int3 size, FixedString64Bytes buildingId)
        {
            int3 endPos = pos + size - new int3(1, 1, 1);
            if (!IsBuildingBuildable(pos, endPos)) return false;

            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int y = 0; y < size.y; y++)
                    {
                        UpdateCell(pos + new int3(x, y, z), (ref GridCellData data) => {
                            data.Type = GridType.Building;
                            data.BuildingID = buildingId;
                            data.IsMovable = false;
                            data.IsBuildable = false;
                        });
                    }
            return true;
        }

        public bool UnregisterBuilding(int3 pos, int3 size, FixedString64Bytes buildingId)
        {
            for (int x = 0; x < size.x; x++)
                for (int z = 0; z < size.z; z++)
                    for (int y = 0; y < size.y; y++)
                    {
                        int3 current = pos + new int3(x, y, z);
                        if (WorldGrid.TryGetValue(current, out GridCellData cell) && cell.BuildingID == buildingId)
                        {
                            UpdateCell(current, (ref GridCellData data) => {
                                data.Type = GridType.Space;
                                data.BuildingID = "";
                                data.IsMovable = true; // 恢复可行走
                                data.IsBuildable = true; // 恢复可建造
                            });
                        }
                    }
            return true;
        }

        /// <summary>
        /// 注册桥梁
        /// </summary>
        public bool RegisterBridge(int3 pos, FixedString64Bytes bridgeId)
        {
            if (!IsBridgeBuildable(pos)) return false;

            UpdateCell(pos, (ref GridCellData data) => {
                data.Type = GridType.PublicBridge;
                data.BuildingID = bridgeId;
                data.IsMovable = true;
                data.IsBuildable = false;
            });
            return true;
        }

        public bool UnregisterBridge(int3 pos, FixedString64Bytes bridgeId)
        {
            if (!WorldGrid.TryGetValue(pos, out GridCellData cell)) return false;
            if (cell.BuildingID == bridgeId)
            {
                UpdateCell(pos, (ref GridCellData data) => {
                    data.Type = GridType.Space;
                    data.BuildingID = "";
                    data.IsMovable = false;
                    data.IsBuildable = false;
                });
                return true;
            }
            return false;
        }

        // ===========================================================================================
        // 3. 检测与查询 API
        // ===========================================================================================

        /// <summary>
        /// 检查岛屿放置是否合法 (核心逻辑：检查包含底部延伸的整个包围盒)
        /// </summary>
        public bool CheckIslandPlacement(int3 anchorPos, int3 size, int airspace)
        {
            // 实体底部 = 锚点Y - 高度 + 1
            int3 bodyBottom = new int3(anchorPos.x, anchorPos.y - size.y + 1, anchorPos.z);
            // 整体最高点 = 锚点Y + 空域
            int3 totalTop = new int3(anchorPos.x + size.x - 1, anchorPos.y + airspace, anchorPos.z + size.z - 1);

            // 1. 边界检查：防止底部超出网格下界
            if (!IsInGridRange(bodyBottom, totalTop)) return false;

            // 2. 占用检查：整个区域必须是 Space
            return CheckAreaType(bodyBottom, totalTop, GridType.Space);
        }

        /// <summary>
        /// 简易岛屿检测 (兼容旧逻辑)
        /// </summary>
        public bool IsIslandBuildable(int3 start, int3 end)
        {
            return IsInGridRange(start, end) && CheckAreaType(start, end, GridType.Space);
        }

        public bool IsBuildingBuildable(int3 start, int3 end)
        {
            if (!IsInGridRange(start, end)) return false;

            for (int x = start.x; x <= end.x; x++)
                for (int y = start.y; y <= end.y; y++)
                    for (int z = start.z; z <= end.z; z++)
                    {
                        if (!WorldGrid.TryGetValue(new int3(x, y, z), out GridCellData cell) || !cell.IsBuildable)
                            return false;
                    }
            return true;
        }

        public bool IsBridgeBuildable(int3 pos)
        {
            return IsValidPosition(pos) && WorldGrid.TryGetValue(pos, out GridCellData cell) && cell.Type == GridType.Space;
        }

        public bool HasBuildablePosition(PlacementType type)
        {
            foreach (var kvp in WorldGrid)
            {
                var cell = kvp.Value;
                if (type == PlacementType.Building && cell.IsBuildable) return true;
                if (type == PlacementType.Bridge && cell.Type == GridType.Space) return true;
                if (type == PlacementType.Island) return true;
            }
            return false;
        }

        public NativeList<GridCellData> GetBridgeablePositions(Allocator allocator)
        {
            NativeList<GridCellData> results = new NativeList<GridCellData>(allocator);
            foreach (var kvp in WorldGrid)
            {
                var pos = kvp.Key;
                var cell = kvp.Value;
                if (cell.Type == GridType.Space && !cell.IsMovable && HasMovableNeighbor(pos))
                {
                    results.Add(cell);
                }
            }
            return results;
        }

        // ===========================================================================================
        // 4. 辅助工具 API
        // ===========================================================================================

        public bool IsValidPosition(int3 pos)
        {
            if (!SystemAPI.HasSingleton<GridConfigComponent>()) return false;
            var config = SystemAPI.GetSingleton<GridConfigComponent>();
            return pos.x >= 0 && pos.x < config.Width &&
                   pos.y >= 0 && pos.y < config.Height &&
                   pos.z >= 0 && pos.z < config.Length;
        }

        private bool IsInGridRange(int3 start, int3 end)
        {
            return IsValidPosition(start) && IsValidPosition(end);
        }

        public float3 GridToWorldPosition(int3 gridPos)
        {
            if (!SystemAPI.HasSingleton<GridConfigComponent>()) return float3.zero;
            return new float3(gridPos.x, gridPos.y, gridPos.z) * SystemAPI.GetSingleton<GridConfigComponent>().CellSize;
        }

        public int3 WorldToGridPosition(float3 worldPos)
        {
            if (!SystemAPI.HasSingleton<GridConfigComponent>()) return int3.zero;
            float cellSize = SystemAPI.GetSingleton<GridConfigComponent>().CellSize;
            return new int3((int)math.round(worldPos.x / cellSize), (int)math.round(worldPos.y / cellSize), (int)math.round(worldPos.z / cellSize));
        }

        public float3 CalculateRegionCenter(int3 startGridPos, int3 endGridPos)
        {
            float3 p1 = GridToWorldPosition(startGridPos);
            float3 p2 = GridToWorldPosition(endGridPos);
            return (p1 + p2) * 0.5f;
        }

        public int3 GetRandomWalkablePosition(int3 center, int radius)
        {
            for (int i = 0; i < 10; i++)
            {
                int3 offset = new int3(_random.NextInt(-radius, radius), 0, _random.NextInt(-radius, radius));
                int3 target = center + offset;
                if (WorldGrid.TryGetValue(target, out GridCellData cell) && cell.IsMovable)
                {
                    return target;
                }
            }
            return center;
        }

        // ===========================================================================================
        // 5. A* 寻路
        // ===========================================================================================
        public List<int3> FindPath(int3 start, int3 end)
        {
            if (!IsValidPosition(start) || !IsValidPosition(end)) return null;
            if (!WorldGrid[start].IsMovable || !WorldGrid[end].IsMovable) return null;

            var openSet = new List<int3> { start };
            var cameFrom = new Dictionary<int3, int3>();
            var gScore = new Dictionary<int3, int> { { start, 0 } };
            var fScore = new Dictionary<int3, int> { { start, ManhattanDistance(start, end) } };

            while (openSet.Count > 0)
            {
                int3 current = GetLowestF(openSet, fScore);

                if (current.Equals(end)) return ReconstructPath(cameFrom, current);

                openSet.Remove(current);

                foreach (int3 neighbor in GetNeighbors(current))
                {
                    int tentativeG = gScore[current] + 1;
                    if (tentativeG < gScore.GetValueOrDefault(neighbor, int.MaxValue))
                    {
                        cameFrom[neighbor] = current;
                        gScore[neighbor] = tentativeG;
                        fScore[neighbor] = tentativeG + ManhattanDistance(neighbor, end);
                        if (!openSet.Contains(neighbor)) openSet.Add(neighbor);
                    }
                }
            }
            return null;
        }

        // --- 私有辅助方法 ---

        private delegate void CellUpdateDelegate(ref GridCellData data);
        private void UpdateCell(int3 pos, CellUpdateDelegate action)
        {
            if (WorldGrid.TryGetValue(pos, out GridCellData data))
            {
                action(ref data);
                WorldGrid[pos] = data;
            }
        }

        private void ResetCellIfMatch(int3 pos, FixedString64Bytes id)
        {
            if (WorldGrid.TryGetValue(pos, out GridCellData cell) && cell.IslandID == id)
            {
                UpdateCell(pos, (ref GridCellData data) => {
                    data.Type = GridType.Space;
                    data.IslandID = "";
                });
            }
        }

        private bool CheckAreaType(int3 start, int3 end, GridType targetType)
        {
            for (int x = start.x; x <= end.x; x++)
                for (int y = start.y; y <= end.y; y++)
                    for (int z = start.z; z <= end.z; z++)
                    {
                        if (!WorldGrid.TryGetValue(new int3(x, y, z), out GridCellData cell) || cell.Type != targetType)
                            return false;
                    }
            return true;
        }

        private bool HasMovableNeighbor(int3 pos)
        {
            int3[] dirs = { new int3(1, 0, 0), new int3(-1, 0, 0), new int3(0, 0, 1), new int3(0, 0, -1) };
            foreach (var dir in dirs)
            {
                if (WorldGrid.TryGetValue(pos + dir, out GridCellData n) && n.IsMovable) return true;
            }
            return false;
        }

        private List<int3> GetNeighbors(int3 pos)
        {
            List<int3> list = new List<int3>();
            int3[] dirs = { new int3(1, 0, 0), new int3(-1, 0, 0), new int3(0, 0, 1), new int3(0, 0, -1) };

            foreach (var dir in dirs)
            {
                int3 next = pos + dir;
                if (IsValidPosition(next) && WorldGrid[next].IsMovable) list.Add(next);
            }
            return list;
        }

        private int ManhattanDistance(int3 a, int3 b) => math.abs(a.x - b.x) + math.abs(a.y - b.y) + math.abs(a.z - b.z);

        private int3 GetLowestF(List<int3> openSet, Dictionary<int3, int> fScore)
        {
            int3 lowest = openSet[0];
            int minVal = fScore.GetValueOrDefault(lowest, int.MaxValue);
            for (int i = 1; i < openSet.Count; i++)
            {
                int val = fScore.GetValueOrDefault(openSet[i], int.MaxValue);
                if (val < minVal) { minVal = val; lowest = openSet[i]; }
            }
            return lowest;
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

    public struct GridCellData
    {
        public int3 Position;
        public float3 WorldPosition;
        public GridType Type;
        public FixedString64Bytes IslandID;
        public FixedString64Bytes BuildingID;
        public bool IsMovable;
        public bool IsBuildable;
    }

    public enum GridType : byte
    {
        Space,
        Island,
        IslandAirspace,
        Building,
        PublicBridge,
        PrivateBridge
    }
}
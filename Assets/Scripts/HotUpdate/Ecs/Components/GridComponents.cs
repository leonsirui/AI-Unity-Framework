using Unity.Entities;
using Unity.Mathematics;

namespace GameFramework.ECS.Components
{
    // [保留] 基础网格属性
    public struct GridPositionComponent : IComponentData
    {
        public int3 Value; // 格子的逻辑坐标 (x, y, z)
    }

    public struct ObjectSizeComponent : IComponentData
    {
        public int3 Size;
    }

    // [保留] 标签组件
    public struct BuildingTag : IComponentData { }
    public struct IslandTag : IComponentData { }
    public struct PreviewTag : IComponentData { } // 预览虚影标签

    // [新增] 网格层标识 (可选，用于物理过滤，防止射线打到别的东西)
    public struct GridCellTag : IComponentData { }

    // [保留] 地图配置
    public struct GridConfigComponent : IComponentData
    {
        public int Width;
        public int Length;
        public int Height;
        public float CellSize;
    }

    // [保留] 放置状态
    public struct PlacementStateComponent : IComponentData
    {
        public bool IsActive;
        public int CurrentObjectId;
        public PlacementType Type;

        // 这里的坐标将直接从射线命中的 Entity 上读取
        public int3 CurrentGridPos;

        public bool IsPositionValid;
        public int RotationIndex;
    }

    // [保留] 放置请求
    public struct PlaceObjectRequest : IComponentData
    {
        public int ObjectId;
        public int3 Position;
        public int3 Size;
        public PlacementType Type;
        public int AirspaceHeight;
        public quaternion Rotation;
    }

    public enum PlacementType
    {
        None,
        Island,
        Building,
        Bridge
    }

    // [已移除] GlobalInputComponent 及其相关逻辑
}
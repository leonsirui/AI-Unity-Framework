using Unity.Entities;
using Unity.Mathematics;

namespace GameFramework.ECS.Components
{
    // ==========================================
    // 基础网格属性
    // ==========================================

    // 网格坐标组件（逻辑坐标）
    public struct GridPositionComponent : IComponentData
    {
        public int3 Value; // x, y, z
    }

    // 物体尺寸组件（用于计算占用格子）
    public struct ObjectSizeComponent : IComponentData
    {
        public int3 Size; // 长, 高, 宽
    }

    // ==========================================
    // 标签组件 (Tags)
    // ==========================================

    public struct BuildingTag : IComponentData { }
    public struct IslandTag : IComponentData { }

    // 预览标签：标记该实体仅为放置时的预览（半透明/不阻挡）
    public struct PreviewTag : IComponentData { }

    // ==========================================
    // 单例配置与状态 (Singletons)
    // ==========================================

    // 网格地图配置
    public struct GridConfigComponent : IComponentData
    {
        public int Width;
        public int Length;
        public int Height;
        public float CellSize;
    }
    // 放置系统状态
    public struct PlacementStateComponent : IComponentData
    {
        public bool IsActive;
        public int CurrentObjectId;
        public PlacementType Type;
        public int3 CurrentGridPos;
        public bool IsPositionValid;

        // [新增] 旋转角度 (0, 1, 2, 3 对应 0, 90, 180, 270)
        public int RotationIndex;
    }

    // 放置请求
    public struct PlaceObjectRequest : IComponentData
    {
        public int ObjectId;
        public int3 Position;
        public int3 Size;
        public PlacementType Type;
        public int AirspaceHeight;

        // [新增] 最终的旋转四元数
        public quaternion Rotation;
    }

    public enum PlacementType
    {
        None,
        Island,
        Building,
        Bridge
    }
}
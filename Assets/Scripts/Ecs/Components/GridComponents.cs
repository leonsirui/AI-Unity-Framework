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
        public bool IsActive;           // 是否开启放置模式
        public int CurrentObjectId;     // 当前选中的物体ID（对应预制体/Config）
        public PlacementType Type;      // 放置类型
        public Entity PreviewEntity;    // 当前预览实体的引用
        public int3 CurrentGridPos;     // 当前鼠标对齐的网格坐标
        public bool IsPositionValid;    // 当前位置是否可以建造
    }

    // 放置请求（作为一次性命令组件）
    public struct PlaceObjectRequest : IComponentData
    {
        public int ObjectId;       // 配置ID (对应 Prefab)
        public int3 Position;      // 锚点位置
        public int3 Size;          // 尺寸 (长, 高, 宽)
        public PlacementType Type; // 类型

        // --- 新增岛屿特有参数 ---
        public int AirspaceHeight; // 岛屿空域高度 (仅 Type == Island 时有效)
    }

    public enum PlacementType
    {
        None,
        Island,
        Building,
        Bridge
    }
}
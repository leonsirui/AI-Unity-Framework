using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;

namespace GameFramework.ECS.Components
{
    #region 通用组件定义
    public struct DestroyTag : IComponentData { }

    // 这是一个特殊的组件，整个世界只存一份，用于充当 InputManager 和 ECS 之间的桥梁
    public struct GlobalInputComponent : IComponentData
    {
        // --- 新增放置系统输入 ---
        public bool IsConfirmPlace;     // 是否按下了放置键 (Space/Click)
        public bool IsCancelPlace;      // 是否取消 (Esc/RightClick)
        public int3 HoverGridPosition;  // 鼠标悬停的网格坐标
        public bool HasHoverTarget;     // 鼠标是否指在有效的放置平面上
    }
    #endregion

    #region 网格相关组件定义
    

    // [单例组件] 全局网格配置
    public struct GridConfigComponent : IComponentData
    {
        public int Width;      // X轴数量
        public int Length;     // Z轴数量
        public int Height;     // Y轴层数
        public float CellSize; // 格子大小
    }

    // [标签] 用于标记可视化的格子实体
    public struct VisualGridTag : IComponentData { }

    // [标签] 用于标记桥梁提示的格子实体
    public struct BridgeHintTag : IComponentData { }











    public struct GridPositionComponent : IComponentData
    {
        public int3 Value; // 格子的逻辑坐标 (x, y, z)
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
    #endregion

    #region 岛屿相关组件定义
    public struct IslandComponent : IComponentData
    {
        public int AirspaceHeight; // 空域高度
    }
    public struct NewIslandTag : IComponentData { }
    #endregion

    #region 寻路相关组件定义
    public struct PathfindingRequest : IComponentData, IEnableableComponent
    {
        public int3 StartPosition;
        public int3 EndPosition;
        public bool IsPending; // 标记是否等待处理
    }

    // 路径缓冲区：存储计算出的路径结果
    [InternalBufferCapacity(50)] // 预设容量，超过会自动分配堆内存
    public struct PathBufferElement : IBufferElementData
    {
        public int3 Position;
    }

    // 寻路代理标签：标记该单位具备寻路能力
    public struct PathfindingAgentTag : IComponentData { }
    #endregion
}

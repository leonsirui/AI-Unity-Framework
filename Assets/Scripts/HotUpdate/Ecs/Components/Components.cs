using Unity.Entities;
using Unity.Mathematics;

namespace GameFramework.ECS.Components
{
    public struct DestroyTag : IComponentData { }

    // 位置组件(如果不使用Transform)
    public struct PositionComponent : IComponentData
    {
        public float3 Value;
    }

    // 旋转组件
    public struct RotationComponent : IComponentData
    {
        public quaternion Value;
    }

    // 输入组件
    public struct InputComponent : IComponentData
    {
        public float2 Move;
        public bool Fire;
        public bool Jump;
    }

    // 这是一个特殊的组件，整个世界只存一份，用于充当 InputManager 和 ECS 之间的桥梁
    public struct GlobalInputComponent : IComponentData
    {
        // --- 新增放置系统输入 ---
        public bool IsConfirmPlace;     // 是否按下了放置键 (Space/Click)
        public bool IsCancelPlace;      // 是否取消 (Esc/RightClick)
        public int3 HoverGridPosition;  // 鼠标悬停的网格坐标
        public bool HasHoverTarget;     // 鼠标是否指在有效的放置平面上
    }
}

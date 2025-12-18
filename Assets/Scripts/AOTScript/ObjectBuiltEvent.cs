using GameFramework.ECS.Components; // 需要引用 PlacementType

namespace GameFramework.Events
{
    public struct ObjectBuiltEvent
    {
        public PlacementType Type;
    }
}
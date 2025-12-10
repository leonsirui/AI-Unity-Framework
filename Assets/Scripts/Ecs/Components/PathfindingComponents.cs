using Unity.Entities;
using Unity.Mathematics;

namespace GameFramework.ECS.Components
{
    // 寻路请求组件：挂载到需要寻路的实体上
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
}
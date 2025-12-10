using GameFramework.ECS.Components;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine; // 仅用于 Material/GameObject 交互

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial class PlacementSystem : SystemBase
    {
        private GridOccupancySystem _gridSystem;

        protected override void OnCreate()
        {
            RequireForUpdate<GridConfigComponent>();
            RequireForUpdate<GlobalInputComponent>();
            RequireForUpdate<PlacementStateComponent>();

            // 初始化放置状态单例
            EntityManager.CreateSingleton<PlacementStateComponent>();
        }

        protected override void OnStartRunning()
        {
            _gridSystem = World.GetExistingSystemManaged<GridOccupancySystem>();
        }

        protected override void OnUpdate()
        {
            var input = SystemAPI.GetSingleton<GlobalInputComponent>();
            var gridConfig = SystemAPI.GetSingleton<GridConfigComponent>();

            var stateEntity = SystemAPI.GetSingletonEntity<PlacementStateComponent>();
            var state = SystemAPI.GetComponent<PlacementStateComponent>(stateEntity);

            // 0. 开启/关闭放置模式的测试代码 (按 B 键开启建筑放置)
            if (UnityEngine.Input.GetKeyDown(KeyCode.B))
            {
                state.IsActive = true;
                state.Type = PlacementType.Building;
                state.CurrentObjectId = 1001; // 假设ID
                Debug.Log("进入放置模式");
            }

            if (!state.IsActive)
            {
                // 如果刚刚退出，销毁预览实体
                if (state.PreviewEntity != Entity.Null)
                {
                    EntityManager.DestroyEntity(state.PreviewEntity);
                    state.PreviewEntity = Entity.Null;
                    SystemAPI.SetComponent(stateEntity, state);
                }
                return;
            }

            // 1. 处理取消
            if (input.IsCancelPlace)
            {
                state.IsActive = false;
                SystemAPI.SetComponent(stateEntity, state);
                return;
            }

            // 2. 创建预览实体 (如果不存在)
            int3 objectSize = new int3(2, 1, 2); // 示例尺寸：2x2
            if (state.PreviewEntity == Entity.Null)
            {
                state.PreviewEntity = EntityManager.CreateEntity();
                EntityManager.AddComponent<PreviewTag>(state.PreviewEntity);
                EntityManager.AddComponentData(state.PreviewEntity, new LocalTransform { Scale = 1, Rotation = quaternion.identity });
                EntityManager.AddComponentData(state.PreviewEntity, new ObjectSizeComponent { Size = objectSize });

                // TODO: 这里应该调用 EntityFactory 加载真实的 Mesh
                // 暂时为了演示，我们只添加数据，渲染部分假设已处理或使用简单 Cube
            }

            // 3. 更新位置和检测
            if (input.HasHoverTarget)
            {
                state.CurrentGridPos = input.HoverGridPosition;

                // 检查是否合法 (调用 GridSystem)
                state.IsPositionValid = _gridSystem.IsAreaAvailable(state.CurrentGridPos, objectSize);

                // 更新预览实体位置
                float3 worldPos = new float3(
                    state.CurrentGridPos.x * gridConfig.CellSize,
                    state.CurrentGridPos.y * gridConfig.CellSize,
                    state.CurrentGridPos.z * gridConfig.CellSize
                );

                SystemAPI.SetComponent(state.PreviewEntity, new LocalTransform
                {
                    Position = worldPos,
                    Rotation = quaternion.identity,
                    Scale = 1f
                });

                // 可选：在这里根据 IsPositionValid 改变材质颜色 (Hybrid Renderer)
                // var renderMesh = EntityManager.GetSharedComponent<RenderMesh>(state.PreviewEntity);
                // renderMesh.material = state.IsPositionValid ? validMat : invalidMat;
            }

            // 4. 确认放置
            if (input.IsConfirmPlace && state.IsPositionValid)
            {
                var requestEntity = EntityManager.CreateEntity();
                EntityManager.AddComponentData(requestEntity, new PlaceObjectRequest
                {
                    ObjectId = state.CurrentObjectId,
                    Position = state.CurrentGridPos,
                    Type = state.Type,
                    Size = objectSize
                });

                Debug.Log($"生成请求: ID={state.CurrentObjectId} at {state.CurrentGridPos}");
            }

            // 写回状态
            SystemAPI.SetComponent(stateEntity, state);
        }
    }

    // [核心修改] 升级生成系统，处理岛屿逻辑
    [UpdateInGroup(typeof(SimulationSystemGroup))]
    public partial struct ObjectSpawnSystem : ISystem
    {
        public void OnUpdate(ref SystemState state)
        {
            var ecbSingleton = SystemAPI.GetSingleton<EndSimulationEntityCommandBufferSystem.Singleton>();
            var ecb = ecbSingleton.CreateCommandBuffer(state.WorldUnmanaged);

            if (!SystemAPI.TryGetSingleton(out GridConfigComponent gridConfig)) return;

            // 处理所有生成请求
            foreach (var (req, entity) in SystemAPI.Query<RefRO<PlaceObjectRequest>>().WithEntityAccess())
            {
                var request = req.ValueRO;

                // 1. 计算世界坐标
                float3 worldPos = new float3(
                    request.Position.x * gridConfig.CellSize,
                    request.Position.y * gridConfig.CellSize,
                    request.Position.z * gridConfig.CellSize
                );

                // 2. 创建新实体 (这里通常应使用 EntityFactory.SpawnEntity，为演示简化为 CreateEntity)
                // 实际项目中建议：var newEntity = EntityFactory.SpawnEntity(request.ObjectId, ...); 
                // 这里演示纯 ECS 方式创建：
                var newEntity = ecb.CreateEntity();

                // 3. [通用组件] 基础数据
                ecb.AddComponent(newEntity, new LocalTransform
                {
                    Position = worldPos,
                    Rotation = quaternion.identity,
                    Scale = 1f
                });
                ecb.AddComponent(newEntity, new GridPositionComponent { Value = request.Position });
                ecb.AddComponent(newEntity, new ObjectSizeComponent { Size = request.Size });

                // 4. [分支逻辑] 移植 IslandManager 的分类处理逻辑
                if (request.Type == PlacementType.Island)
                {
                    // A. 打上身份标签
                    ecb.AddComponent(newEntity, new IslandTag());

                    // B. [关键] 挂载岛屿数据 (替代原 IslandData 类)
                    ecb.AddComponent(newEntity, new IslandComponent
                    {
                        AirspaceHeight = request.AirspaceHeight
                    });

                    // C. [核心] 挂载 "New" 标签
                    // 这相当于调用了原项目的 GridManager.RegisterIsland()
                    // 下一帧 IslandRegistrationSystem 会捕捉到这个标签并修改网格数据
                    ecb.AddComponent(newEntity, new NewIslandTag());

                    // Debug.Log($"[ECS] 岛屿生成: Pos={request.Position}, Airspace={request.AirspaceHeight}");
                }
                else if (request.Type == PlacementType.Building)
                {
                    ecb.AddComponent(newEntity, new BuildingTag());
                    // 建筑可能不需要 New 标签，除非建筑也改变地形属性
                }

                // 5. 销毁请求实体
                ecb.DestroyEntity(entity);
            }
        }
    }
}
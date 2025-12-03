using GameFramework.ECS.Components;
using GameFramework.Managers;
using Unity.Burst;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;

namespace GameFramework.ECS.Systems
{
    // 移动系统
    [BurstCompile]
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial struct MoveSystem : ISystem
    {
        [BurstCompile]
        public void OnUpdate(ref SystemState state)
        {
            float deltaTime = SystemAPI.Time.DeltaTime;

            foreach (var (transform, move) in
                SystemAPI.Query<RefRW<LocalTransform>, RefRO<MoveComponent>>())
            {
                if (math.lengthsq(move.ValueRO.Direction) > 0.001f)
                {
                    float3 movement = math.normalize(move.ValueRO.Direction)
                        * move.ValueRO.Speed * deltaTime;
                    transform.ValueRW.Position += movement;
                }
            }
        }
    }

    // 输入系统
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    [UpdateBefore(typeof(MoveSystem))]
    public partial class InputSystem : SystemBase
    {
        protected override void OnUpdate()
        {
            var inputData = InputManager.Instance.GetInputData();

            Entities
                .WithAll<PlayerTag>()
                .ForEach((ref MoveComponent move, ref InputComponent input) =>
                {
                    input.Move = inputData.Move;
                    input.Fire = inputData.Fire;
                    input.Jump = inputData.Jump;

                    move.Direction = new float3(input.Move.x, 0, input.Move.y);
                }).Run();
        }
    }

    // 伤害处理系统
    [BurstCompile]
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial struct DamageSystem : ISystem
    {
        [BurstCompile]
        public void OnUpdate(ref SystemState state)
        {
            var ecb = new EntityCommandBuffer(Unity.Collections.Allocator.Temp);

            foreach (var (damage, health, entity) in
                SystemAPI.Query<RefRO<DamageComponent>, RefRW<HealthComponent>>()
                    .WithEntityAccess())
            {
                health.ValueRW.Current -= damage.ValueRO.Amount;

                // 移除伤害组件
                ecb.RemoveComponent<DamageComponent>(entity);

                // 如果死亡,添加销毁标签
                if (health.ValueRO.IsDead)
                {
                    ecb.AddComponent<DestroyTag>(entity);
                }
            }

            ecb.Playback(state.EntityManager);
            ecb.Dispose();
        }
    }

    // 销毁系统
    [BurstCompile]
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    [UpdateAfter(typeof(DamageSystem))]
    public partial struct DestroySystem : ISystem
    {
        [BurstCompile]
        public void OnUpdate(ref SystemState state)
        {
            var ecb = new EntityCommandBuffer(Unity.Collections.Allocator.Temp);

            foreach (var (_, entity) in
                SystemAPI.Query<RefRO<DestroyTag>>().WithEntityAccess())
            {
                ecb.DestroyEntity(entity);
            }

            ecb.Playback(state.EntityManager);
            ecb.Dispose();
        }
    }

    // AI系统示例
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial class EnemyAISystem : SystemBase
    {
        protected override void OnUpdate()
        {
            var playerQuery = GetEntityQuery(typeof(PlayerTag), typeof(LocalTransform));

            if (playerQuery.CalculateEntityCount() == 0)
                return;

            var playerTransform = playerQuery.GetSingleton<LocalTransform>();
            var playerPos = playerTransform.Position;
            var currentTime = (float)SystemAPI.Time.ElapsedTime;

            Entities
                .WithAll<EnemyTag>()
                .ForEach((ref MoveComponent move,
                         ref AttackComponent attack,
                         in LocalTransform transform) =>
                {
                    float3 direction = playerPos - transform.Position;
                    float distance = math.length(direction);

                    if (distance > attack.Range)
                    {
                        // 移动向玩家
                        move.Direction = direction / distance;
                    }
                    else
                    {
                        // 在攻击范围内,停止移动
                        move.Direction = float3.zero;

                        // 尝试攻击
                        if (currentTime - attack.LastAttackTime >= attack.Cooldown)
                        {
                            attack.LastAttackTime = currentTime;
                            // 触发攻击事件或添加伤害组件到玩家
                        }
                    }
                }).Run();
        }
    }
}

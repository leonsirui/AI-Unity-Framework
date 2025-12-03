using GameFramework.ECS.Components;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;

namespace GameFramework.ECS.Systems
{
    [BurstCompile]
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial struct ProjectileSystem : ISystem
    {
        [BurstCompile]
        public void OnUpdate(ref SystemState state)
        {
            var deltaTime = SystemAPI.Time.DeltaTime;
            var currentTime = (float)SystemAPI.Time.ElapsedTime;
            var ecb = new EntityCommandBuffer(Allocator.Temp);

            // 移动弹丸
            foreach (var (transform, move) in
                SystemAPI.Query<RefRW<LocalTransform>, RefRO<MoveComponent>>()
                    .WithAll<ProjectileComponent>())
            {
                float3 movement = move.ValueRO.Direction * move.ValueRO.Speed * deltaTime;
                transform.ValueRW.Position += movement;
            }

            // 检测弹丸寿命
            foreach (var (projectile, entity) in
                SystemAPI.Query<RefRO<ProjectileComponent>>()
                    .WithEntityAccess())
            {
                if (currentTime - projectile.ValueRO.SpawnTime >= projectile.ValueRO.Lifetime)
                {
                    ecb.AddComponent<DestroyTag>(entity);
                }
            }

            ecb.Playback(state.EntityManager);
            ecb.Dispose();
        }
    }

    // 碰撞检测系统 (简化版，实际应使用Unity Physics)
    [BurstCompile]
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    [UpdateAfter(typeof(ProjectileSystem))]
    public partial struct ProjectileCollisionSystem : ISystem
    {
        [BurstCompile]
        public void OnUpdate(ref SystemState state)
        {
            var ecb = new EntityCommandBuffer(Allocator.Temp);

            // 获取所有敌人的位置
            var enemyQuery = SystemAPI.QueryBuilder()
                .WithAll<EnemyTag, LocalTransform>()
                .Build();

            var enemyEntities = enemyQuery.ToEntityArray(Allocator.Temp);
            var enemyTransforms = enemyQuery.ToComponentDataArray<LocalTransform>(Allocator.Temp);

            // 检测弹丸与敌人的碰撞
            foreach (var (projectileTransform, projectile, projectileEntity) in
                SystemAPI.Query<RefRO<LocalTransform>, RefRO<ProjectileComponent>>()
                    .WithEntityAccess())
            {
                for (int i = 0; i < enemyEntities.Length; i++)
                {
                    float distance = math.distance(
                        projectileTransform.ValueRO.Position,
                        enemyTransforms[i].Position
                    );

                    if (distance < 0.5f) // 碰撞半径
                    {
                        // 对敌人造成伤害
                        ecb.AddComponent(enemyEntities[i], new DamageComponent
                        {
                            Amount = projectile.ValueRO.Damage,
                            Source = projectile.ValueRO.Owner
                        });

                        // 销毁弹丸
                        ecb.AddComponent<DestroyTag>(projectileEntity);
                        break;
                    }
                }
            }

            enemyEntities.Dispose();
            enemyTransforms.Dispose();
            ecb.Playback(state.EntityManager);
            ecb.Dispose();
        }
    }
}

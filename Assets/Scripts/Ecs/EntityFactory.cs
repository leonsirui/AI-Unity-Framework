using GameFramework.ECS.Components;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.ECS
{
    public class EntityFactory
    {
        private EntityManager _entityManager;

        public EntityFactory(EntityManager entityManager)
        {
            _entityManager = entityManager;
        }

        public Entity CreatePlayer(float3 position)
        {
            var archetype = _entityManager.CreateArchetype(
                typeof(PlayerTag),
                typeof(LocalTransform),
                typeof(MoveComponent),
                typeof(HealthComponent),
                typeof(InputComponent),
                typeof(ExperienceComponent)
            );

            var entity = _entityManager.CreateEntity(archetype);

            _entityManager.SetComponentData(entity, new LocalTransform
            {
                Position = position,
                Rotation = quaternion.identity,
                Scale = 1f
            });

            _entityManager.SetComponentData(entity, new MoveComponent
            {
                Speed = 5f,
                Direction = float3.zero
            });

            _entityManager.SetComponentData(entity, new HealthComponent
            {
                Current = 100f,
                Max = 100f
            });

            _entityManager.SetComponentData(entity, new ExperienceComponent
            {
                Level = 1,
                CurrentXP = 0,
                RequiredXP = 100
            });

            return entity;
        }

        public Entity CreateEnemy(float3 position, EnemyType enemyType)
        {
            var archetype = _entityManager.CreateArchetype(
                typeof(EnemyTag),
                typeof(LocalTransform),
                typeof(MoveComponent),
                typeof(HealthComponent),
                typeof(AttackComponent)
            );

            var entity = _entityManager.CreateEntity(archetype);

            _entityManager.SetComponentData(entity, new LocalTransform
            {
                Position = position,
                Rotation = quaternion.identity,
                Scale = 1f
            });

            var stats = GetEnemyStats(enemyType);

            _entityManager.SetComponentData(entity, new MoveComponent
            {
                Speed = stats.MoveSpeed,
                Direction = float3.zero
            });

            _entityManager.SetComponentData(entity, new HealthComponent
            {
                Current = stats.Health,
                Max = stats.Health
            });

            _entityManager.SetComponentData(entity, new AttackComponent
            {
                Damage = stats.Damage,
                Range = stats.Range,
                Cooldown = stats.AttackCooldown,
                LastAttackTime = 0
            });

            return entity;
        }

        public Entity CreateProjectile(float3 position, float3 direction, Entity owner)
        {
            var archetype = _entityManager.CreateArchetype(
                typeof(LocalTransform),
                typeof(MoveComponent),
                typeof(ProjectileComponent)
            );

            var entity = _entityManager.CreateEntity(archetype);

            _entityManager.SetComponentData(entity, new LocalTransform
            {
                Position = position,
                Rotation = quaternion.LookRotation(direction, math.up()),
                Scale = 1f
            });

            _entityManager.SetComponentData(entity, new MoveComponent
            {
                Speed = 10f,
                Direction = direction
            });

            // --- 修改部分开始 ---
            // 修正方法：通过 entityManager.World.Time 获取当前模拟时间
            _entityManager.SetComponentData(entity, new ProjectileComponent
            {
                Damage = 10f,
                Owner = owner,
                Lifetime = 5f,
                // 这里使用 _entityManager.World.Time.ElapsedTime
                SpawnTime = (float)_entityManager.World.Time.ElapsedTime
            });
            // --- 修改部分结束 ---

            return entity;
        }

        private EnemyStats GetEnemyStats(EnemyType type)
        {
            return type switch
            {
                EnemyType.Weak => new EnemyStats
                {
                    Health = 50f,
                    MoveSpeed = 2f,
                    Damage = 5f,
                    Range = 1.5f,
                    AttackCooldown = 1.5f
                },
                EnemyType.Normal => new EnemyStats
                {
                    Health = 100f,
                    MoveSpeed = 3f,
                    Damage = 10f,
                    Range = 2f,
                    AttackCooldown = 1f
                },
                EnemyType.Strong => new EnemyStats
                {
                    Health = 200f,
                    MoveSpeed = 4f,
                    Damage = 20f,
                    Range = 2.5f,
                    AttackCooldown = 0.8f
                },
                _ => new EnemyStats()
            };
        }
    }

    public enum EnemyType
    {
        Weak,
        Normal,
        Strong
    }

    public struct EnemyStats
    {
        public float Health;
        public float MoveSpeed;
        public float Damage;
        public float Range;
        public float AttackCooldown;
    }

    // 添加弹丸组件
    public struct ProjectileComponent : IComponentData
    {
        public float Damage;
        public Entity Owner;
        public float Lifetime;
        public float SpawnTime;
    }
}

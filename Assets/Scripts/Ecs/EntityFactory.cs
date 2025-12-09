using GameFramework.ECS.Components;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Rendering;
using Unity.Transforms;
using UnityEngine;
using UnityEngine.Rendering;

namespace GameFramework.ECS
{
    public class EntityFactory
    {
        private EntityManager _entityManager;

        public EntityFactory(EntityManager entityManager)
        {
            _entityManager = entityManager;
        }

        private void AddRenderMesh(Entity entity, Mesh mesh, Material material, float scale = 1f)
        {
            if (mesh == null || material == null) return;

            // 构建渲染描述
            var renderMeshArray = new RenderMeshArray(new Material[] { material }, new Mesh[] { mesh });
            var renderMeshDescription = new RenderMeshDescription(
                shadowCastingMode: ShadowCastingMode.On,
                receiveShadows: true
            );

            // 使用官方 Utility 添加组件 (这会自动添加 RenderMesh, RenderBounds, LocalToWorld 等)
            RenderMeshUtility.AddComponents(
                entity,
                _entityManager,
                renderMeshDescription,
                renderMeshArray,
                MaterialMeshInfo.FromRenderMeshArrayIndices(0, 0)
            );

            // 确保有 LocalTransform (如果 RenderMeshUtility 没加)
            if (!_entityManager.HasComponent<LocalTransform>(entity))
            {
                _entityManager.AddComponentData(entity, new LocalTransform { Scale = scale, Rotation = quaternion.identity, Position = float3.zero });
            }
        }

        public Entity CreatePlayer(float3 position,Mesh mesh, Material material)
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

            AddRenderMesh(entity, mesh, material);

            return entity;
        }

        public Entity CreateEnemy(float3 position, EnemyType enemyType, Mesh mesh, Material material){
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

            AddRenderMesh(entity, mesh, material);

            return entity;
        }

        public Entity CreateProjectile(float3 position, float3 direction, Entity owner, Mesh mesh, Material material)
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
            AddRenderMesh(entity, mesh, material);

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

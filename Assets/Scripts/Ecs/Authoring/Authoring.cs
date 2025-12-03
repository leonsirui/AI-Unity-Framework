using GameFramework.ECS.Components;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;

namespace GameFramework.ECS.Authoring
{
    public class PlayerAuthoring : MonoBehaviour
    {
        public float moveSpeed = 5f;
        public float maxHealth = 100f;

        class Baker : Baker<PlayerAuthoring>
        {
            public override void Bake(PlayerAuthoring authoring)
            {
                var entity = GetEntity(TransformUsageFlags.Dynamic);
                Debug.Log("AddTag");
                AddComponent(entity, new PlayerTag());
                AddComponent(entity, new MoveComponent
                {
                    Speed = authoring.moveSpeed,
                    Direction = float3.zero
                });
                AddComponent(entity, new HealthComponent
                {
                    Current = authoring.maxHealth,
                    Max = authoring.maxHealth
                });
                AddComponent(entity, new InputComponent());
            }
        }
    }

    public class EnemyAuthoring : MonoBehaviour
    {
        public float moveSpeed = 3f;
        public float maxHealth = 50f;
        public float attackDamage = 10f;
        public float attackRange = 2f;
        public float attackCooldown = 1f;

        class Baker : Baker<EnemyAuthoring>
        {
            public override void Bake(EnemyAuthoring authoring)
            {
                var entity = GetEntity(TransformUsageFlags.Dynamic);

                AddComponent(entity, new EnemyTag());
                AddComponent(entity, new MoveComponent
                {
                    Speed = authoring.moveSpeed,
                    Direction = float3.zero
                });
                AddComponent(entity, new HealthComponent
                {
                    Current = authoring.maxHealth,
                    Max = authoring.maxHealth
                });
                AddComponent(entity, new AttackComponent
                {
                    Damage = authoring.attackDamage,
                    Range = authoring.attackRange,
                    Cooldown = authoring.attackCooldown,
                    LastAttackTime = 0
                });
            }
        }
    }
}

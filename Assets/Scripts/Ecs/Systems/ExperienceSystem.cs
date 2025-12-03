using GameFramework.ECS.Components;
using GameFramework.Events;
using Unity.Burst;
using Unity.Entities;

namespace GameFramework.ECS.Systems
{
    [UpdateInGroup(typeof(GameplaySystemGroup))]
    public partial class ExperienceSystem : SystemBase
    {
        protected override void OnUpdate()
        {
            // 监听敌人死亡事件并给予经验值
            Entities
                .WithAll<PlayerTag>()
                .ForEach((ref ExperienceComponent xp) =>
                {
                    // 这里应该从事件系统获取XP奖励
                    // 简化示例
                }).Run();

            // 检查升级
            Entities
                .WithAll<PlayerTag>()
                .ForEach((Entity entity, ref ExperienceComponent xp, ref HealthComponent health) =>
                {
                    while (xp.CurrentXP >= xp.RequiredXP)
                    {
                        xp.CurrentXP -= xp.RequiredXP;
                        xp.Level++;
                        xp.RequiredXP = CalculateRequiredXP(xp.Level);

                        // 升级奖励
                        health.Max += 10f;
                        health.Current = health.Max;

                        UnityEngine.Debug.Log($"升级! 新等级: {xp.Level}");

                        // 发布升级事件
                        EventManager.Instance.Publish(new Events.LevelUpEvent
                        {
                            NewLevel = xp.Level,
                            RequiredXP = xp.RequiredXP
                        });
                    }
                }).WithoutBurst().Run();
        }

        private int CalculateRequiredXP(int level)
        {
            return 100 * level + (level - 1) * 50;
        }
    }
}

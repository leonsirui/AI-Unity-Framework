using System.Collections.Generic;
using UnityEngine;

namespace GameFramework.Systems
{
    [System.Serializable]
    public class Achievement
    {
        public string id;
        public string title;
        public string description;
        public int requiredProgress;
        public int currentProgress;
        public bool isUnlocked;
        public string iconPath;

        public float Progress => (float)currentProgress / requiredProgress;
    }

    public class AchievementManager : Singleton<AchievementManager>
    {
        private Dictionary<string, Achievement> _achievements = new();

        public void Initialize()
        {
            LoadAchievements();
            Debug.Log("成就系统初始化完成");
        }

        private void LoadAchievements()
        {
            // 从配置或资源加载成就数据
            AddAchievement(new Achievement
            {
                id = "first_kill",
                title = "首杀",
                description = "击败第一个敌人",
                requiredProgress = 1
            });

            AddAchievement(new Achievement
            {
                id = "kill_100",
                title = "百人斩",
                description = "击败100个敌人",
                requiredProgress = 100
            });

            AddAchievement(new Achievement
            {
                id = "reach_level_10",
                title = "初出茅庐",
                description = "达到10级",
                requiredProgress = 10
            });
        }

        private void AddAchievement(Achievement achievement)
        {
            _achievements[achievement.id] = achievement;
        }

        public void UpdateProgress(string achievementId, int progress)
        {
            if (_achievements.TryGetValue(achievementId, out var achievement))
            {
                if (achievement.isUnlocked) return;

                achievement.currentProgress = Mathf.Min(
                    achievement.currentProgress + progress,
                    achievement.requiredProgress
                );

                if (achievement.currentProgress >= achievement.requiredProgress)
                {
                    UnlockAchievement(achievementId);
                }
            }
        }

        private void UnlockAchievement(string achievementId)
        {
            if (_achievements.TryGetValue(achievementId, out var achievement))
            {
                achievement.isUnlocked = true;
                Debug.Log($"成就解锁: {achievement.title}");

                // 显示成就解锁UI
                ShowAchievementNotification(achievement);
            }
        }

        private async void ShowAchievementNotification(Achievement achievement)
        {
            // 使用UI系统显示成就通知
           /* await Managers.UIManager.Instance.ShowPanel<UI.AchievementNotificationPanel>(
                "AchievementNotification"
            );*/
        }

        public List<Achievement> GetAllAchievements()
        {
            return new List<Achievement>(_achievements.Values);
        }

        public List<Achievement> GetUnlockedAchievements()
        {
            var unlocked = new List<Achievement>();
            foreach (var achievement in _achievements.Values)
            {
                if (achievement.isUnlocked)
                {
                    unlocked.Add(achievement);
                }
            }
            return unlocked;
        }
    }
}

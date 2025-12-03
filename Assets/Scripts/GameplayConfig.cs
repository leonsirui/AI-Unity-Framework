using UnityEngine;

namespace GameFramework.Config
{
    [CreateAssetMenu(fileName = "GameplayConfig", menuName = "GameFramework/Gameplay Config")]
    public class GameplayConfig : ScriptableObject
    {
        [Header("玩家配置")]
        public float playerMoveSpeed = 5f;
        public float playerMaxHealth = 100f;
        public float playerAttackDamage = 10f;

        [Header("敌人配置")]
        public float enemySpawnInterval = 5f;
        public int maxEnemyCount = 50;
        public float enemyDetectionRange = 10f;

        [Header("经济配置")]
        public int baseXPReward = 10;
        public float xpMultiplier = 1.5f;
        public int baseCoinReward = 5;

        [Header("难度配置")]
        public AnimationCurve difficultyScaling;
        public float healthScalingPerLevel = 1.1f;
        public float damageScalingPerLevel = 1.05f;

        [Header("物品掉落配置")]
        public DropTableConfig[] dropTables;
    }

    [System.Serializable]
    public class DropTableConfig
    {
        public string itemId;
        [Range(0f, 1f)]
        public float dropChance;
        public int minAmount;
        public int maxAmount;
    }

    [CreateAssetMenu(fileName = "LevelConfig", menuName = "GameFramework/Level Config")]
    public class LevelConfig : ScriptableObject
    {
        [Header("关卡信息")]
        public string levelId;
        public string levelName;
        public string sceneName;

        [Header("关卡目标")]
        public LevelObjective[] objectives;

        [Header("敌人生成")]
        public EnemySpawnConfig[] enemySpawns;

        [Header("奖励")]
        public int xpReward;
        public int coinReward;
    }

    [System.Serializable]
    public class LevelObjective
    {
        public enum ObjectiveType
        {
            KillAllEnemies,
            Survive,
            ReachPoint,
            CollectItems
        }

        public ObjectiveType type;
        public string description;
        public int targetValue;
    }

    [System.Serializable]
    public class EnemySpawnConfig
    {
        public string enemyPrefabKey;
        public Vector3 spawnPosition;
        public float spawnDelay;
    }
}

using UnityEngine;

namespace GameFramework.Core
{
    [CreateAssetMenu(fileName = "GameConfig", menuName = "GameFramework/Game Config")]
    public class GameConfig : ScriptableObject
    {
        [Header("游戏设置")]
        public string gameVersion = "1.0.0";
        public int targetFrameRate = 60;

        [Header("平台设置")]
        public PlatformConfig pcConfig;
        public PlatformConfig mobileConfig;

        [Header("资源设置")]
        public string addressablesCatalogUrl;
        public bool useAddressables = true;

        [Header("音频设置")]
        public float masterVolume = 1.0f;
        public float musicVolume = 0.8f;
        public float sfxVolume = 1.0f;

        public PlatformConfig GetCurrentPlatformConfig()
        {
#if UNITY_STANDALONE || UNITY_EDITOR
            return pcConfig;
#else
            return mobileConfig;
#endif
        }
    }

    [System.Serializable]
    public class PlatformConfig
    {
        public int targetWidth = 1920;
        public int targetHeight = 1080;
        public bool fullscreen = true;
        public int qualityLevel = 2;
    }
}

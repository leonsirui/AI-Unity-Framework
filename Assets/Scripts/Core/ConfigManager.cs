using UnityEngine;

namespace GameFramework.Core
{
    public class ConfigManager : Singleton<ConfigManager>
    {
        private GameConfig _gameConfig;
        public GameConfig GameConfig => _gameConfig;

        public void Initialize(GameConfig config)
        {
            _gameConfig = config;
            ApplySettings();
        }

        private void ApplySettings()
        {
            Application.targetFrameRate = _gameConfig.targetFrameRate;

            var platformConfig = _gameConfig.GetCurrentPlatformConfig();
            Screen.SetResolution(
                platformConfig.targetWidth,
                platformConfig.targetHeight,
                platformConfig.fullscreen
            );

            QualitySettings.SetQualityLevel(platformConfig.qualityLevel);
        }
    }
}

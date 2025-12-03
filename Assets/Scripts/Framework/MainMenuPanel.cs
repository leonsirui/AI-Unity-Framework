using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

namespace GameFramework.UI
{
    public class MainMenuPanel : Managers.UIPanel
    {
        [Header("Buttons")]
        [SerializeField] private Button playButton;
        [SerializeField] private Button settingsButton;
        [SerializeField] private Button quitButton;

        [Header("UI Elements")]
        [SerializeField] private TextMeshProUGUI titleText;
        [SerializeField] private Transform buttonContainer;

        private void Start()
        {
            playButton.onClick.AddListener(OnPlayClicked);
            settingsButton.onClick.AddListener(OnSettingsClicked);
            quitButton.onClick.AddListener(OnQuitClicked);
        }

        protected override void OnShow()
        {
            base.OnShow();
            PlayShowAnimation();
        }

        private void PlayShowAnimation()
        {
            titleText.transform.localScale = Vector3.zero;
            titleText.transform.DOScale(1f, 0.5f).SetEase(Ease.OutBack);

            var buttons = buttonContainer.GetComponentsInChildren<Button>();
            for (int i = 0; i < buttons.Length; i++)
            {
                var button = buttons[i];
                button.transform.localScale = Vector3.zero;
                button.transform.DOScale(1f, 0.3f)
                    .SetDelay(0.2f + i * 0.1f)
                    .SetEase(Ease.OutBack);
            }
        }

        private async void OnPlayClicked()
        {
            await Managers.SceneManager.Instance.LoadSceneAsync("GameScene");
            Core.GameStateManager.Instance.ChangeState(Core.GameState.Playing);
        }

        private async void OnSettingsClicked()
        {
            await Managers.UIManager.Instance.ShowPanel<SettingsPanel>("SettingsPanel");
        }

        private void OnQuitClicked()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
            Application.Quit();
#endif
        }
    }

    public class GameHUDPanel : Managers.UIPanel
    {
        [Header("Player Info")]
        [SerializeField] private Slider healthBar;
        [SerializeField] private TextMeshProUGUI levelText;
        [SerializeField] private Slider xpBar;
        [SerializeField] private TextMeshProUGUI scoreText;

        [Header("Controls")]
        [SerializeField] private Button pauseButton;

        private void Start()
        {
            pauseButton.onClick.AddListener(OnPauseClicked);

            // 订阅事件
            Events.EventManager.Instance.Subscribe<Events.LevelUpEvent>(OnLevelUp);
            Events.EventManager.Instance.Subscribe<Events.ScoreChangedEvent>(OnScoreChanged);
        }

        private void OnDestroy()
        {
            Events.EventManager.Instance.Unsubscribe<Events.LevelUpEvent>(OnLevelUp);
            Events.EventManager.Instance.Unsubscribe<Events.ScoreChangedEvent>(OnScoreChanged);
        }

        private void Update()
        {
            UpdatePlayerInfo();
        }

        private void UpdatePlayerInfo()
        {
            // 从ECS获取玩家数据
            var world = Unity.Entities.World.DefaultGameObjectInjectionWorld;
            if (world == null) return;

            var entityManager = world.EntityManager;
            var playerQuery = entityManager.CreateEntityQuery(
                typeof(ECS.Components.PlayerTag),
                typeof(ECS.Components.HealthComponent),
                typeof(ECS.Components.ExperienceComponent)
            );

            if (playerQuery.CalculateEntityCount() == 0) return;

            var playerEntity = playerQuery.GetSingletonEntity();
            var health = entityManager.GetComponentData<ECS.Components.HealthComponent>(playerEntity);
            var xp = entityManager.GetComponentData<ECS.Components.ExperienceComponent>(playerEntity);

            healthBar.value = health.HealthPercentage;
            levelText.text = $"Lv.{xp.Level}";
            xpBar.value = (float)xp.CurrentXP / xp.RequiredXP;
        }

        private void OnLevelUp(Events.LevelUpEvent evt)
        {
            levelText.transform.DOPunchScale(Vector3.one * 0.3f, 0.5f);
        }

        private void OnScoreChanged(Events.ScoreChangedEvent evt)
        {
            scoreText.text = $"Score: {evt.NewScore}";
            scoreText.transform.DOPunchScale(Vector3.one * 0.2f, 0.3f);
        }

        private void OnPauseClicked()
        {
            Core.GameStateManager.Instance.ChangeState(Core.GameState.Paused);
        }
    }

    public class SettingsPanel : Managers.UIPanel
    {
        [SerializeField] private Slider masterVolumeSlider;
        [SerializeField] private Slider musicVolumeSlider;
        [SerializeField] private Slider sfxVolumeSlider;
        [SerializeField] private Toggle fullscreenToggle;
        [SerializeField] private TMP_Dropdown qualityDropdown;
        [SerializeField] private Button closeButton;

        private void Start()
        {
            LoadSettings();

            masterVolumeSlider.onValueChanged.AddListener(OnMasterVolumeChanged);
            musicVolumeSlider.onValueChanged.AddListener(OnMusicVolumeChanged);
            sfxVolumeSlider.onValueChanged.AddListener(OnSFXVolumeChanged);
            fullscreenToggle.onValueChanged.AddListener(OnFullscreenChanged);
            qualityDropdown.onValueChanged.AddListener(OnQualityChanged);
            closeButton.onClick.AddListener(OnCloseClicked);
        }

        private void LoadSettings()
        {
            var config = Core.ConfigManager.Instance.GameConfig;
            masterVolumeSlider.value = config.masterVolume;
            musicVolumeSlider.value = config.musicVolume;
            sfxVolumeSlider.value = config.sfxVolume;

            var platformConfig = config.GetCurrentPlatformConfig();
            fullscreenToggle.isOn = platformConfig.fullscreen;
            qualityDropdown.value = platformConfig.qualityLevel;
        }

        private void OnMasterVolumeChanged(float value)
        {
            Managers.AudioManager.Instance.SetMasterVolume(value);
        }

        private void OnMusicVolumeChanged(float value)
        {
            Managers.AudioManager.Instance.SetMusicVolume(value);
        }

        private void OnSFXVolumeChanged(float value)
        {
            // 保存设置
        }

        private void OnFullscreenChanged(bool isFullscreen)
        {
            Screen.fullScreen = isFullscreen;
        }

        private void OnQualityChanged(int qualityIndex)
        {
            QualitySettings.SetQualityLevel(qualityIndex);
        }

        private void OnCloseClicked()
        {
            Hide();
        }
    }
}

using Cysharp.Threading.Tasks;
using GameFramework.ECS.Systems;
using GameFramework.Examples;
using GameFramework.Managers;
using Unity.Entities;
using UnityEngine;

namespace GameFramework.Core
{
    /// <summary>
    /// 游戏启动入口 (重构版：直接进入 TestScene 逻辑)
    /// </summary>
    public class GameBootstrap : MonoBehaviour
    {
        [SerializeField] private GameConfig gameConfig;

        private static GameBootstrap _instance;
        public static GameBootstrap Instance => _instance;

        private async void Awake()
        {
            if (_instance != null && _instance != this)
            {
                Destroy(gameObject);
                return;
            }

            _instance = this;
            DontDestroyOnLoad(gameObject);

            await InitializeGame();
        }

        private async UniTask InitializeGame()
        {
            Debug.Log("=== 游戏启动 ===");

            // 1. 基础系统初始化
            ConfigManager.Instance.Initialize(gameConfig);
            await ConfigManager.Instance.LoadLubanTablesAsync(); 
            await ResourceManager.Instance.InitializeAsync();
            InputManager.Instance.Initialize();
            SaveManager.Instance.Initialize();
            PoolManager.Instance.Initialize();

            // 2. 初始化ECS世界
            InitializeECSWorld();

            var setup = FindObjectOfType<TestSceneSetup>();
            if (setup == null)
            {
                var go = new GameObject("TestSceneSetup");
                setup = go.AddComponent<TestSceneSetup>();
            }

            // 手动调用场景搭建
            setup.SetupTestScene();

            // 5. 切换到游戏状态
            GameStateManager.Instance.ChangeState(GameState.Playing);

            Debug.Log("=== 游戏启动完成 (TestScene Mode) ===");
        }

        private void InitializeECSWorld()
        {
            var world = World.DefaultGameObjectInjectionWorld;
            if (world == null)
            {
                world = new World("GameWorld");
                World.DefaultGameObjectInjectionWorld = world;
            }

            // 添加自定义系统组
            var systemGroup = world.GetOrCreateSystemManaged<SimulationSystemGroup>();
            systemGroup.AddSystemToUpdateList(world.CreateSystem<GameplaySystemGroup>());
        }
    }
}
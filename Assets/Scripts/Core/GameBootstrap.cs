using Cysharp.Threading.Tasks;
using GameFramework.ECS.Systems;
using GameFramework.Managers;
using Unity.Entities;
using UnityEditor.EditorTools;
using UnityEngine;
using UnityEngine.SceneManagement;
using SceneManager = GameFramework.Managers.SceneManager;

namespace GameFramework.Core
{
    /// <summary>
    /// 游戏启动入口
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

            // 1. 初始化配置
            ConfigManager.Instance.Initialize(gameConfig);

            // 2. 初始化资源系统
            await ResourceManager.Instance.InitializeAsync();

            // 3. 初始化输入系统
            InputManager.Instance.Initialize();

            // 4. 初始化音频系统
            AudioManager.Instance.Initialize();

            // 5. 初始化UI系统
            //await UIManager.Instance.InitializeAsync();

            // 6. 初始化ECS世界
            InitializeECSWorld();

            // 7. 初始化存档系统
            SaveManager.Instance.Initialize();

            // 8. 初始化对象池
            PoolManager.Instance.Initialize();

            // 9. 进入主菜单
            await SceneManager.Instance.LoadSceneAsync("MainMenu");

            Debug.Log("=== 游戏启动完成 ===");
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

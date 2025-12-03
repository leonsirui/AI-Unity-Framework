using UnityEngine;

namespace GameFramework.Examples
{
    /// <summary>
    /// 测试场景设置助手
    /// </summary>
    public class TestSceneSetup : MonoBehaviour
    {
        [Header("测试配置")]
        [SerializeField] private bool autoSetup = true;
        [SerializeField] private bool createTestPlayer = true;
        [SerializeField] private bool createTestEnemies = true;
        [SerializeField] private int testEnemyCount = 5;

        private void Start()
        {
            if (autoSetup)
            {
                SetupTestScene();
            }
        }

        [ContextMenu("Setup Test Scene")]
        public void SetupTestScene()
        {
            Debug.Log("=== 开始设置测试场景 ===");

            // 1. 创建地面
            CreateGround();

            // 2. 创建光照
            CreateLighting();

            // 3. 创建摄像机
            CreateCamera();

            // 4. 创建玩家（如果需要）
            if (createTestPlayer)
            {
                CreateTestPlayer();
            }

            // 5. 创建敌人（如果需要）
            if (createTestEnemies)
            {
                CreateTestEnemies();
            }

            Debug.Log("=== 测试场景设置完成 ===");
        }

        private void CreateGround()
        {
            var ground = GameObject.CreatePrimitive(PrimitiveType.Plane);
            ground.name = "Ground";
            ground.transform.localScale = new Vector3(10, 1, 10);
            ground.transform.position = Vector3.zero;

            var renderer = ground.GetComponent<Renderer>();
            renderer.material.color = new Color(0.3f, 0.5f, 0.3f);

            Debug.Log("地面创建完成");
        }

        private void CreateLighting()
        {
            var lightGO = new GameObject("Directional Light");
            var light = lightGO.AddComponent<Light>();
            light.type = LightType.Directional;
            light.intensity = 1f;
            lightGO.transform.rotation = Quaternion.Euler(50, -30, 0);

            Debug.Log("光照创建完成");
        }

        private void CreateCamera()
        {
            var cameraGO = new GameObject("Main Camera");
            cameraGO.tag = "MainCamera";
            var camera = cameraGO.AddComponent<UnityEngine.Camera>();
            camera.transform.position = new Vector3(0, 10, -10);
            camera.transform.rotation = Quaternion.Euler(45, 0, 0);

            // 添加Cinemachine
#if CINEMACHINE
            var vcam = cameraGO.AddComponent<Cinemachine.CinemachineVirtualCamera>();
            vcam.m_Lens.FieldOfView = 60f;
#endif

            Debug.Log("摄像机创建完成");
        }

        private void CreateTestPlayer()
        {
            var playerGO = GameObject.CreatePrimitive(PrimitiveType.Capsule);
            playerGO.name = "TestPlayer";
            playerGO.transform.position = Vector3.zero;
            playerGO.GetComponent<Renderer>().material.color = Color.blue;

            // 添加PlayerAuthoring
            var authoring = playerGO.AddComponent<ECS.Authoring.PlayerAuthoring>();

            Debug.Log("测试玩家创建完成");
        }

        private void CreateTestEnemies()
        {
            for (int i = 0; i < testEnemyCount; i++)
            {
                float angle = (360f / testEnemyCount) * i * Mathf.Deg2Rad;
                Vector3 position = new Vector3(
                    Mathf.Cos(angle) * 5f,
                    0.5f,
                    Mathf.Sin(angle) * 5f
                );

                var enemyGO = GameObject.CreatePrimitive(PrimitiveType.Cube);
                enemyGO.name = $"TestEnemy_{i}";
                enemyGO.transform.position = position;
                enemyGO.GetComponent<Renderer>().material.color = Color.red;

                // 添加EnemyAuthoring
                var authoring = enemyGO.AddComponent<ECS.Authoring.EnemyAuthoring>();
            }

            Debug.Log($"创建了 {testEnemyCount} 个测试敌人");
        }
    }
}

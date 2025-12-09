// 确保项目引入了 Cinemachine，否则注释掉相关行
using Cinemachine;
using GameFramework.Camera;
using GameFramework.ECS;
using GameFramework.ECS.Components;
using Unity.Entities;
using Unity.Mathematics;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

namespace GameFramework.Examples
{
    /// <summary>
    /// 测试场景构建器 (ECS + Cinemachine 环境)
    /// </summary>
    public class TestSceneSetup : MonoBehaviour
    {
        [Header("Entity Visual Assets")]
        // 在 Inspector 中拖入资源，例如默认的 Capsule/Cube Mesh 和对应的 Material
        [SerializeField] private Mesh playerMesh;
        [SerializeField] private Material playerMat;
        [SerializeField] private Mesh enemyMesh;
        [SerializeField] private Material enemyMat;

        [Header("测试配置")]
        [SerializeField] private bool createTestPlayer = true;
        [SerializeField] private bool createTestEnemies = true;
        [SerializeField] private int testEnemyCount = 5;

        // 公开方法，由 GameBootstrap 调用
        public void SetupTestScene()
        {
            Debug.Log("=== ECS High Performance Setup ===");

            CreateEnvironment();
            CreateCameraSystem(); // 包含初始化 CameraSync

            var entityManager = World.DefaultGameObjectInjectionWorld.EntityManager;
            var factory = new EntityFactory(entityManager);
            /*
            // 1. 创建 Player
            if (createTestPlayer)
            {
                // 如果没有配置资源，加载默认内置资源兜底
                if (playerMesh == null) playerMesh = GetBuiltinMesh(PrimitiveType.Capsule);
                if (playerMat == null) playerMat = GetBuiltinMaterial(Color.blue);

                factory.CreatePlayer(new float3(0, 1, 0), playerMesh, playerMat);
            }
            */

        }

        private void CreateEnvironment()
        {
            // 地面
            var ground = GameObject.CreatePrimitive(PrimitiveType.Plane);
            ground.name = "Ground";
            ground.transform.localScale = new Vector3(10, 1, 10);
            ground.GetComponent<Renderer>().material.color = new Color(0.3f, 0.5f, 0.3f);

            // 光照
            var lightGO = new GameObject("Directional Light");
            var light = lightGO.AddComponent<Light>();
            light.type = LightType.Directional;
            lightGO.transform.rotation = Quaternion.Euler(50, -30, 0);
        }

        private void CreateCameraSystem()
        {
            // 1. 确保主摄像机存在并带有 CinemachineBrain
            var mainCamera = UnityEngine.Camera.main;
            if (mainCamera == null)
            {
                var cameraGO = new GameObject("Main Camera");
                cameraGO.tag = "MainCamera";
                mainCamera = cameraGO.AddComponent<UnityEngine.Camera>();
                cameraGO.AddComponent<AudioListener>();
            }

            if (mainCamera.GetComponent<CinemachineBrain>() == null)
            {
                mainCamera.gameObject.AddComponent<CinemachineBrain>();
            }

            // 2. 创建虚拟摄像机 (Virtual Camera)
            var vcamGO = new GameObject("CM vcam1");
            var vcam = vcamGO.AddComponent<CinemachineVirtualCamera>();

            // 设置视角参数
            vcam.m_Lens.FieldOfView = 60f;
            vcam.transform.rotation = Quaternion.Euler(45, 0, 0);

            // 设置跟随模式 (Transposer - 固定偏移)
            var transposer = vcam.AddCinemachineComponent<CinemachineTransposer>();
            transposer.m_FollowOffset = new Vector3(0, 12, -10); // 上帝视角偏移
            transposer.m_BindingMode = CinemachineTransposer.BindingMode.LockToTargetWithWorldUp;

            // 3. 确保 CameraController 存在 (它是 Singleton)
            if (CameraController.Instance == null)
            {
                var controllerGO = new GameObject("CameraController");
                controllerGO.AddComponent<CameraController>();
            }
            //TODO var syncGO = new GameObject("PlayerCameraSync");
            //syncGO.AddComponent<PlayerCameraSync>();
            // 注意：此时我们还没有 Target 给摄像机，
            // Target 会在 EntityVisualSyncManager 生成玩家模型后自动设置。
        }

        // 辅助：获取内置资源（仅作兜底，实际应使用 AssetBundle 或 Addressables 加载的资源）
        private Mesh GetBuiltinMesh(PrimitiveType type)
        {
            GameObject temp = GameObject.CreatePrimitive(type);
            Mesh mesh = temp.GetComponent<MeshFilter>().sharedMesh;
            DestroyImmediate(temp);
            return mesh;
        }

        private Material GetBuiltinMaterial(Color color)
        {
            var mat = new Material(Shader.Find("Universal Render Pipeline/Lit")); // 假设是 URP
            mat.color = color;
            mat.enableInstancing = true; // 开启 GPU Instancing 关键！
            return mat;
        }
    }
}
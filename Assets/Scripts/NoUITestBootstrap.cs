using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS;
using GameFramework.Managers;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Rendering;
using Unity.Transforms;
using UnityEngine;
using UnityEngine.Rendering;

public class NoUITestBootstrap : MonoBehaviour
{
    private EntityManager _entityManager;
    private EntityFactory _entityFactory;

    [Header("压力测试配置")]
    public int enemyCount = 30000; // 3万个
    public float spawnRadius = 100f; // 扩大生成范围

    [Header("渲染资源")]
    public Mesh enemyMesh;      // 拖入 Cube Mesh (Instance)
    public Material enemyMaterial; // 拖入开启了 GPU Instancing 的材质
    public Mesh playerMesh;     // 拖入 Capsule Mesh
    public Material playerMaterial;

    async void Start()
    {
        Debug.Log(">>> 开始无 UI 模式测试...");

        // 1. 手动初始化核心管理器 (跳过 UIManager)
        // ----------------------------------------------------
        if (ConfigManager.Instance == null) gameObject.AddComponent<ConfigManager>();

        // 即使不加载资源，ResourceManager 最好也初始化一下以防空引用
        if (ResourceManager.Instance == null) gameObject.AddComponent<ResourceManager>();

        if (InputManager.Instance == null) gameObject.AddComponent<InputManager>();
        if (AudioManager.Instance == null) gameObject.AddComponent<AudioManager>();
        if (GameStateManager.Instance == null) gameObject.AddComponent<GameStateManager>();

        // 初始化输入系统
        InputManager.Instance.Initialize();
        Debug.Log(">>> 输入系统已初始化");

        // 2. 准备 ECS World
        // ----------------------------------------------------
        var world = World.DefaultGameObjectInjectionWorld;
        if (world == null)
        {
            world = new World("GameWorld");
            World.DefaultGameObjectInjectionWorld = world;
        }
        _entityManager = world.EntityManager;
        _entityFactory = new EntityFactory(_entityManager);

        // 3. 创建场景物体 (地面和灯光)
        // ----------------------------------------------------
        CreateEnvironment();
        // --- 生成渲染所需的说明信息 ---
        // 这是 Entities Graphics 1.0+ 的标准写法
        var enemyRenderDesc = new RenderMeshDescription(
            shadowCastingMode: ShadowCastingMode.Off, // 3万个单位建议关闭阴影，否则GPU扛不住
            receiveShadows: true);

        var playerRenderDesc = new RenderMeshDescription(
            shadowCastingMode: ShadowCastingMode.On,
            receiveShadows: true);

        // 1. 创建玩家 (带渲染)
        CreatePlayer(playerRenderDesc);

        // 2. 创建大量敌人 (带渲染)
        // 使用 NativeArray 批量创建以提高生成速度
        CreateEnemiesBatch(enemyRenderDesc);

        GameStateManager.Instance.ChangeState(GameState.Playing);
        Debug.Log($">>> 压力测试启动: 生成 {enemyCount} 个敌人");
    }

    private void CreateEnvironment()
    {
        // 只有环境物体（不需要大量移动）可以使用 GameObject
        var ground = GameObject.CreatePrimitive(PrimitiveType.Plane);
        ground.transform.localScale = new Vector3(20, 1, 20); // 扩大地面
        var lightGO = new GameObject("Light");
        var l = lightGO.AddComponent<Light>();
        l.type = LightType.Directional;
        l.shadows = LightShadows.Hard; // 主灯光开启阴影
        lightGO.transform.rotation = Quaternion.Euler(50, -30, 0);

        var camGO = new GameObject("Main Camera");
        var cam = camGO.AddComponent<Camera>();
        camGO.transform.position = new Vector3(0, 50, -50);
        camGO.transform.LookAt(Vector3.zero);
    }

    private void CreatePlayer(RenderMeshDescription renderDesc)
    {
        // 1. 创建逻辑实体
        var entity = _entityFactory.CreatePlayer(new float3(0, 1, 0));

        // 2. 添加渲染组件 (直接加在 Entity 上，不需要 GameObject)
        RenderMeshUtility.AddComponents(
            entity,
            _entityManager,
            renderDesc,
            new RenderMeshArray(new Material[] { playerMaterial }, new Mesh[] { playerMesh }),
            MaterialMeshInfo.FromRenderMeshArrayIndices(0, 0)
        );
    }

    private void CreateEnemiesBatch(RenderMeshDescription renderDesc)
    {
        var random = new Unity.Mathematics.Random(1);

        // 1. 定义基础 Archetype (包含基础组件)
        var enemyArchetype = _entityManager.CreateArchetype(
            typeof(GameFramework.ECS.Components.EnemyTag),
            typeof(LocalTransform),
            typeof(GameFramework.ECS.Components.MoveComponent),
            typeof(GameFramework.ECS.Components.HealthComponent),
            typeof(GameFramework.ECS.Components.AttackComponent)
        );

        // 2. 创建【一个】原型实体 (Prototype)
        Entity prototypeEntity = _entityManager.CreateEntity(enemyArchetype);

        // 3. 给这个原型实体添加渲染组件
        // 这一步只做一次，所以不会有性能问题
        var renderMeshArray = new RenderMeshArray(new Material[] { enemyMaterial }, new Mesh[] { enemyMesh });
        var materialMeshInfo = MaterialMeshInfo.FromRenderMeshArrayIndices(0, 0);

        RenderMeshUtility.AddComponents(
            prototypeEntity,   // 注意：这里传入单个 Entity
            _entityManager,
            renderDesc,
            renderMeshArray,
            materialMeshInfo
        );

        // 4. 使用 Instantiate 瞬间克隆 30,000 份
        // 这是 ECS 中最快的生成方式，比 CreateEntity 快得多，而且自动继承了渲染组件
        var entities = new NativeArray<Entity>(enemyCount, Allocator.Temp);
        _entityManager.Instantiate(prototypeEntity, entities);

        // 5. 销毁原型实体 (因为我们已经有了3万个克隆体，不需要这个原始的了)
        // 注意：如果你想保留它作为一个隐藏的模板也可以，这里为了干净直接销毁
        _entityManager.DestroyEntity(prototypeEntity);

        // 6. 批量设置位置 (随机分布)
        for (int i = 0; i < enemyCount; i++)
        {
            float angle = random.NextFloat(0, math.PI * 2);
            float dist = random.NextFloat(10, spawnRadius);
            float3 pos = new float3(math.cos(angle) * dist, 0, math.sin(angle) * dist);

            // 设置位置
            _entityManager.SetComponentData(entities[i], new LocalTransform
            {
                Position = pos,
                Rotation = quaternion.identity,
                Scale = 1f
            });

            // 设置移动速度
            _entityManager.SetComponentData(entities[i], new GameFramework.ECS.Components.MoveComponent
            {
                Speed = random.NextFloat(1f, 3f),
                Direction = float3.zero
            });
        }

        // 记得释放 NativeArray
        entities.Dispose();
    }
}

// 简单的视觉同步脚本 (必须有这个，否则Entity动了你看不到)
public class EntityVisualSync : MonoBehaviour
{
    private Entity _targetEntity;
    private EntityManager _entityManager;
    private bool _isInitialized = false;

    public void Initialize(Entity entity, EntityManager em)
    {
        _targetEntity = entity;
        _entityManager = em;
        _isInitialized = true;
    }

    void LateUpdate()
    {
        if (!_isInitialized) return;

        // 如果 Entity 被销毁了，表现层也销毁
        if (!_entityManager.Exists(_targetEntity))
        {
            Destroy(gameObject);
            return;
        }

        // 同步位置
        if (_entityManager.HasComponent<LocalTransform>(_targetEntity))
        {
            var localTransform = _entityManager.GetComponentData<LocalTransform>(_targetEntity);
            transform.position = localTransform.Position;
            transform.rotation = localTransform.Rotation;
        }
    }
}
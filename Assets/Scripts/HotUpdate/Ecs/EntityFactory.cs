using Cysharp.Threading.Tasks;
using GameFramework.Managers;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics;
using Unity.Rendering;
using Unity.Transforms;
using UnityEngine;
using UnityEngine.Rendering;

namespace GameFramework.ECS
{
    public class EntityFactory
    {
        private readonly EntityManager _entityManager;

        // 缓存原型实体：Key = ConfigID, Value = Entity(带有RenderMesh和默认数据的原型)
        private readonly Dictionary<int, Entity> _entityPrefabCache = new Dictionary<int, Entity>();

        public EntityFactory(EntityManager entityManager)
        {
            _entityManager = entityManager;
        }

        public void Dispose()
        {
            _entityPrefabCache.Clear();
        }

        #region 核心资源加载与原型构建

        /// <summary>
        /// 【公开接口】预加载实体原型
        /// </summary>
        public async UniTask<Entity> LoadEntityArchetypeAsync(int configId, string resourcePath)
        {
            return await GetOrCreateEntityPrefabAsync(configId, resourcePath);
        }

        /// <summary>
        /// 【公开接口】同步生成实体（必须确保资源已通过 LoadEntityArchetypeAsync 加载）
        /// </summary>
        public Entity SpawnEntity(int configId, float3 position, quaternion rotation, float scale = 1f)
        {
            if (!_entityPrefabCache.TryGetValue(configId, out Entity prefabEntity))
            {
                Debug.LogError($"[EntityFactory] 原型未加载，请先调用 LoadEntityArchetypeAsync. ConfigID: {configId}");
                return Entity.Null;
            }

            // ECS 实例化非常快
            Entity newEntity = _entityManager.Instantiate(prefabEntity);

            // 设置位置信息
            _entityManager.SetComponentData(newEntity, new LocalTransform
            {
                Position = position,
                Rotation = rotation,
                Scale = scale
            });

            // 移除 Prefab 标签，这样它就会被 Systems 处理并渲染
            _entityManager.RemoveComponent<Prefab>(newEntity);

            return newEntity;
        }


        // 在 EntityFactory.cs 中
        // 确保引入命名空间

        public Entity SpawnColliderEntity(int configId, float3 position, quaternion rotation, Unity.Physics.BoxGeometry ccb, float scale = 1f)
        {
            if (!_entityPrefabCache.TryGetValue(configId, out Entity prefabEntity))
            {
                Debug.LogError($"[EntityFactory] 原型未加载. ConfigID: {configId}");
                return Entity.Null;
            }

            // 1. 创建碰撞体数据
            // 【重要提示】请确保 ccb.Size 不是 (0,0,0)，否则碰撞盒是无限小的，看不到也摸不着
            BlobAssetReference<Unity.Physics.Collider> colliderBlob = Unity.Physics.BoxCollider.Create(ccb, Unity.Physics.CollisionFilter.Default);

            // 2. 实例化实体
            Entity newEntity = _entityManager.Instantiate(prefabEntity);

            // 3. 设置 Transform
            _entityManager.SetComponentData(newEntity, new LocalTransform
            {
                Position = position,
                Rotation = rotation,
                Scale = scale
            });

            // 4. 添加 PhysicsCollider 组件
            _entityManager.AddComponentData(newEntity, new Unity.Physics.PhysicsCollider { Value = colliderBlob });

            // =========================================================================================
            // 【核心修复】必须添加 PhysicsWorldIndex，否则物理系统会忽略它！
            // 0 代表默认的主物理世界。这是一个 SharedComponent。
            _entityManager.AddSharedComponent(newEntity, new PhysicsWorldIndex { Value = 0 });
            // =========================================================================================

            // 5. 【保险起见】确保有 LocalToWorld
            // 虽然 System 可能会加，但手动显式添加最稳妥，静态物体依赖它确定世界坐标
            if (!_entityManager.HasComponent<LocalToWorld>(newEntity))
            {
                _entityManager.AddComponent<LocalToWorld>(newEntity);
            }

            // 6. 移除 Prefab 标签
            _entityManager.RemoveComponent<Prefab>(newEntity);

            return newEntity;
        }


        private async UniTask<Entity> GetOrCreateEntityPrefabAsync(int configId, string resourcePath)
        {
            // 1. 检查缓存
            if (_entityPrefabCache.TryGetValue(configId, out Entity prefabEntity))
            {
                if (_entityManager.Exists(prefabEntity)) return prefabEntity;
                _entityPrefabCache.Remove(configId);
            }

            // 2. 加载资源 (Addressables)
            GameObject assetGo = await ResourceManager.Instance.LoadAssetAsync<GameObject>(resourcePath);
            if (assetGo == null) return Entity.Null;

            Mesh mesh = null;
            UnityEngine.Material material = null;

            // 3. 尝试提取渲染数据 (优先 Mesh，其次 Sprite)
            var meshFilter = assetGo.GetComponentInChildren<MeshFilter>();
            var meshRenderer = assetGo.GetComponentInChildren<MeshRenderer>();

            if (meshFilter != null && meshRenderer != null)
            {
                // 情况 A: 标准 3D 模型
                mesh = meshFilter.sharedMesh;
                material = meshRenderer.sharedMaterial;
            }
            else
            {
                // 情况 B: 2D Sprite
                var spriteRenderer = assetGo.GetComponentInChildren<SpriteRenderer>();
                if (spriteRenderer != null && spriteRenderer.sprite != null)
                {
                    // 将 Sprite 动态转换为 Mesh 以便 ECS 渲染
                    mesh = CreateMeshFromSprite(spriteRenderer.sprite);
                    material = spriteRenderer.sharedMaterial;
                }
            }

            // 如果两者都没有，创建一个纯数据实体（例如不可见的逻辑对象）
            if (mesh == null || material == null)
            {
                Debug.LogWarning($"[EntityFactory] 资源没有 Mesh 或 Sprite，创建纯数据实体: {resourcePath}");
                prefabEntity = _entityManager.CreateEntity();
                _entityManager.AddComponentData(prefabEntity, new LocalTransform { Scale = 1f, Rotation = quaternion.identity });
                _entityManager.AddComponent<Prefab>(prefabEntity);
                _entityPrefabCache[configId] = prefabEntity;
                return prefabEntity;
            }

            // 4. 创建 ECS 实体
            prefabEntity = _entityManager.CreateEntity();

            // 5. 添加渲染组件
            var renderMeshArray = new RenderMeshArray(new[] { material }, new[] { mesh });

            // 配置渲染描述：网格通常不需要投射阴影，但需要接收阴影
            // 如果是 Sprite，可能需要根据 2D/3D 需求调整 shadowCastingMode
            var renderMeshDescription = new RenderMeshDescription(
                shadowCastingMode: ShadowCastingMode.Off,
                receiveShadows: true
            );

            RenderMeshUtility.AddComponents(
                prefabEntity,
                _entityManager,
                renderMeshDescription,
                renderMeshArray,
                MaterialMeshInfo.FromRenderMeshArrayIndices(0, 0)
            );

            // 6. 基础组件
            _entityManager.AddComponentData(prefabEntity, new LocalTransform { Scale = 1f, Rotation = quaternion.identity });
            _entityManager.AddComponent<Prefab>(prefabEntity); // 标记为Prefab

            // 7. 缓存
            _entityPrefabCache[configId] = prefabEntity;

            return prefabEntity;
        }

        /// <summary>
        /// 辅助方法：将 Unity Sprite 数据转换为 Mesh
        /// </summary>
        private Mesh CreateMeshFromSprite(Sprite sprite)
        {
            var mesh = new Mesh();
            mesh.name = sprite.name + "_GeneratedMesh";

            // 获取 Sprite 的顶点数据 (Vector2 -> Vector3)
            var spriteVertices = sprite.vertices;
            var vertices = new Vector3[spriteVertices.Length];
            for (int i = 0; i < spriteVertices.Length; i++)
            {
                vertices[i] = (Vector3)spriteVertices[i];
            }

            // 获取三角形索引 (ushort -> int)
            var spriteTriangles = sprite.triangles;
            var triangles = new int[spriteTriangles.Length];
            for (int i = 0; i < spriteTriangles.Length; i++)
            {
                triangles[i] = (int)spriteTriangles[i];
            }

            mesh.vertices = vertices;
            mesh.uv = sprite.uv; // 直接使用 Sprite 图集中的 UV
            mesh.triangles = triangles;

            mesh.RecalculateNormals();
            mesh.RecalculateBounds();

            return mesh;
        }

        #endregion
    }
}
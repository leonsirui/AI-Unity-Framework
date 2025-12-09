using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
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
        /// 【新增公开接口】预加载实体原型
        /// </summary>
        public async UniTask<Entity> LoadEntityArchetypeAsync(int configId, string resourcePath)
        {
            return await GetOrCreateEntityPrefabAsync(configId, resourcePath);
        }

        /// <summary>
        /// 【新增公开接口】同步生成实体（必须确保资源已通过 LoadEntityArchetypeAsync 加载）
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

        // ... (保留你原有的 GetOrCreateEntityPrefabAsync 私有方法不变) ...
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

            // 3. 提取渲染数据
            var meshFilter = assetGo.GetComponentInChildren<MeshFilter>();
            var meshRenderer = assetGo.GetComponentInChildren<MeshRenderer>();

            // 如果是空物体（比如只有碰撞体），处理一下
            if (meshFilter == null || meshRenderer == null)
            {
                Debug.LogWarning($"[EntityFactory] 资源没有 Mesh，创建纯数据实体: {resourcePath}");
                prefabEntity = _entityManager.CreateEntity();
                _entityManager.AddComponentData(prefabEntity, new LocalTransform { Scale = 1f, Rotation = quaternion.identity });
                _entityManager.AddComponent<Prefab>(prefabEntity);
                _entityPrefabCache[configId] = prefabEntity;
                return prefabEntity;
            }

            Mesh mesh = meshFilter.sharedMesh;
            Material material = meshRenderer.sharedMaterial;

            // 4. 创建 ECS 实体
            prefabEntity = _entityManager.CreateEntity();

            // 5. 添加渲染组件
            var renderMeshArray = new RenderMeshArray(new[] { material }, new[] { mesh });
            var renderMeshDescription = new RenderMeshDescription(
                shadowCastingMode: ShadowCastingMode.Off, // 网格通常不需要投射阴影
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

            // 8. 缓存
            _entityPrefabCache[configId] = prefabEntity;

            return prefabEntity;
        }

        #endregion
    }
}
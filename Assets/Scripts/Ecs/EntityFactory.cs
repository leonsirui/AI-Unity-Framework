using Cysharp.Threading.Tasks;
using GameFramework.Core;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using System.Collections.Generic;
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

        /// <summary>
        /// 释放所有缓存的原型实体（在场景切换或销毁时调用）
        /// </summary>
        public void Dispose()
        {
            // EntityManager 会在 World 销毁时自动清理实体，但如果需要手动清理缓存引用：
            _entityPrefabCache.Clear();
        }

        #region 核心资源加载与原型构建

        /// <summary>
        /// 获取或创建原型实体。
        /// 如果缓存中有，直接返回；如果没有，从配置读取路径->加载资源->创建ECS实体->存入缓存。
        /// </summary>
        private async UniTask<Entity> GetOrCreateEntityPrefabAsync(int configId, string resourcePath)
        {
            // 1. 检查缓存
            if (_entityPrefabCache.TryGetValue(configId, out Entity prefabEntity))
            {
                // 确保实体仍然有效（防止 World 被重置后缓存失效）
                if (_entityManager.Exists(prefabEntity))
                {
                    return prefabEntity;
                }
                _entityPrefabCache.Remove(configId);
            }

            // 2. 真实加载逻辑 (Addressables)
            // 假设资源是一个Prefab，我们需要从中提取 Mesh 和 Material
            // 或者资源直接就是 Mesh/Material 的 Addressable Group，这里演示加载 GameObject Prefab 的情况
            GameObject assetGo = await ResourceManager.Instance.LoadAssetAsync<GameObject>(resourcePath);

            if (assetGo == null)
            {
                Debug.LogError($"[EntityFactory] 资源加载失败: ID={configId}, Path={resourcePath}");
                return Entity.Null;
            }

            // 3. 从 GameObject 提取渲染数据
            var meshFilter = assetGo.GetComponentInChildren<MeshFilter>();
            var meshRenderer = assetGo.GetComponentInChildren<MeshRenderer>();

            if (meshFilter == null || meshRenderer == null)
            {
                Debug.LogError($"[EntityFactory] 资源缺少 MeshFilter 或 MeshRenderer: {resourcePath}");
                return Entity.Null;
            }

            Mesh mesh = meshFilter.sharedMesh;
            Material material = meshRenderer.sharedMaterial;

            // 4. 创建 ECS 实体
            prefabEntity = _entityManager.CreateEntity();

            // 5. 添加渲染组件 (RenderMeshArray)
            // 这是一个比较重的操作，所以我们只对原型做一次。
            // 所有从这个原型 Instantiate 出来的实体都会共享这个 RenderMeshArray，从而自动合批。
            var renderMeshArray = new RenderMeshArray(new[] { material }, new[] { mesh });
            var renderMeshDescription = new RenderMeshDescription(
                shadowCastingMode: ShadowCastingMode.On,
                receiveShadows: true
            );

            RenderMeshUtility.AddComponents(
                prefabEntity,
                _entityManager,
                renderMeshDescription,
                renderMeshArray,
                MaterialMeshInfo.FromRenderMeshArrayIndices(0, 0)
            );

            // 6. 添加基础 Transform 组件
            if (!_entityManager.HasComponent<LocalTransform>(prefabEntity))
            {
                _entityManager.AddComponentData(prefabEntity, new LocalTransform { Scale = 1f, Rotation = quaternion.identity, Position = float3.zero });
            }

            // 7. 标记为 Prefab (可选，但这能让某些系统在查询时自动忽略它)
            _entityManager.AddComponent<Prefab>(prefabEntity);

            // 8. 存入缓存
            _entityPrefabCache[configId] = prefabEntity;

            return prefabEntity;
        }

        #endregion

        #region 具体创建方法


        #endregion

        // ----------------------------------------------------------------------
        // 辅助：不再需要硬编码的 GetEnemyStats，数据应直接来自 Luban Config
        // ----------------------------------------------------------------------
    }
}
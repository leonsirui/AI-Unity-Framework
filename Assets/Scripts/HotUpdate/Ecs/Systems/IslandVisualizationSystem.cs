using Cysharp.Threading.Tasks;
using GameFramework.ECS.Components;
using GameFramework.Managers;
using Unity.Collections; // [新增] 需要引用 Collections 以使用 Allocator
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.ECS.Systems
{
    /// <summary>
    /// 岛屿可视化系统：负责实例化 GameObject 并同步位置
    /// </summary>
    [UpdateInGroup(typeof(PresentationSystemGroup))]
    public partial class IslandVisualizationSystem : SystemBase
    {
        protected override void OnUpdate()
        {
            // 1. 构建查询：筛选有资源引用、有位置、但没有View实例的实体
            // 使用 QueryBuilder 替代 foreach 直接查询，以便后续转换为数组
            var query = SystemAPI.QueryBuilder()
                .WithAll<AssetReferenceComponent, LocalTransform>()
                .WithNone<ViewInstanceComponent>()
                .Build();

            // 如果没有匹配的实体，直接返回，避免不必要的内存分配
            if (query.IsEmpty) return;

            // 2. 将数据复制到 NativeArray 中 (Snapshot)
            // 这样做是为了断开与 EntityManager 迭代器的连接，允许我们在接下来的循环中安全地修改实体结构
            var entities = query.ToEntityArray(Allocator.Temp);
            var assetRefs = query.ToComponentDataArray<AssetReferenceComponent>(Allocator.Temp);
            var transforms = query.ToComponentDataArray<LocalTransform>(Allocator.Temp);

            // 3. 遍历数组进行处理
            for (int i = 0; i < entities.Length; i++)
            {
                var entity = entities[i];
                var resourcePath = assetRefs[i].ResourcePath.ToString();
                var transform = transforms[i];

                // [关键修复] 立即添加 Managed Component (标记为已处理)
                // 此时我们不在 SystemAPI.Query 的循环中，可以直接修改 EntityManager 结构而不报错
                EntityManager.AddComponentObject(entity, new ViewInstanceComponent { GameObject = null });

                // 启动异步加载任务
                LoadAndInstantiate(entity, resourcePath, transform).Forget();
            }

            // 4. 释放临时数组
            entities.Dispose();
            assetRefs.Dispose();
            transforms.Dispose();
        }

        private async UniTaskVoid LoadAndInstantiate(Entity entity, string path, LocalTransform spawnData)
        {
            // 异步加载资源
            var prefab = await ResourceManager.Instance.LoadAssetAsync<GameObject>(path);

            if (prefab == null)
            {
                Debug.LogError($"[IslandVis] 无法加载资源: {path}");
                return;
            }

            // 实例化 GameObject
            var go = Object.Instantiate(prefab, spawnData.Position, spawnData.Rotation);

            // 绑定到 ECS 实体
            // 再次检查实体是否存在（因为是异步，等待期间实体可能已被销毁）
            if (World.IsCreated && EntityManager.Exists(entity))
            {
                // 更新组件持有 GameObject 引用
                var viewComp = EntityManager.GetComponentObject<ViewInstanceComponent>(entity);
                viewComp.GameObject = go;
                viewComp.Transform = go.transform;
            }
            else
            {
                // 如果实体已不在，销毁刚刚生成的 GameObject
                Object.Destroy(go);
            }
        }
    }
}
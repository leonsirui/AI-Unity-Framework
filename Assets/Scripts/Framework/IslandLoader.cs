using UnityEngine;
using Unity.Entities;
using Unity.Mathematics;
using GameFramework.ECS.Components;
using System.Collections.Generic;

public class IslandLoader : MonoBehaviour
{
    // 模拟原项目的 IslandData (DTO)
    [System.Serializable]
    public class IslandDataDTO
    {
        public int ID;
        public Vector3Int Position;
        public Vector3Int Size;
        public int Airspace;
    }

    [Header("测试数据 (模拟存档)")]
    public List<IslandDataDTO> initialIslands = new List<IslandDataDTO>();

    // 由 GameBootstrap 调用，或者 Start 调用
    public void LoadIslands()
    {
        var entityManager = World.DefaultGameObjectInjectionWorld.EntityManager;

        foreach (var data in initialIslands)
        {
            // 创建一个 "请求实体"
            Entity reqEntity = entityManager.CreateEntity();

            entityManager.AddComponentData(reqEntity, new PlaceObjectRequest
            {
                ObjectId = data.ID,
                Position = new int3(data.Position.x, data.Position.y, data.Position.z),
                Size = new int3(data.Size.x, data.Size.y, data.Size.z),
                Type = PlacementType.Island,
                AirspaceHeight = data.Airspace
            });
        }

        Debug.Log($"[IslandLoader] 已发送 {initialIslands.Count} 个岛屿生成请求。");
    }

    private void Start()
    {
        // 测试用：启动时自动加载
        LoadIslands();
    }
}
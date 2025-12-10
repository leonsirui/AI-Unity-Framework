using GameFramework.Camera;
using GameFramework.ECS.Components;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

namespace GameFramework.Examples
{
    /// <summary>
    /// 极简同步器：只负责让摄像机目标跟随 ECS Player
    /// 性能开销几乎为 0
    /// </summary>
    public class PlayerCameraSync : MonoBehaviour
    {
        private EntityManager _entityManager;
        private EntityQuery _playerQuery;
        private Transform _targetTransform;

        private void Start()
        {
            var world = World.DefaultGameObjectInjectionWorld;
            if (world != null)
            {
                _entityManager = world.EntityManager;
                // 查询带有 PlayerTag 和 LocalTransform 的实体
                /*_playerQuery = _entityManager.CreateEntityQuery(typeof(PlayerTag), typeof(LocalTransform));*/
            }

            // 创建一个不可见的 GameObject 作为摄像机焦点
            var targetGO = new GameObject("CameraTarget_Follower");
            _targetTransform = targetGO.transform;

            // 通知 CameraController 跟随这个空物体
            if (CameraController.Instance != null)
            {
                //CameraController.Instance.SetFollow(_targetTransform);
            }
        }

        private void LateUpdate()
        {
            if (_playerQuery.IsEmptyIgnoreFilter) return;

            // 获取第一个 Player 的位置
            // 注意：这里假设单人游戏，只有一个 Player
            var transforms = _playerQuery.ToComponentDataArray<LocalTransform>(Allocator.Temp);
            if (transforms.Length > 0)
            {
                var playerPos = transforms[0].Position;
                // 同步坐标
                _targetTransform.position = playerPos;
            }
            transforms.Dispose();
        }

        private void OnDestroy()
        {
            if (_targetTransform != null)
            {
                Destroy(_targetTransform.gameObject);
            }
        }
    }
}
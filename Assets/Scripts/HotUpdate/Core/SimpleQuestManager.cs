using UnityEngine;
using GameFramework.Events;
using cfg; // 引用包含 PlacementType 的命名空间
using GameFramework.ECS.Components;

namespace HotUpdate.Core
{
    public struct ObjectBuiltEvent : IGameEvent
    {
        public PlacementType Type; // 只需要知道造了什么类型
    }
    public class SimpleQuestManager
    {
        // 单例模式，方便访问
        public static readonly SimpleQuestManager Instance = new SimpleQuestManager();

        // 任务计数器
        private int _islandCount = 0;
        private int _buildingCount = 0;
        private int _bridgeCount = 0;

        // 任务完成标记（防止重复弹窗）
        private bool _task1Done = false;
        private bool _task2Done = false;
        private bool _task3Done = false;

        public void Init()
        {
            // 监听建造事件
            EventManager.Instance.Subscribe<ObjectBuiltEvent>(OnObjectBuilt);
            Debug.Log("【任务系统】启动：等待玩家建造...");
        }

        private void OnObjectBuilt(ObjectBuiltEvent evt)
        {
            // 根据建造类型更新进度
            switch (evt.Type)
            {
                case PlacementType.Island:
                    _islandCount++;
                    CheckTask1();
                    break;
                case PlacementType.Building:
                    _buildingCount++;
                    CheckTask2();
                    break;
                case PlacementType.Bridge:
                    _bridgeCount++;
                    CheckTask3();
                    break;
            }
        }

        // 任务1：建造3个岛屿
        private void CheckTask1()
        {
            if (_task1Done) return;
            Debug.Log($"[任务进度] 建造岛屿: {_islandCount}/3");

            if (_islandCount >= 3)
            {
                _task1Done = true;
                Debug.Log("<color=yellow>【任务完成】恭喜！你已经建造了3个岛屿！</color>");
                // 这里可以调用 UIManager 弹窗给奖励
            }
        }

        // 任务2：建造2个建筑
        private void CheckTask2()
        {
            if (_task2Done) return;
            Debug.Log($"[任务进度] 建造建筑: {_buildingCount}/2");

            if (_buildingCount >= 2)
            {
                _task2Done = true;
                Debug.Log("<color=yellow>【任务完成】恭喜！你已经建造了2个建筑！</color>");
            }
        }

        // 任务3：建造2个桥梁
        private void CheckTask3()
        {
            if (_task3Done) return;
            Debug.Log($"[任务进度] 建造桥梁: {_bridgeCount}/2");

            if (_bridgeCount >= 2)
            {
                _task3Done = true;
                Debug.Log("<color=yellow>【任务完成】恭喜！你已经建造了2个桥梁！</color>");
            }
        }
    }
}
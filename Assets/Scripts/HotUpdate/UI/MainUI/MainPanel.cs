using GameFramework.Managers;
using GameFramework.UI;
using GameFramework.Core;   // 引用核心定义 (ResourceType, ResourceChangedEvent)
using GameFramework.Events; // 引用事件系统
using TMPro;
using UnityEngine;
using UnityEngine.UI;

class MainPanel : UIPanel
{
    //玩家信息部分
    [UIBind] private TextMeshProUGUI m_tmp_PlayerName;
    [UIBind] private Image PlayerIcon;

    //资源信息部分
    [UIBind] private TextMeshProUGUI m_tmp_WoodNumText;
    [UIBind] private TextMeshProUGUI m_tmp_RockNumText; // 对应 Stone
    [UIBind] private TextMeshProUGUI m_tmp_OilNumText;  // 假设对应 Oil (需在ResourceType枚举中添加)
    [UIBind] private TextMeshProUGUI m_tmp_GoldCoinNumText;

    //活动按钮部分
    [UIBind] private Button m_btn_ActivityGift;
    [UIBind] private Button m_btn_7DayCheckIn;

    //功能按钮
    [UIBind] private Button m_btn_PlacementSystem;

    protected override void OnInit()
    {
        base.OnInit();

        // 1. 订阅资源变化事件
        // 注意：使用了之前定义的泛型 Subscribe 方法
        EventManager.Instance.Subscribe<ResourceChangedEvent>(OnResourceChanged);
    }

    // 建议添加 OnDestroy 或 OnClose 来移除监听，防止内存泄漏
    protected void OnDestroy()
    {
        if (EventManager.Instance != null)
        {
            EventManager.Instance.Unsubscribe<ResourceChangedEvent>(OnResourceChanged);
        }
    }

    // 每次显示时调用
    protected override void OnShow()
    {
        base.OnShow();

        // 2. 面板打开时，主动获取一次当前所有数据，确保显示正确
        RefreshAllResources();
    }

    /// <summary>
    /// 事件回调：当资源发生变化时自动调用
    /// </summary>
    private void OnResourceChanged(ResourceChangedEvent evt)
    {
        // 根据变化的类型，只更新对应的文本，提高性能
        switch (evt.Type)
        {
            case ResourceType.Wood:
                m_tmp_WoodNumText.text = evt.NewValue.ToString();
                break;
            case ResourceType.Stone:
                m_tmp_RockNumText.text = evt.NewValue.ToString();
                break;
            case ResourceType.Gold:
                m_tmp_GoldCoinNumText.text = evt.NewValue.ToString();
                break;
                // 如果你在 ResourceType 中定义了 Oil，在这里处理
                // case ResourceType.Oil:
                //     m_tmp_OilNumText.text = evt.NewValue.ToString();
                //     break;
        }
    }

    /// <summary>
    /// 主动刷新所有资源显示 (用于 OnShow)
    /// </summary>
    private void RefreshAllResources()
    {
        var resMgr = GameResourceManager.Instance;

        // 获取当前数值
        int wood = resMgr.GetResource(ResourceType.Wood);
        int stone = resMgr.GetResource(ResourceType.Stone);
        int gold = resMgr.GetResource(ResourceType.Gold);
        int oil = 0; // resMgr.GetResource(ResourceType.Oil); // 需补充枚举定义

        SetResourcesNum(wood, stone, oil, gold);
    }

    private void SetResourcesNum(int wood, int rock, int oil, int goldCoin)
    {
        if (m_tmp_WoodNumText) m_tmp_WoodNumText.text = wood.ToString();
        if (m_tmp_RockNumText) m_tmp_RockNumText.text = rock.ToString();
        if (m_tmp_OilNumText) m_tmp_OilNumText.text = oil.ToString();
        if (m_tmp_GoldCoinNumText) m_tmp_GoldCoinNumText.text = goldCoin.ToString();
    }
}
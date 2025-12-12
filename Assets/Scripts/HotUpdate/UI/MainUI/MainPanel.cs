using GameFramework.Managers;
using GameFramework.UI;
using GameFramework.Core;
using GameFramework.Events;
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
    [UIBind] private TextMeshProUGUI m_tmp_RockNumText;
    [UIBind] private TextMeshProUGUI m_tmp_OilNumText;
    [UIBind] private TextMeshProUGUI m_tmp_GoldCoinNumText;

    //活动按钮部分
    [UIBind] private Button m_btn_ActivityGift;
    [UIBind] private Button m_btn_7DayCheckIn;

    //功能按钮
    [UIBind] private Button m_btn_PlacementSystem;

    protected override void OnInit()
    {
        base.OnInit();
        // 订阅资源变化事件
        //EventManager.Instance.Subscribe<ResourceChangedEvent>(OnResourceChanged);
        // 初始化时主动刷新一次所有资源显示
        RefreshAllResources();
    }

    protected void OnDestroy()
    {
        if (EventManager.Instance != null)
        {
            EventManager.Instance.Unsubscribe<ResourceChangedEvent>(OnResourceChanged);
        }
    }

    protected override void OnShow()
    {
        base.OnShow();
        RefreshAllResources();
    }

    /// <summary>
    /// 事件回调：当资源发生变化时自动调用
    /// </summary>
    private void OnResourceChanged(ResourceChangedEvent evt)
    {
        switch (evt.Type)
        {
            case ResourceType.Wood:
                if (m_tmp_WoodNumText != null)
                    m_tmp_WoodNumText.text = evt.NewValue.ToString();
                else
                    Debug.LogError("[MainPanel] m_tmp_WoodNumText is null! Check UI Bindings.");
                break;

            case ResourceType.Stone:
                if (m_tmp_RockNumText != null)
                    m_tmp_RockNumText.text = evt.NewValue.ToString();
                else
                    Debug.LogError("[MainPanel] m_tmp_RockNumText is null! Check UI Bindings.");
                break;

            case ResourceType.Gold:
                if (m_tmp_GoldCoinNumText != null)
                    m_tmp_GoldCoinNumText.text = evt.NewValue.ToString();
                else
                    Debug.LogError("[MainPanel] m_tmp_GoldCoinNumText is null! Check UI Bindings.");
                break;
        }
    }

    /// <summary>
    /// 主动刷新所有资源显示
    /// </summary>
    private void RefreshAllResources()
    {
        var resMgr = GameResourceManager.Instance;
        if (resMgr == null)
        {
            Debug.Log("GameResourceManager未初始化");
            return;
        }

        int wood = resMgr.GetResource(ResourceType.Wood);
        int stone = resMgr.GetResource(ResourceType.Stone);
        int gold = resMgr.GetResource(ResourceType.Gold);
        int oil = 0;

        SetResourcesNum(wood, stone, oil, gold);
    }

    private void SetResourcesNum(int wood, int rock, int oil, int goldCoin)
    {
        // 如果组件为空，则输出 Error 日志，便于调试发现问题
        if (m_tmp_WoodNumText != null)
            m_tmp_WoodNumText.text = wood.ToString();
        else
            Debug.LogError($"[MainPanel] Resource Update Failed: {nameof(m_tmp_WoodNumText)} is null.");

        if (m_tmp_RockNumText != null)
            m_tmp_RockNumText.text = rock.ToString();
        else
            Debug.LogError($"[MainPanel] Resource Update Failed: {nameof(m_tmp_RockNumText)} is null.");

        if (m_tmp_OilNumText != null)
            m_tmp_OilNumText.text = oil.ToString();
        else
            Debug.LogError($"[MainPanel] Resource Update Failed: {nameof(m_tmp_OilNumText)} is null.");

        if (m_tmp_GoldCoinNumText != null)
            m_tmp_GoldCoinNumText.text = goldCoin.ToString();
        else
            Debug.LogError($"[MainPanel] Resource Update Failed: {nameof(m_tmp_GoldCoinNumText)} is null.");
    }
}
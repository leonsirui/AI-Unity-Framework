using UnityEngine;
using Cysharp.Threading.Tasks;
using System.Collections.Generic;

namespace GameFramework.Managers
{
    public class UIManager : Singleton<UIManager>
    {
        private Canvas _uiCanvas;
        private Dictionary<string, UIPanel> _panels = new();
        private Stack<UIPanel> _panelStack = new();

        public async UniTask InitializeAsync()
        {
            // 创建UI Canvas
            var canvasPrefab = await ResourceManager.Instance
                .LoadAssetAsync<GameObject>("UICanvas");
            var canvasGO = Instantiate(canvasPrefab);
            _uiCanvas = canvasGO.GetComponent<Canvas>();

            DontDestroyOnLoad(canvasGO);
            Debug.Log("UI系统初始化完成");
        }

        public async UniTask<T> ShowPanel<T>(string panelKey) where T : UIPanel
        {
            if (_panels.TryGetValue(panelKey, out var existingPanel))
            {
                existingPanel.Show();
                _panelStack.Push(existingPanel);
                return existingPanel as T;
            }

            var panelGO = await ResourceManager.Instance
                .InstantiateAsync(panelKey, _uiCanvas.transform);
            var panel = panelGO.GetComponent<T>();

            _panels[panelKey] = panel;
            _panelStack.Push(panel);
            panel.Show();

            return panel;
        }

        public void HidePanel(string panelKey)
        {
            if (_panels.TryGetValue(panelKey, out var panel))
            {
                panel.Hide();
                if (_panelStack.Count > 0 && _panelStack.Peek() == panel)
                {
                    _panelStack.Pop();
                }
            }
        }

        public void HideTopPanel()
        {
            if (_panelStack.Count > 0)
            {
                var panel = _panelStack.Pop();
                panel.Hide();
            }
        }

        public void HideAllPanels()
        {
            foreach (var panel in _panels.Values)
            {
                panel.Hide();
            }
            _panelStack.Clear();
        }
    }

    public abstract class UIPanel : MonoBehaviour
    {
        [SerializeField] protected CanvasGroup canvasGroup;

        public virtual void Show()
        {
            gameObject.SetActive(true);
            if (canvasGroup != null)
            {
                canvasGroup.alpha = 1;
                canvasGroup.interactable = true;
                canvasGroup.blocksRaycasts = true;
            }
            OnShow();
        }

        public virtual void Hide()
        {
            if (canvasGroup != null)
            {
                canvasGroup.alpha = 0;
                canvasGroup.interactable = false;
                canvasGroup.blocksRaycasts = false;
            }
            gameObject.SetActive(false);
            OnHide();
        }

        protected virtual void OnShow() { }
        protected virtual void OnHide() { }
    }
}

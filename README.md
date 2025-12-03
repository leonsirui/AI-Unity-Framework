# Unity ECS 中度游戏框架

## 📋 项目概述

这是一个基于 Unity 2022.3.62 和 ECS (Entity Component System) 架构的完整游戏框架，支持 PC 和移动端平台。

## 🎯 主要特性

### 核心系统
- ✅ ECS 架构 (Unity DOTS)
- ✅ 完整的管理器系统
- ✅ 资源管理 (Addressables)
- ✅ 场景管理
- ✅ 事件系统
- ✅ 状态机

### 游戏功能
- ✅ 玩家控制系统
- ✅ 敌人AI系统
- ✅ 战斗系统
- ✅ 经验值/升级系统
- ✅ 伤害计算
- ✅ 对象池

### UI系统
- ✅ UI管理器
- ✅ 面板栈管理
- ✅ 本地化支持
- ✅ DOTween动画集成

### 工具系统
- ✅ 性能监控
- ✅ 调试工具
- ✅ 编辑器扩展
- ✅ 数据表系统

## 📦 依赖插件
 "com.unity.entities": "1.0.16",
  "com.unity.burst": "1.8.8",
  "com.unity.collections": "2.1.4",
  "com.unity.mathematics": "1.2.6",
  "com.unity.addressables": "1.21.17",
  "com.unity.inputsystem": "1.7.0",
  "com.cysharp.unitask": "2.x",
  "com.demigiant.dotween": "1.2.765",
  "com.unity.cinemachine": "2.9.7"

  🚀 快速开始
1. 安装依赖
打开 Unity Package Manager
添加以上依赖包
等待导入完成
2. 创建启动场景
创建新场景 BootScene
添加 GameBootstrap 组件到空物体
创建 GameConfig ScriptableObject
配置 GameBootstrap 引用
3. 配置 Addressables
4. 运行游戏
打开 BootScene
点击 Play
系统自动初始化
📁 项目结构

	Assets/
	├── Scripts/
	│   ├── Core/                    # 核心系统
	│   │   ├── GameBootstrap.cs
	│   │   ├── GameConfig.cs
	│   │   └── GameStateManager.cs
	│   ├── ECS/                     # ECS相关
	│   │   ├── Components/          # 组件定义
	│   │   ├── Systems/             # 系统实现
	│   │   ├── Authoring/          # Authoring组件
	│   │   └── Jobs/               # Job系统
	│   ├── Managers/               # 管理器
	│   │   ├── ResourceManager.cs
	│   │   ├── UIManager.cs
	│   │   ├── AudioManager.cs
	│   │   ├── InputManager.cs
	│   │   ├── SceneManager.cs
	│   │   ├── SaveManager.cs
	│   │   └── PoolManager.cs
	│   ├── UI/                     # UI面板
	│   │   ├── MainMenuPanel.cs
	│   │   ├── GameHUDPanel.cs
	│   │   └── SettingsPanel.cs
	│   ├── Utilities/              # 工具类
	│   │   ├── MathUtility.cs
	│   │   ├── Extensions.cs
	│   │   └── DebugUtility.cs
	│   ├── Data/                   # 数据表
	│   ├── Localization/           # 本地化
	│   └── VFX/                    # 特效管理
	├── Resources/
	├── StreamingAssets/
	├── AddressableAssets/
	└── Editor/                     # 编辑器工具

🆘 常见问题
Q: ECS World未初始化？
A: 确保GameBootstrap在场景启动时执行

Q: Addressables加载失败？
A: 检查资源是否正确标记为Addressable

Q: 输入无响应？
A: 确认InputManager已初始化且InputActions已启用

Q: UI不显示？
A: 检查UICanvas是否正确创建，面板路径是否正确

📝 更新日志
v1.0.0 (2025-12-03)
✅ 初始版本发布
✅ 完整的ECS框架
✅ 所有核心管理器
✅ UI系统
✅ 本地化支持
📄 许可证
MIT License

👥 贡献
欢迎提交Issue和Pull Request

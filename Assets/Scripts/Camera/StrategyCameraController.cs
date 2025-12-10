using UnityEngine;
using GameFramework.Camera; // 引用你现有的 CameraController

namespace GameFramework.Gameplay
{
    /// <summary>
    /// 策略游戏自由摄像机控制器
    /// 挂载在场景中的一个空物体上 (CameraFocus)，负责移动该物体，Cinemachine 会跟随它。
    /// </summary>
    public class StrategyCameraController : MonoBehaviour
    {
        [Header("Movement Settings")]
        public float moveSpeed = 20f;
        public float boostMultiplier = 2f; // 按住 Shift 加速
        public float smoothTime = 0.1f;    // 移动平滑度

        [Header("Zoom Settings")]
        public float zoomSpeed = 2f;
        public float minFOV = 20f;
        public float maxFOV = 80f;

        [Header("Boundaries (Optional)")]
        public bool useBounds = true;
        public Vector2 minBounds = new Vector2(-50, -50);
        public Vector2 maxBounds = new Vector2(50, 50);

        private Vector3 _targetPosition;
        private Vector3 _currentVelocity;
        private float _targetFOV = 60f;

        private void Start()
        {
            _targetPosition = transform.position;
            // 初始化 FOV
            if (UnityEngine.Camera.main != null)
                _targetFOV = UnityEngine.Camera.main.fieldOfView;
        }

        private void Update()
        {
            HandleMovement();
            HandleZoom();
        }

        private void HandleMovement()
        {
            float h = Input.GetAxisRaw("Horizontal"); // A/D or Left/Right
            float v = Input.GetAxisRaw("Vertical");   // W/S or Up/Down

            // 如果你的输入系统在 InputManager，也可以从那里读取
            // var inputData = InputManager.Instance.GetInputData();
            // h = inputData.Move.x; v = inputData.Move.y;

            Vector3 direction = new Vector3(h, 0, v).normalized;

            // 考虑摄像机视角的旋转（如果摄像机是旋转过的）
            // 这里假设是标准的45度上帝视角，且 World Forward 就是屏幕上方
            // 如果需要相对于摄像机移动，可以使用: 
            // var forward = UnityEngine.Camera.main.transform.forward;
            // var right = UnityEngine.Camera.main.transform.right;
            // forward.y = 0; right.y = 0;
            // direction = (forward * v + right * h).normalized;

            float speed = Input.GetKey(KeyCode.LeftShift) ? moveSpeed * boostMultiplier : moveSpeed;

            if (direction.magnitude >= 0.1f)
            {
                _targetPosition += direction * speed * Time.deltaTime;
            }

            // 限制范围
            if (useBounds)
            {
                _targetPosition.x = Mathf.Clamp(_targetPosition.x, minBounds.x, maxBounds.x);
                _targetPosition.z = Mathf.Clamp(_targetPosition.z, minBounds.y, maxBounds.y);
            }

            // 平滑移动焦点物体
            transform.position = Vector3.SmoothDamp(transform.position, _targetPosition, ref _currentVelocity, smoothTime);
        }

        private void HandleZoom()
        {
            float scroll = Input.GetAxis("Mouse ScrollWheel");
            if (Mathf.Abs(scroll) > 0.01f)
            {
                _targetFOV -= scroll * zoomSpeed * 100f * Time.deltaTime;
                _targetFOV = Mathf.Clamp(_targetFOV, minFOV, maxFOV);

                // 调用你现有的 CameraController 进行变焦
                // 注意：由于我们在 Update 里持续调用，最好确保 CameraController 的 Zoom 逻辑支持高频更新
                // 或者直接在这里修改 Cinemachine，为了利用现有架构，我们调用单例方法：
                CameraController.Instance.ZoomCamera(_targetFOV, 0.1f); // 0.1f duration for quick response
            }
        }
    }
}
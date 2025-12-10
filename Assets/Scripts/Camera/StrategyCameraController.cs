using UnityEngine;
using GameFramework.Camera;

namespace GameFramework.Gameplay
{
    public class StrategyCameraController : MonoBehaviour
    {
        [Header("Movement Settings")]
        public float moveSpeed = 20f;
        public float boostMultiplier = 2f;
        public float smoothTime = 0.1f;

        [Header("Rotation Settings")] // 新增：旋转设置
        public float rotationSpeed = 2f;

        [Header("Zoom Settings")]
        public float zoomSpeed = 2f;
        public float minFOV = 20f;
        public float maxFOV = 80f;

        [Header("Boundaries")]
        public bool useBounds = true;
        public Vector2 minBounds = new Vector2(-50, -50);
        public Vector2 maxBounds = new Vector2(50, 50);

        private Vector3 _targetPosition;
        private Vector3 _currentVelocity;
        private float _targetFOV = 60f;

        private void Start()
        {
            _targetPosition = transform.position;
            if (UnityEngine.Camera.main != null)
                _targetFOV = UnityEngine.Camera.main.fieldOfView;
        }

        private void Update()
        {
            HandleMovement();
            HandleRotation(); // 新增：调用旋转逻辑
            HandleZoom();
        }

        // 修改后：基于摄像机视角的移动
        private void HandleMovement()
        {
            float h = Input.GetAxisRaw("Horizontal");
            float v = Input.GetAxisRaw("Vertical");

            // 获取主摄像机的前方和右方（忽略高度差，只取水平面）
            var camTransform = UnityEngine.Camera.main.transform;
            var forward = camTransform.forward;
            var right = camTransform.right;
            forward.y = 0;
            right.y = 0;
            forward.Normalize();
            right.Normalize();

            // 根据摄像机朝向计算移动方向
            Vector3 direction = (forward * v + right * h).normalized;

            float speed = Input.GetKey(KeyCode.LeftShift) ? moveSpeed * boostMultiplier : moveSpeed;

            if (direction.magnitude >= 0.1f)
            {
                _targetPosition += direction * speed * Time.deltaTime;
            }

            if (useBounds)
            {
                _targetPosition.x = Mathf.Clamp(_targetPosition.x, minBounds.x, maxBounds.x);
                _targetPosition.z = Mathf.Clamp(_targetPosition.z, minBounds.y, maxBounds.y);
            }

            transform.position = Vector3.SmoothDamp(transform.position, _targetPosition, ref _currentVelocity, smoothTime);
        }

        // 新增：处理旋转逻辑
        private void HandleRotation()
        {
            // 检测鼠标右键按住 (0是左键, 1是右键, 2是中键)
            if (Input.GetMouseButton(1))
            {
                float mouseX = Input.GetAxis("Mouse X");

                // 旋转焦点物体自身 (Cinemachine 会因为 LockToTarget 而跟着转)
                transform.Rotate(Vector3.up, mouseX * rotationSpeed, Space.World);
            }
        }

        private void HandleZoom()
        {
            float scroll = Input.GetAxis("Mouse ScrollWheel");
            if (Mathf.Abs(scroll) > 0.01f)
            {
                // 注意：滚轮向下是负值，所以用减号来实现拉近拉远符合直觉
                _targetFOV -= scroll * zoomSpeed * 100f * Time.deltaTime;
                _targetFOV = Mathf.Clamp(_targetFOV, minFOV, maxFOV);
                CameraController.Instance.ZoomCamera(_targetFOV, 0.1f);
            }
        }
    }
}
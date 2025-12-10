using UnityEngine;
using Cinemachine;
using GameFramework.Managers; // 引用 InputManager
using GameFramework.Events;   // 引用 EventManager
using UnityEngine.InputSystem; // 引用 New Input System 原生API

namespace GameFramework.Camera
{
    public class CameraController : Singleton<CameraController>
    {
        [Header("核心组件")]
        [SerializeField] private CinemachineVirtualCamera virtualCamera;

        [Header("移动设置")]
        public float moveSpeed = 10f;

        [Header("旋转设置")]
        public float rotationSpeed = 0.2f; // New Input System的数值通常较大，这里适当调小
        public float tiltSpeed = 0.1f;

        [Header("俯仰角度限制")]
        public float maxTiltAngle = 65f;
        public float minTiltAngle = 30f;

        [Header("缩放设置")]
        public float zoomSpeed = 0.5f; // 调整灵敏度适配 Scroll 值
        public float minZoom = 5f;
        public float maxZoom = 20f;

        [Header("摄像机高度")]
        public float cameraHeight = 15f;

        [Header("移动范围限制")]
        public bool useMovementBoundary = true;
        public float minX = -50f;
        public float maxX = 50f;
        public float minZ = -50f;
        public float maxZ = 50f;

        private float _currentTiltAngle;
        private float _currentZoom;

        private void Awake()
        {
            if (virtualCamera == null)
            {
                virtualCamera = GetComponent<CinemachineVirtualCamera>();
                if (virtualCamera == null) virtualCamera = FindObjectOfType<CinemachineVirtualCamera>();
            }
        }

        private void Start()
        {
            // 订阅事件
            EventManager.Instance.Subscribe<CameraFocusEvent>(OnCameraFocus);

            SetCameraHeight();
            SetFixed45DegreeAngle();

            _currentTiltAngle = 45f;
            _currentZoom = maxZoom;

            if (virtualCamera != null)
            {
                virtualCamera.m_Lens.FieldOfView = _currentZoom;
            }
        }

        private void OnDestroy()
        {
            if (EventManager.Instance != null)
            {
                // 取消订阅
                EventManager.Instance.Unsubscribe<CameraFocusEvent>(OnCameraFocus);
            }
        }

        private void Update()
        {
            HandleCameraMovement();
            HandleCameraRotation();
            HandleCameraZoom();
        }

        private void SetCameraHeight()
        {
            Vector3 position = transform.position;
            position.y = cameraHeight;
            transform.position = position;
        }

        private void SetFixed45DegreeAngle()
        {
            transform.rotation = Quaternion.Euler(45f, 45f, 0f);
            if (virtualCamera != null) virtualCamera.Follow = null;
        }

        private void HandleCameraMovement()
        {
            // 获取来自 InputManager 的输入
            var inputData = InputManager.Instance.GetInputData();

            // 注意：InputData.Move 是 float2，需要转为 Vector3
            Vector3 inputDirection = new Vector3(inputData.Move.x, 0f, inputData.Move.y);

            // 如果没有输入，直接返回
            if (inputDirection.magnitude < 0.01f) return;

            // 将输入方向转换为摄像机朝向的方向
            Vector3 moveDirection = transform.forward * inputDirection.z + transform.right * inputDirection.x;
            moveDirection.y = 0; // 保持水平移动

            Vector3 newPosition = transform.position + moveDirection * moveSpeed * Time.deltaTime;

            if (useMovementBoundary)
            {
                newPosition.x = Mathf.Clamp(newPosition.x, minX, maxX);
                newPosition.z = Mathf.Clamp(newPosition.z, minZ, maxZ);
            }

            newPosition.y = cameraHeight;
            transform.position = newPosition;
        }

        private void HandleCameraRotation()
        {
            // 使用 New Input System 直接检测鼠标右键
            if (Mouse.current.rightButton.isPressed)
            {
                // 获取 InputManager 中的 Look (对应 Mouse Delta)
                var inputData = InputManager.Instance.GetInputData();

                float mouseX = inputData.Look.x;
                float mouseY = inputData.Look.y;

                // 水平旋转
                transform.RotateAround(transform.position, Vector3.up, mouseX * rotationSpeed);

                // 俯仰控制
                _currentTiltAngle -= mouseY * tiltSpeed;
                _currentTiltAngle = Mathf.Clamp(_currentTiltAngle, minTiltAngle, maxTiltAngle);

                Vector3 currentEuler = transform.eulerAngles;
                transform.rotation = Quaternion.Euler(_currentTiltAngle, currentEuler.y, 0f);
            }
        }

        private void HandleCameraZoom()
        {
            // 使用 New Input System 获取滚轮值
            float scroll = Mouse.current.scroll.ReadValue().y;

            // 滚轮的值通常比较大（例如120），将其归一化处理
            if (Mathf.Abs(scroll) > 0.01f)
            {
                // 注意方向：滚轮向上(正值)通常希望拉近(FOV变小)
                _currentZoom -= Mathf.Sign(scroll) * zoomSpeed;
                _currentZoom = Mathf.Clamp(_currentZoom, minZoom, maxZoom);

                if (virtualCamera != null)
                {
                    virtualCamera.m_Lens.FieldOfView = _currentZoom;
                }
            }
        }

        // 事件回调函数
        private void OnCameraFocus(CameraFocusEvent evt)
        {
            FocusOnTarget(evt.TargetPosition);
        }

        public void FocusOnTarget(Vector3 targetPosition)
        {
            Vector3 newPosition = targetPosition;
            newPosition.y = cameraHeight;

            if (useMovementBoundary)
            {
                newPosition.x = Mathf.Clamp(newPosition.x, minX, maxX);
                newPosition.z = Mathf.Clamp(newPosition.z, minZ, maxZ);
            }

            transform.position = newPosition;
        }

        private void OnDrawGizmosSelected()
        {
            if (useMovementBoundary)
            {
                Gizmos.color = Color.green;
                Vector3 center = new Vector3((minX + maxX) * 0.5f, cameraHeight, (minZ + maxZ) * 0.5f);
                Vector3 size = new Vector3(maxX - minX, 0.1f, maxZ - minZ);
                Gizmos.DrawWireCube(center, size);
            }
        }
    }
}
public struct CameraFocusEvent : IGameEvent
{
    public Vector3 TargetPosition;
}
using UnityEngine;
using Unity.Mathematics;
using Cinemachine;

namespace GameFramework.Camera
{
    public class CameraController : Singleton<CameraController>
    {
        [SerializeField] private CinemachineVirtualCamera virtualCamera;
        [SerializeField] private float shakeDuration = 0.3f;
        [SerializeField] private float shakeAmplitude = 1.2f;
        [SerializeField] private float shakeFrequency = 2f;

        private CinemachineBasicMultiChannelPerlin _noise;
        private float _shakeTimer = 0f;

        private void Awake()
        {
            if (virtualCamera == null)
            {
                virtualCamera = FindObjectOfType<CinemachineVirtualCamera>();
            }

            if (virtualCamera != null)
            {
                _noise = virtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
            }
        }

        private void Update()
        {
            if (_shakeTimer > 0)
            {
                _shakeTimer -= Time.deltaTime;
                if (_shakeTimer <= 0f && _noise != null)
                {
                    _noise.m_AmplitudeGain = 0f;
                }
            }
        }

        public void SetFollow(Transform target)
        {
            if (virtualCamera != null)
            {
                virtualCamera.Follow = target;
                virtualCamera.LookAt = target;
            }
        }

        public void ShakeCamera(float duration = -1f, float amplitude = -1f, float frequency = -1f)
        {
            if (_noise == null) return;

            _shakeTimer = duration > 0 ? duration : shakeDuration;
            _noise.m_AmplitudeGain = amplitude > 0 ? amplitude : shakeAmplitude;
            _noise.m_FrequencyGain = frequency > 0 ? frequency : shakeFrequency;
        }

        public void ZoomCamera(float targetFOV, float duration = 1f)
        {
            if (virtualCamera == null) return;

            // 使用DOTween平滑过渡
            var lens = virtualCamera.m_Lens;
            DG.Tweening.DOTween.To(
                () => lens.FieldOfView,
                x => {
                    lens.FieldOfView = x;
                    virtualCamera.m_Lens = lens;
                },
                targetFOV,
                duration
            );
        }
    }
}

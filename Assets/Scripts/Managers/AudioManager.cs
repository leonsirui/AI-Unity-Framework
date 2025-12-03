using Cysharp.Threading.Tasks;
using GameFramework.Core;
using System.Collections.Generic;
using UnityEngine;

namespace GameFramework.Managers
{
    public class AudioManager : Singleton<AudioManager>
    {
        private AudioSource _musicSource;
        private List<AudioSource> _sfxSources = new();
        private const int SFX_POOL_SIZE = 10;

        public void Initialize()
        {
            // 创建音乐源
            var musicGO = new GameObject("MusicSource");
            musicGO.transform.SetParent(transform);
            _musicSource = musicGO.AddComponent<AudioSource>();
            _musicSource.loop = true;

            // 创建音效池
            for (int i = 0; i < SFX_POOL_SIZE; i++)
            {
                var sfxGO = new GameObject($"SFXSource_{i}");
                sfxGO.transform.SetParent(transform);
                var source = sfxGO.AddComponent<AudioSource>();
                _sfxSources.Add(source);
            }

            ApplyVolumeSettings();
            Debug.Log("音频系统初始化完成");
        }

        public async UniTask PlayMusic(string musicKey, bool loop = true)
        {
            var clip = await ResourceManager.Instance.LoadAssetAsync<AudioClip>(musicKey);
            _musicSource.clip = clip;
            _musicSource.loop = loop;
            _musicSource.Play();
        }

        public async UniTask PlaySFX(string sfxKey, float volume = 1.0f)
        {
            var clip = await ResourceManager.Instance.LoadAssetAsync<AudioClip>(sfxKey);
            var source = GetAvailableSFXSource();
            source.PlayOneShot(clip, volume);
        }

        private AudioSource GetAvailableSFXSource()
        {
            foreach (var source in _sfxSources)
            {
                if (!source.isPlaying)
                    return source;
            }
            return _sfxSources[0]; // 如果都在播放,使用第一个
        }

        public void SetMasterVolume(float volume)
        {
            AudioListener.volume = volume;
        }

        public void SetMusicVolume(float volume)
        {
            _musicSource.volume = volume;
        }

        private void ApplyVolumeSettings()
        {
            var config = ConfigManager.Instance.GameConfig;
            SetMasterVolume(config.masterVolume);
            SetMusicVolume(config.musicVolume);
        }
    }
}

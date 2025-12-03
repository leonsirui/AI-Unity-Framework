using System.Collections.Generic;
using UnityEngine;

namespace GameFramework.Data
{
    public interface IDataTable
    {
        void Load();
        void Clear();
    }

    public class DataTableManager : Singleton<DataTableManager>
    {
        private Dictionary<System.Type, IDataTable> _tables = new();

        public void Initialize()
        {
            RegisterTable(new ItemDataTable());
            RegisterTable(new CharacterDataTable());
            RegisterTable(new SkillDataTable());

            LoadAllTables();
            Debug.Log("数据表管理器初始化完成");
        }

        private void RegisterTable(IDataTable table)
        {
            _tables[table.GetType()] = table;
        }

        public T GetTable<T>() where T : IDataTable
        {
            if (_tables.TryGetValue(typeof(T), out var table))
            {
                return (T)table;
            }
            return default;
        }

        private void LoadAllTables()
        {
            foreach (var table in _tables.Values)
            {
                table.Load();
            }
        }

        public void ClearAll()
        {
            foreach (var table in _tables.Values)
            {
                table.Clear();
            }
        }
    }

    // 物品数据表
    public class ItemData
    {
        public int id;
        public string name;
        public string description;
        public string iconPath;
        public int maxStack;
        public int value;
    }

    public class ItemDataTable : IDataTable
    {
        private Dictionary<int, ItemData> _items = new();

        public void Load()
        {
            // 从JSON或其他数据源加载
            // 示例数据
            AddItem(new ItemData
            {
                id = 1,
                name = "生命药水",
                description = "恢复50点生命值",
                iconPath = "Icons/Potion_Health",
                maxStack = 10,
                value = 50
            });

            AddItem(new ItemData
            {
                id = 2,
                name = "魔法药水",
                description = "恢复30点魔法值",
                iconPath = "Icons/Potion_Mana",
                maxStack = 10,
                value = 40
            });

            Debug.Log($"物品数据表加载完成，共{_items.Count}条数据");
        }

        private void AddItem(ItemData item)
        {
            _items[item.id] = item;
        }

        public ItemData GetItem(int id)
        {
            return _items.TryGetValue(id, out var item) ? item : null;
        }

        public List<ItemData> GetAllItems()
        {
            return new List<ItemData>(_items.Values);
        }

        public void Clear()
        {
            _items.Clear();
        }
    }

    // 角色数据表
    public class CharacterData
    {
        public int id;
        public string name;
        public float baseHealth;
        public float baseDamage;
        public float moveSpeed;
        public string modelPath;
    }

    public class CharacterDataTable : IDataTable
    {
        private Dictionary<int, CharacterData> _characters = new();

        public void Load()
        {
            AddCharacter(new CharacterData
            {
                id = 1,
                name = "战士",
                baseHealth = 100f,
                baseDamage = 15f,
                moveSpeed = 5f,
                modelPath = "Models/Warrior"
            });

            Debug.Log($"角色数据表加载完成，共{_characters.Count}条数据");
        }

        private void AddCharacter(CharacterData character)
        {
            _characters[character.id] = character;
        }

        public CharacterData GetCharacter(int id)
        {
            return _characters.TryGetValue(id, out var character) ? character : null;
        }

        public void Clear()
        {
            _characters.Clear();
        }
    }

    // 技能数据表
    public class SkillData
    {
        public int id;
        public string name;
        public string description;
        public float damage;
        public float cooldown;
        public float manaCost;
        public string effectPath;
    }

    public class SkillDataTable : IDataTable
    {
        private Dictionary<int, SkillData> _skills = new();

        public void Load()
        {
            AddSkill(new SkillData
            {
                id = 1,
                name = "火球术",
                description = "发射一个火球造成伤害",
                damage = 30f,
                cooldown = 2f,
                manaCost = 20f,
                effectPath = "Effects/Fireball"
            });

            Debug.Log($"技能数据表加载完成，共{_skills.Count}条数据");
        }

        private void AddSkill(SkillData skill)
        {
            _skills[skill.id] = skill;
        }

        public SkillData GetSkill(int id)
        {
            return _skills.TryGetValue(id, out var skill) ? skill : null;
        }

        public void Clear()
        {
            _skills.Clear();
        }
    }
}

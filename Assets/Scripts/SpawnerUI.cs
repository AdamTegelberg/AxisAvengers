using UnityEngine;
#if PHOTON_UNITY_NETWORKING
using Photon.Pun;
#endif

[System.Serializable]
public class CatalogItem
{
    public string displayName;   // 备注用
    public string resourcesName; // 相对 Resources 的路径，如 "Entity_CamA" 或 "Cams/Entity_CamA"
}

public class SpawnerUI : MonoBehaviour
{
    [Header("Panel")]
    public GameObject panel;

    [Header("Catalog")]
    public CatalogItem[] items;    // 在 Inspector 里填型号列表

    [Header("Spawn")]
    public float distance = 1.2f;  // 视野前生成距离

    public void TogglePanel()
    {
        if (panel) panel.SetActive(!panel.activeSelf);
    }

    public void SpawnByIndex(int index)
    {
        if (items == null || index < 0 || index >= items.Length) return;
        string path = items[index].resourcesName;

        Transform cam = Camera.main ? Camera.main.transform : null;
        Vector3 pos = cam ? cam.position + cam.forward * distance : Vector3.zero;
        Quaternion rot = cam ? Quaternion.LookRotation(-cam.forward, Vector3.up) : Quaternion.identity;

#if PHOTON_UNITY_NETWORKING
        PhotonNetwork.Instantiate(path, pos, rot);
#else
        var prefab = Resources.Load<GameObject>(path);
        if (prefab) Instantiate(prefab, pos, rot);
        else Debug.LogError($"Resources.Load 失败: {path}");
#endif
    }
}

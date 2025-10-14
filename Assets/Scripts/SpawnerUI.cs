using UnityEngine;
#if PHOTON_UNITY_NETWORKING
using Photon.Pun;
#endif

[System.Serializable]
public class CatalogItem
{
    public string displayName;   // ��ע��
    public string resourcesName; // ��� Resources ��·������ "Entity_CamA" �� "Cams/Entity_CamA"
}

public class SpawnerUI : MonoBehaviour
{
    [Header("Panel")]
    public GameObject panel;

    [Header("Catalog")]
    public CatalogItem[] items;    // �� Inspector �����ͺ��б�

    [Header("Spawn")]
    public float distance = 1.2f;  // ��Ұǰ���ɾ���

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
        else Debug.LogError($"Resources.Load ʧ��: {path}");
#endif
    }
}

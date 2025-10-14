// PreviewFeedManager.cs
using UnityEngine;
using UnityEngine.UI;

public class PreviewFeedManager : MonoBehaviour
{
    public static PreviewFeedManager I;
    [Header("UI")]
    public RawImage previewImage;
    public Vector2Int resolution = new Vector2Int(640, 360);

    RenderTexture rt;
    Camera current;

    void Awake()
    {
        I = this;
        if (previewImage)
        {
            rt = new RenderTexture(resolution.x, resolution.y, 16, RenderTextureFormat.ARGB32);
            rt.name = "PreviewRT";
            rt.Create();
            previewImage.texture = rt;
        }
    }

    public void SetSource(Camera cam)
    {
        if (!previewImage || !rt) return;

        // �ص���Դ
        if (current) current.targetTexture = null;

        current = cam;

        if (current)
        {
            current.targetTexture = rt;
            current.enabled = true;     // �򿪴�ȡ�����
        }
    }

    public void Clear()
    {
        if (current) { current.targetTexture = null; current.enabled = false; }
        current = null;
    }
}

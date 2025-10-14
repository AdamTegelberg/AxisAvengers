using UnityEngine;
using System.Collections;

public class RowAutoLayout : MonoBehaviour
{
    [Tooltip("按钮之间的世界间距(米)")]
    public float spacingWorld = 0.04f;
    [Tooltip("找不到尺寸时的默认世界宽度(米)")]
    public float defaultWidthWorld = 0.032f;
    public bool center = true;

    void OnEnable() { StartCoroutine(LayoutNextFrame()); }
    void Start() { StartCoroutine(LayoutNextFrame()); }

    IEnumerator LayoutNextFrame() { yield return null; Layout(); }

    [ContextMenu("Layout Now")]
    public void Layout()
    {
        float parentScaleX = Mathf.Max(0.0001f, transform.lossyScale.x);
        float xLocal = 0f;

        for (int i = 0; i < transform.childCount; i++)
        {
            var t = transform.GetChild(i);

            // 1) 取“世界宽度”
            float wWorld = GetWorldWidth(t);

            // 2) 转为“父局部单位”
            float wLocal = wWorld / parentScaleX;
            float spacingLocal = spacingWorld / parentScaleX;

            // 3) 摆放
            t.localRotation = Quaternion.identity;
            t.localPosition = new Vector3(xLocal + wLocal * 0.5f, 0f, 0f);

            xLocal += wLocal + spacingLocal;
        }

        if (center)
        {
            float shift = (xLocal - (spacingWorld / parentScaleX)) * 0.5f;
            foreach (Transform t in transform)
                t.localPosition -= new Vector3(shift, 0f, 0f);
        }
    }

    float GetWorldWidth(Transform t)
    {
        // 优先 Collider 再 Renderer，拿“世界尺寸”
        var col = t.GetComponentInChildren<Collider>();
        if (col) return col.bounds.size.x;

        var r = t.GetComponentInChildren<Renderer>();
        if (r) return r.bounds.size.x;

        return defaultWidthWorld;
    }
}

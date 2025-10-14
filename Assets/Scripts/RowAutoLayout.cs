using UnityEngine;
using System.Collections;

public class RowAutoLayout : MonoBehaviour
{
    [Tooltip("��ť֮���������(��)")]
    public float spacingWorld = 0.04f;
    [Tooltip("�Ҳ����ߴ�ʱ��Ĭ��������(��)")]
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

            // 1) ȡ�������ȡ�
            float wWorld = GetWorldWidth(t);

            // 2) תΪ�����ֲ���λ��
            float wLocal = wWorld / parentScaleX;
            float spacingLocal = spacingWorld / parentScaleX;

            // 3) �ڷ�
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
        // ���� Collider �� Renderer���á�����ߴ硱
        var col = t.GetComponentInChildren<Collider>();
        if (col) return col.bounds.size.x;

        var r = t.GetComponentInChildren<Renderer>();
        if (r) return r.bounds.size.x;

        return defaultWidthWorld;
    }
}

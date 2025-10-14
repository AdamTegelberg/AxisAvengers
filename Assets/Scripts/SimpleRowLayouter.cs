using UnityEngine;
public class SimpleRowLayouter : MonoBehaviour
{
    public float spacing = 0.04f; public bool center = true;
    [ContextMenu("Layout Now")]
    public void Layout()
    {
        float x = 0;
        for (int i = 0; i < transform.childCount; i++)
        {
            var t = transform.GetChild(i); float w = 0.032f;
            t.localPosition = new Vector3(x + w * 0.5f, 0, 0); x += w + spacing;
        }
        if (center)
        {
            float shift = (x - spacing) * 0.5f;
            foreach (Transform t in transform) t.localPosition -= new Vector3(shift, 0, 0);
        }
    }
    void OnValidate() { Layout(); }
}

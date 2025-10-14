using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(PreviewFeedManager))]
public class PreviewFrameBuilder : MonoBehaviour
{
    public Color frameColor = new Color(0, 0, 0, 0.6f);
    public Color outlineColor = new Color(0, 0, 0, 0.9f);
    public Vector2 outlineDistance = new Vector2(2, -2);
    public Vector2 padding = new Vector2(8, 8); // x=����, y=����

    void Start()
    {
        var mgr = GetComponent<PreviewFeedManager>();
        if (!mgr || !mgr.previewImage) return;

        var raw = mgr.previewImage;
        var parent = raw.transform.parent as RectTransform;

        // ��һ������Ϊ��
        var frameGO = new GameObject("PreviewFrame", typeof(RectTransform), typeof(CanvasRenderer), typeof(Image));
        var frame = frameGO.GetComponent<RectTransform>();
        frame.SetParent(parent, false);
        frame.anchorMin = raw.rectTransform.anchorMin;
        frame.anchorMax = raw.rectTransform.anchorMax;
        frame.pivot = raw.rectTransform.pivot;
        frame.anchoredPosition = raw.rectTransform.anchoredPosition;
        frame.sizeDelta = raw.rectTransform.sizeDelta;

        // ���ɫ
        var img = frameGO.GetComponent<Image>();
        img.color = frameColor;

        // ���
        var outline = frameGO.AddComponent<Outline>();
        outline.effectColor = outlineColor;
        outline.effectDistance = outlineDistance;

        // �� RawImage Ų�������岢���ڱ߾�
        raw.transform.SetParent(frame, false);
        var rrt = raw.rectTransform;
        rrt.anchorMin = new Vector2(0, 0);
        rrt.anchorMax = new Vector2(1, 1);
        rrt.offsetMin = new Vector2(padding.x, padding.y);
        rrt.offsetMax = new Vector2(-padding.x, -padding.y);
    }
}

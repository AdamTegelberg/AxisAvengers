using UnityEngine;
using System.Collections;

public class PanelSlideToggle3D : MonoBehaviour
{
    [Header("Assign the row (the parent of all model buttons)")]
    public Transform content;                        // 指向 Row
    public float duration = 0.25f;
    public AnimationCurve ease = AnimationCurve.EaseInOut(0, 0, 1, 1);

    bool open = false;
    bool animating = false;
    Collider[] cols;

    void Awake()
    {
        if (!content && transform.childCount > 0) content = transform.GetChild(0);
        cols = content ? content.GetComponentsInChildren<Collider>(true) : null;

        // 初始：收起且不挡交互
        SetScaleX(0f);
        SetActive(false);
        SetCols(false);
        open = false;
    }

    public void Toggle()
    {
        if (animating || content == null) return; // 防抖：动画中不响应
        StopAllCoroutines();
        StartCoroutine(Anim(!open));
    }

    public void Open() { if (!open) Toggle(); }
    public void Close() { if (open) Toggle(); }

    IEnumerator Anim(bool opening)
    {
        animating = true;

        if (opening)
        {
            SetActive(true);       // 先显示
            SetCols(true);         // 允许点击
        }

        // 从当前值开始，避免半途切换导致“跳变”
        float from = Mathf.Clamp01(content.localScale.x);
        float to = opening ? 1f : 0f;
        float t = 0f;

        while (t < duration)
        {
            t += Time.unscaledDeltaTime;
            float k = ease.Evaluate(Mathf.Clamp01(t / duration));
            float s = Mathf.Lerp(from, to, k);
            SetScaleX(s);
            yield return null;
        }

        SetScaleX(to);

        if (!opening)
        {
            SetCols(false);        // 收起后不挡手/射线
            SetActive(false);      // 彻底隐藏
        }

        open = opening;
        animating = false;

        // 展开完成后再排一次，避免首次因尺寸为0导致重叠
        if (open)
        {
            var lay = content.GetComponent<RowAutoLayout>();
            if (lay) lay.Layout();
        }
    }

    void SetScaleX(float x)
    {
        if (!content) return;
        var s = content.localScale;
        // 固定 Y/Z 为 1，避免被其它脚本意外改动
        content.localScale = new Vector3(x, 1f, 1f);
    }

    void SetActive(bool on)
    {
        if (content && content.gameObject.activeSelf != on)
            content.gameObject.SetActive(on);
    }

    void SetCols(bool on)
    {
        if (cols == null) return;
        foreach (var c in cols) if (c) c.enabled = on;
    }
}

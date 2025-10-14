using UnityEngine;

public class PTZPreviewController : MonoBehaviour
{
    [Header("Preview Camera")]
    public Camera previewCamera;

    [Header("Q6075-E Optics (from datasheet)")]
    // 镜头 4.25–170 mm，HFOV 65.1°→2.00°（1080p）
    public float focalMinMm = 4.25f;
    public float focalMaxMm = 170f;
    public float hFovAtMinDeg = 65.1f;   // 广角端水平视场角（度）

    [Header("Zoom")]
    [Range(1, 40)] public float opticalZoom = 1f; // 1..40（Q6075-E）
    public bool linkToVerticalFov = true;         // Unity 是垂直 FoV，true=用 16:9 折算

    // 16:9 像素长宽比（你也可以改成根据实际 RenderTexture 动态取）
    const float aspect = 16f / 9f;

    // 用“广角端 HFOV + 焦距”解出传感器等效宽度
    float SensorWidthFromWideEnd()
    {
        // HFOV = 2 * atan( sensorWidth / (2 * f) )
        float halfHFovRad = hFovAtMinDeg * 0.5f * Mathf.Deg2Rad;
        float sensorWidth = 2f * focalMinMm * Mathf.Tan(halfHFovRad);
        return sensorWidth; // 单位同焦距（mm）
    }

    // 给定焦距，算水平 FoV（度）
    float HFovFromFocal(float focalMm, float sensorWidth)
    {
        float half = Mathf.Atan((sensorWidth * 0.5f) / focalMm);
        return 2f * half * Mathf.Rad2Deg;
    }

    // 水平 FoV → 垂直 FoV（Unity camera.fieldOfView 使用垂直 FoV）
    static float HFovToVFov(float hFovDeg, float aspect)
    {
        float h = hFovDeg * Mathf.Deg2Rad;
        float tan_v = Mathf.Tan(h * 0.5f) / aspect;
        return 2f * Mathf.Atan(tan_v) * Mathf.Rad2Deg;
    }

    void OnValidate() { ApplyZoom(); }
    void Start() { ApplyZoom(); }

    public void SetZoomFactor(float z) // 1..40
    {
        opticalZoom = Mathf.Clamp(z, 1f, 40f);
        ApplyZoom();
    }
    public void SetZoomNormalized(float t) // 0..1 → 1..40
    {
        SetZoomFactor(Mathf.Lerp(1f, 40f, Mathf.Clamp01(t)));
    }

    void ApplyZoom()
    {
        if (!previewCamera) return;

        // 焦距按 zoom 线性变化：f = f_min * zoom，截断到 f_max
        float f = Mathf.Clamp(focalMinMm * opticalZoom, focalMinMm, focalMaxMm);

        float sensorW = SensorWidthFromWideEnd();
        float hFov = HFovFromFocal(f, sensorW);      // 期望 ≈ 65.1°..2.0°

        float vFov = linkToVerticalFov ? HFovToVFov(hFov, aspect) : hFov;
        previewCamera.fieldOfView = Mathf.Clamp(vFov, 1f, 90f);
    }
}

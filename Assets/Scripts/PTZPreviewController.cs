using UnityEngine;

public class PTZPreviewController : MonoBehaviour
{
    [Header("Preview Camera")]
    public Camera previewCamera;

    [Header("Q6075-E Optics (from datasheet)")]
    // ��ͷ 4.25�C170 mm��HFOV 65.1���2.00�㣨1080p��
    public float focalMinMm = 4.25f;
    public float focalMaxMm = 170f;
    public float hFovAtMinDeg = 65.1f;   // ��Ƕ�ˮƽ�ӳ��ǣ��ȣ�

    [Header("Zoom")]
    [Range(1, 40)] public float opticalZoom = 1f; // 1..40��Q6075-E��
    public bool linkToVerticalFov = true;         // Unity �Ǵ�ֱ FoV��true=�� 16:9 ����

    // 16:9 ���س���ȣ���Ҳ���Ըĳɸ���ʵ�� RenderTexture ��̬ȡ��
    const float aspect = 16f / 9f;

    // �á���Ƕ� HFOV + ���ࡱ�����������Ч���
    float SensorWidthFromWideEnd()
    {
        // HFOV = 2 * atan( sensorWidth / (2 * f) )
        float halfHFovRad = hFovAtMinDeg * 0.5f * Mathf.Deg2Rad;
        float sensorWidth = 2f * focalMinMm * Mathf.Tan(halfHFovRad);
        return sensorWidth; // ��λͬ���ࣨmm��
    }

    // �������࣬��ˮƽ FoV���ȣ�
    float HFovFromFocal(float focalMm, float sensorWidth)
    {
        float half = Mathf.Atan((sensorWidth * 0.5f) / focalMm);
        return 2f * half * Mathf.Rad2Deg;
    }

    // ˮƽ FoV �� ��ֱ FoV��Unity camera.fieldOfView ʹ�ô�ֱ FoV��
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
    public void SetZoomNormalized(float t) // 0..1 �� 1..40
    {
        SetZoomFactor(Mathf.Lerp(1f, 40f, Mathf.Clamp01(t)));
    }

    void ApplyZoom()
    {
        if (!previewCamera) return;

        // ���ఴ zoom ���Ա仯��f = f_min * zoom���ضϵ� f_max
        float f = Mathf.Clamp(focalMinMm * opticalZoom, focalMinMm, focalMaxMm);

        float sensorW = SensorWidthFromWideEnd();
        float hFov = HFovFromFocal(f, sensorW);      // ���� �� 65.1��..2.0��

        float vFov = linkToVerticalFov ? HFovToVFov(hFov, aspect) : hFov;
        previewCamera.fieldOfView = Mathf.Clamp(vFov, 1f, 90f);
    }
}

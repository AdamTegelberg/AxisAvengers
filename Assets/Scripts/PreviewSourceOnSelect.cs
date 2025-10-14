// PreviewSourceOnSelect.cs
using UnityEngine;
using MixedReality.Toolkit.SpatialManipulation;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(ObjectManipulator))]
public class PreviewSourceOnSelect : MonoBehaviour
{
    public Camera previewCamera;  // 拖 Entity_CamX/PreviewCam

    ObjectManipulator manip;

    void Awake()
    {
        manip = GetComponent<ObjectManipulator>();
        manip.firstSelectEntered.AddListener(OnFirstSelect);
        manip.lastSelectExited.AddListener(OnLastSelect);
        if (previewCamera) previewCamera.enabled = false; // 初始关
    }

    void OnDestroy()
    {
        if (manip)
        {
            manip.firstSelectEntered.RemoveListener(OnFirstSelect);
            manip.lastSelectExited.RemoveListener(OnLastSelect);
        }
    }

    void OnFirstSelect(SelectEnterEventArgs _)
    {
        if (previewCamera && PreviewFeedManager.I)
            PreviewFeedManager.I.SetSource(previewCamera);
    }

    void OnLastSelect(SelectExitEventArgs _)
    {
        // 松手后是否保持预览？看你需求：
        // 若想“只在抓着时预览”，则清理：
        // if (PreviewFeedManager.I) PreviewFeedManager.I.Clear();

        // 若想“松手也保持最后选择的那台”，则什么都不做。
    }
}

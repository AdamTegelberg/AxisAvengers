// PreviewSourceOnSelect.cs
using UnityEngine;
using MixedReality.Toolkit.SpatialManipulation;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(ObjectManipulator))]
public class PreviewSourceOnSelect : MonoBehaviour
{
    public Camera previewCamera;  // �� Entity_CamX/PreviewCam

    ObjectManipulator manip;

    void Awake()
    {
        manip = GetComponent<ObjectManipulator>();
        manip.firstSelectEntered.AddListener(OnFirstSelect);
        manip.lastSelectExited.AddListener(OnLastSelect);
        if (previewCamera) previewCamera.enabled = false; // ��ʼ��
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
        // ���ֺ��Ƿ񱣳�Ԥ������������
        // ���롰ֻ��ץ��ʱԤ������������
        // if (PreviewFeedManager.I) PreviewFeedManager.I.Clear();

        // ���롰����Ҳ�������ѡ�����̨������ʲô��������
    }
}

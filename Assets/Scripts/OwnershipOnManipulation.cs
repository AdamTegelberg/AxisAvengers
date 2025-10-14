// Assets/Scripts/OwnershipOnManipulation.cs
using Photon.Pun;
using UnityEngine;
using MixedReality.Toolkit.SpatialManipulation;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(PhotonView))]
[RequireComponent(typeof(ObjectManipulator))]
public class OwnershipOnManipulation : MonoBehaviour
{
    private PhotonView pv;
    private ObjectManipulator manip;

    void Awake()
    {
        pv = GetComponent<PhotonView>();
        manip = GetComponent<ObjectManipulator>();

        // MRTK3 / XRI���״α�ѡ�У���һֻ��ץס��ʱ�ص�
        manip.firstSelectEntered.AddListener(OnFirstSelectEntered);
        // �����Ҫ���ͷ�ʱ���£�Ҳ���ԣ�
        // manip.lastSelectExited.AddListener(OnLastSelectExited);
    }

    void OnDestroy()
    {
        if (manip != null)
        {
            manip.firstSelectEntered.RemoveListener(OnFirstSelectEntered);
            // manip.lastSelectExited.RemoveListener(OnLastSelectExited);
        }
    }

    private void OnFirstSelectEntered(SelectEnterEventArgs args)
    {
        if (!pv.IsMine) pv.RequestOwnership();
    }

    // ��ѡ���ͷ�ʱ�߼�
    // private void OnLastSelectExited(SelectExitEventArgs args) { }
}

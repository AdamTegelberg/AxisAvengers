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

        // MRTK3 / XRI：首次被选中（第一只手抓住）时回调
        manip.firstSelectEntered.AddListener(OnFirstSelectEntered);
        // 如果需要在释放时做事，也可以：
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

    // 可选：释放时逻辑
    // private void OnLastSelectExited(SelectExitEventArgs args) { }
}

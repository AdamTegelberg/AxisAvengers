using UnityEngine;
using Photon.Pun; // 需要已导入 PUN 2

public class NetworkedTransform : MonoBehaviourPun, IPunObservable
{
    private Vector3 targetPos;
    private Quaternion targetRot;
    private Vector3 targetScale;

    private void Awake()
    {
        targetPos = transform.position;
        targetRot = transform.rotation;
        targetScale = transform.localScale;
    }

    private void Update()
    {
        if (!photonView.IsMine)
        {
            transform.position = Vector3.Lerp(transform.position, targetPos, Time.deltaTime * 12f);
            transform.rotation = Quaternion.Slerp(transform.rotation, targetRot, Time.deltaTime * 12f);
            transform.localScale = Vector3.Lerp(transform.localScale, targetScale, Time.deltaTime * 12f);
        }
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(transform.position);
            stream.SendNext(transform.rotation);
            stream.SendNext(transform.localScale);
        }
        else
        {
            targetPos = (Vector3)stream.ReceiveNext();
            targetRot = (Quaternion)stream.ReceiveNext();
            targetScale = (Vector3)stream.ReceiveNext();
        }
    }
}

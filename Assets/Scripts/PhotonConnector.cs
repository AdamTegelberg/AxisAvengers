// Assets/Scripts/PhotonConnector.cs
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

[DisallowMultipleComponent]
public class PhotonConnector : MonoBehaviourPunCallbacks
{
    [Header("Room")]
    [SerializeField] string roomName = "Room_1";
    [SerializeField] byte maxPlayers = 8;

    void Awake()
    {
        DontDestroyOnLoad(gameObject);

        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.SendRate = 30;
        PhotonNetwork.SerializationRate = 30;

        if (string.IsNullOrEmpty(PhotonNetwork.NickName))
            PhotonNetwork.NickName = System.Environment.UserName;
    }

    void Start()
    {
        if (!PhotonNetwork.IsConnected)
            PhotonNetwork.ConnectUsingSettings();   // ʹ�� PhotonServerSettings
    }

    public override void OnConnectedToMaster()
    {
        var opts = new RoomOptions { MaxPlayers = maxPlayers };
        PhotonNetwork.JoinOrCreateRoom(roomName, opts, TypedLobby.Default);
    }

    public override void OnJoinedRoom()
    {
        Debug.Log($"[Photon] Joined room: {PhotonNetwork.CurrentRoom.Name}");
        // �����κ��Զ����ɣ��������� UI ��ťͨ�� PhotonNetwork.Instantiate ����
    }

    // ��ѡ����־����
    public override void OnJoinRoomFailed(short returnCode, string message)
        => Debug.LogWarning($"[Photon] Join failed: {returnCode} - {message}");
    public override void OnDisconnected(DisconnectCause cause)
        => Debug.LogWarning($"[Photon] Disconnected: {cause}");
}

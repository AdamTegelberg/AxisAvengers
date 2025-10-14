using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using ExitGames.Client.Photon;

public class NetworkBootstrap : MonoBehaviourPunCallbacks
{
    private static NetworkBootstrap _inst;

    [Header("Room")]
    [SerializeField] string roomName = "Room_1";
    [SerializeField] byte maxPlayers = 8;

    [Header("Prefabs (Resources)")]
    [SerializeField] string camAPrefab = "Entity_CamA";
    [SerializeField] string camBPrefab = "Entity_CamB";

    [Header("Spawn Transforms")]
    public Vector3 camAPosition = new Vector3(-0.4f, 1.1f, 1.2f);
    public Vector3 camBPosition = new Vector3(0.4f, 1.1f, 1.2f);
    public Vector3 camAEuler = new Vector3(0, 180, 0);
    public Vector3 camBEuler = new Vector3(0, 180, 0);

    const string ROOM_PROP_SPAWNED = "camsSpawned";

    void Awake()
    {
        if (_inst != null) { Destroy(gameObject); return; }
        _inst = this; DontDestroyOnLoad(gameObject);

        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.SendRate = 30;
        PhotonNetwork.SerializationRate = 30;
        PhotonNetwork.NickName = System.Environment.UserName;
    }

    void Start()
    {
        if (!PhotonNetwork.IsConnected)
            PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        var opts = new RoomOptions { MaxPlayers = maxPlayers };
        PhotonNetwork.JoinOrCreateRoom(roomName, opts, TypedLobby.Default);
    }

    public override void OnJoinedRoom()
    {
        TrySpawnIfMaster();
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        if (PhotonNetwork.IsMasterClient) TrySpawnIfMaster();
    }

    void TrySpawnIfMaster()
    {
        if (!PhotonNetwork.IsMasterClient) return;

        var props = PhotonNetwork.CurrentRoom.CustomProperties;
        if (props != null && props.ContainsKey(ROOM_PROP_SPAWNED) && (bool)props[ROOM_PROP_SPAWNED]) return;

        PhotonNetwork.Instantiate(camAPrefab, camAPosition, Quaternion.Euler(camAEuler));
        PhotonNetwork.Instantiate(camBPrefab, camBPosition, Quaternion.Euler(camBEuler)); 

        var set = new Hashtable(); set[ROOM_PROP_SPAWNED] = true;
        PhotonNetwork.CurrentRoom.SetCustomProperties(set);
    }
}

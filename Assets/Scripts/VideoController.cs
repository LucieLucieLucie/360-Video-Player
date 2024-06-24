using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class VideoController : MonoBehaviour
{
    public string[] allVideos;
    public VideoPlayer videoPlayer;

    List<UnityEngine.XR.InputDevice> inputDevices = new List<UnityEngine.XR.InputDevice>();

    private int currentVideoIndex = 0;

    private Dictionary<string, float> rotationsForVideo = new Dictionary<string, float>();

    public Transform userCamera;
    public Transform XRRig;

    public GameObject blackScreen;

    public int condition = 0;

    private bool conditionHasBeenSelected = false;

    public List<List<int>> videoSequences = new List<List<int>> {
    new List<int>{0,1,4,5},
    new List<int>{2,8,6,7},
    new List<int>{3,9,10,11},
    new List<int>{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}
    };



    void Start()
    {
        rotationsForVideo.Add("Botanical Gardens 1_20230316182651.mp4", 0);
        rotationsForVideo.Add("Art Museum 1_20230316182241.mp4", -30f);
        rotationsForVideo.Add("Birds_20230316182638.mp4", 0);
        rotationsForVideo.Add("Botanical Gardens Water 3_20230316185641.mp4", -200);
        rotationsForVideo.Add("Darling Harbour 2_20230316185707.mp4", -220);
        rotationsForVideo.Add("Hyde Park 2_20230316185752.mp4", -175);
        rotationsForVideo.Add("Luna Park 1_20230316185853.mp4", -300);
        rotationsForVideo.Add("Opera 1_20230316191413.mp4", -220);
        rotationsForVideo.Add("Park Near Opera 2_20230316191419.mp4", -240);
        rotationsForVideo.Add("Queen Victoria 2_20230316191426.mp4", -280);
        rotationsForVideo.Add("Secret Garden_20230316143022.mp4", 0);
        rotationsForVideo.Add("Water 2_20230316191452.mp4", 180);
        rotationsForVideo.Add("BerlinLustgarten_01_Video_LeftOnTop.mp4", 0);
        rotationsForVideo.Add("BerlinNeptunBrunnen_01_Video_LeftOnTop.mp4", 0);
        rotationsForVideo.Add("BerlinSeifenblasen_01_Video_LeftOnTop.mp4", 0);
        rotationsForVideo.Add("Elbphilharmonie_02_Video_LowBitrate_LeftOnTop.mp4", 0);
        rotationsForVideo.Add("Elbtunnel_01_Video_LowBitrate_LeftOnTop.mp4", 0);
        rotationsForVideo.Add("Jungfernstieg_01_Video_LowBitrate_LeftOnTop.mp4", 0);
        rotationsForVideo.Add("Landungsbrücken_01_Video_LowBitrate_LeftOnTop.mp4", 0);
        rotationsForVideo.Add("Rathaus_05_Video_LowBitrate_LeftOnTop.mp4", 0);


        UnityEngine.XR.InputDevices.GetDevices(inputDevices);

        ShuffleList(videoSequences[0]);
        ShuffleList(videoSequences[1]);
        ShuffleList(videoSequences[2]);
        ShuffleList(videoSequences[3]);
    }

    private void RotatePlayer()
    {
        float yRotation = rotationsForVideo[allVideos[(videoSequences[condition])[currentVideoIndex]]] - userCamera.localRotation.eulerAngles.y;
        XRRig.rotation = Quaternion.Euler(new Vector3(0,yRotation,0));
    }

    IEnumerator WaitForVideoToLoad()
    {
        blackScreen.SetActive(true);
        yield return new WaitForSeconds(1f);
        RotatePlayer();
        blackScreen.SetActive(false);
    }

    public void StartNextVideo()
    {
        videoPlayer.url = Application.persistentDataPath + "/videos/" + allVideos[(videoSequences[condition])[currentVideoIndex]];
        StartCoroutine(WaitForVideoToLoad());

        if (allVideos[(videoSequences[condition])[currentVideoIndex]].Equals("Hyde Park 2_20230316185752.mp4") || allVideos[(videoSequences[condition])[currentVideoIndex]].Equals("Queen Victoria 2_20230316191426.mp4"))
        {
            videoPlayer.SetDirectAudioVolume(0, 0.05f);
        }
        else
        {
            videoPlayer.SetDirectAudioVolume(0, 1f);
        }
        conditionHasBeenSelected = true;
    }

    void Update()
    {
        if ((Input.GetButtonDown("XRI_Right_PrimaryButton") || Input.GetKeyDown(KeyCode.A)) && conditionHasBeenSelected)
        {
            if (currentVideoIndex < (videoSequences[condition].Count - 1))
            {
                currentVideoIndex++;
            }
            else
            {
                currentVideoIndex = 0;
            }
            StartNextVideo();
        }
    }

    public void ShuffleList(List<int> alpha)
    {
        for (int i = 0; i < alpha.Count; i++)
        {
            int temp = alpha[i];
            int randomIndex = Random.Range(i, alpha.Count);
            alpha[i] = alpha[randomIndex];
            alpha[randomIndex] = temp;
        }
    }
}

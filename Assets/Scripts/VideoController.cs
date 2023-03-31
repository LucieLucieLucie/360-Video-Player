using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
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

       //videoPlayer.audio
        UnityEngine.XR.InputDevices.GetDevices(inputDevices);

        //ShuffleList(allVideos);
        if (allVideos.Length > 0)
        {
            videoPlayer.url = Application.persistentDataPath + "/videos/" + allVideos[currentVideoIndex];
            if(allVideos[currentVideoIndex].Equals("Hyde Park 2_20230316185752.mp4") || allVideos[currentVideoIndex].Equals("Queen Victoria 2_20230316191426.mp4"))
            {
                videoPlayer.SetDirectAudioVolume(0, 0.05f);
            }
            StartCoroutine(WaitForVideoToLoad());
        }
    }

    private void RotatePlayer()
    {
        float yRotation = rotationsForVideo[allVideos[currentVideoIndex]] - userCamera.localRotation.eulerAngles.y;
        XRRig.rotation = Quaternion.Euler(new Vector3(0,yRotation,0));
    }

    IEnumerator WaitForVideoToLoad()
    {
        blackScreen.SetActive(true);
        yield return new WaitForSeconds(1f);
        RotatePlayer();
        blackScreen.SetActive(false);
    }

    void Update()
    {
        if (Input.GetButtonDown("XRI_Right_PrimaryButton") || Input.GetKeyDown(KeyCode.A))
        {
            if (currentVideoIndex < (allVideos.Length - 1))
            {
                currentVideoIndex++;
            }
            else
            {
                currentVideoIndex = 0;
            }

            videoPlayer.url = Application.persistentDataPath + "/videos/" + allVideos[currentVideoIndex];
            StartCoroutine(WaitForVideoToLoad());

            if (allVideos[currentVideoIndex].Equals("Hyde Park 2_20230316185752.mp4") || allVideos[currentVideoIndex].Equals("Queen Victoria 2_20230316191426.mp4"))
            {
                videoPlayer.SetDirectAudioVolume(0, 0.05f);
            }
            else
            {
                videoPlayer.SetDirectAudioVolume(0, 1f);
            }
        }
    }

    public void ShuffleList(string[] alpha)
    {
        for (int i = 0; i < alpha.Length; i++)
        {
            string temp = alpha[i];
            int randomIndex = Random.Range(i, alpha.Length);
            alpha[i] = alpha[randomIndex];
            alpha[randomIndex] = temp;
        }
    }
}

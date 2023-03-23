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



    void Start()
    {
        UnityEngine.XR.InputDevices.GetDevices(inputDevices);
        ShuffleList(allVideos);
        if (allVideos.Length > 0)
        {
            videoPlayer.url = Application.persistentDataPath + "/videos/" + allVideos[currentVideoIndex];
        }
    }

    void Update()
    {
        if (Input.GetButtonDown("XRI_Right_PrimaryButton"))
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

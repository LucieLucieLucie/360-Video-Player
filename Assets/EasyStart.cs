using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EasyStart : MonoBehaviour
{
    List<UnityEngine.XR.InputDevice> inputDevices = new List<UnityEngine.XR.InputDevice>();

    int currentCondition = 3;

    public VideoController videoController;

    void Start()
    {
        UnityEngine.XR.InputDevices.GetDevices(inputDevices);
    }

    void Update()
    {
        if (Input.GetButtonDown("XRI_Right_SecondaryButton") || Input.GetKeyDown(KeyCode.B))
        {
            videoController.condition = currentCondition;
            videoController.StartNextVideo();
            gameObject.SetActive(false);
        }
    }
}

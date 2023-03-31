using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConditionSelector : MonoBehaviour
{
    List<UnityEngine.XR.InputDevice> inputDevices = new List<UnityEngine.XR.InputDevice>();
    public Image buttonA;
    public Image buttonB;
    public Image buttonC;
    int currentCondition = 0;

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
        if(Input.GetButtonDown("XRI_Right_ThumbTouch") || Input.GetKeyDown(KeyCode.D))
        {
            if(currentCondition < 2)
            {
                currentCondition++;
            }
            else
            {
                currentCondition = 0;
            }
            if(currentCondition == 0)
            {
                buttonA.color = Color.green;
                buttonB.color = Color.white;
                buttonC.color = Color.white;
            }
            else if (currentCondition == 1)
            {
                buttonA.color = Color.white;
                buttonB.color = Color.green;
                buttonC.color = Color.white;
            }
            else if (currentCondition == 2)
            {
                buttonA.color = Color.white;
                buttonB.color = Color.white;
                buttonC.color = Color.green;
            }
        }

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MySnapTurn : MonoBehaviour
{
    List<UnityEngine.XR.InputDevice> inputDevices = new List<UnityEngine.XR.InputDevice>();
    public Transform XROrigin;
    public float snapAmount = 45f;
    bool rotationBlocked = false;
    // Start is called before the first frame update
    void Start()
    {
        UnityEngine.XR.InputDevices.GetDevices(inputDevices);
    }

    // Update is called once per frame
    void Update()
    {
        if (!rotationBlocked)
        {
            if (Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") > 0.5f)
            {
                XROrigin.Rotate(0, 45, 0);
                rotationBlocked = true;
            }
            else if (Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") < -0.5f)
            {
                XROrigin.Rotate(0, -45, 0);
                rotationBlocked = true;
            }
        }
        else
        {
            if(Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") > -0.05f && Input.GetAxis("XRI_Right_Primary2DAxis_Horizontal") < 0.05f)
            {
                rotationBlocked = false;
            }
        }
    }
}

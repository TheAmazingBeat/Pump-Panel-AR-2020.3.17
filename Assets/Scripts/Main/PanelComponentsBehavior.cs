using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class PanelComponentsBehavior : MonoBehaviour
{
    #region Variables
    public GameObject mainPanel;
    public GameObject infoPanel;
    public Transform controllerTransform; //controller gameobject in scene
    public TrackedPanelComponents trackedPanel; // Stores the components of the panel.

    private bool triggerPulled = false; //Is the trigger currently pulled?
    private MLInput.Controller controller; //ML Controller
    #endregion

    #region Unity Methods
    private void Start()
    {
        controller = MLInput.GetController(MLInput.Hand.Left);
    }

    // Update is called once per frame
    void Update()
    {
        //Perform the raycast if we're pulling the trigger and the trigger isn't already pulled
        if ((controller.TriggerValue > 0.8f) && !triggerPulled)
        {
            //Get the orientation of the controller
            controllerTransform.rotation = controller.Orientation;
            // Create a raycast parameters variable
            MLRaycast.QueryParams _raycastParams = new MLRaycast.QueryParams
            {
                // Update the parameters with our controller's transform
                Position = controller.Position,
                Direction = controllerTransform.forward,
                UpVector = controllerTransform.up,
                // Provide a size of our raycasting array (1x1)
                Width = 1,
                Height = 1
            };
            // Feed our modified raycast parameters and handler to our raycast request
            MLRaycast.Raycast(_raycastParams, HandleOnReceiveRaycast);
            triggerPulled = true;
        }
        //Trigger is released, reset our bool so we can raycast again
        if ((controller.TriggerValue < 0.2f))
        {
            triggerPulled = false;
        }
    }
    #endregion

    #region Methods
    // Gets the pump panel component when trigger is pressed
    private void SelectComponent(Vector3 point, Vector3 normal)
    {
        Vector3[] componentLocations = {
            trackedPanel.PumpPanel.waterLevel.transform.position,
            trackedPanel.PumpPanel.intakePressureGauge.transform.position,
            trackedPanel.PumpPanel.dischargePressureGauge.transform.position,
            trackedPanel.PumpPanel.foamSystem.transform.position,
            trackedPanel.PumpPanel.pumpSpeedController.transform.position,
            trackedPanel.PumpPanel.masterIntakeValve.transform.position,
            trackedPanel.PumpPanel.electronicIntakeValveController.transform.position,
            trackedPanel.PumpPanel.waterValves.transform.position
        };

        float[] distances = new float[8] {0,0,0,0,0,0,0,0 };
        for(int i = 0; i < componentLocations.Length; i++)
        {
            distances[i] = Vector3.Distance(point, componentLocations[i]);
        }
        
        // Allowed offset between raycast and component
        float allowedDistance = 0.1f;

        Debug.Log($"<color=red>Raycast Point:: </color> {point}");

        bool infoPanelToggled = false;

        // When raycast is near clicked component, show info
        for (int i = 0; i < distances.Length; i++)
        {
            Debug.Log($"<color=green>{i}: {distances[i]} </color>" + $"<color=#5da8d4>{distances[i] <= allowedDistance}</color>");
            if (infoPanelToggled)
            {
                break;
            }
            else if (distances[i] <= allowedDistance)
            {
                GameObject componentInfo = infoPanel.transform.GetChild(i).gameObject;
                Debug.Log($"<color=green>Which Child:: {componentInfo.name}</color>");
                mainPanel.SetActive(false);
                infoPanel.SetActive(true);
                componentInfo.SetActive(true);
                infoPanelToggled = true;
            }
            else
            {
                mainPanel.SetActive(true);
                infoPanel.SetActive(false);
                infoPanelToggled = false;
            }
        }
    }

    // Use a callback to know when to run the NormalMaker() function.
    void HandleOnReceiveRaycast(MLRaycast.ResultState state, UnityEngine.Vector3 point, Vector3 normal, float confidence)
    {
        if (state == MLRaycast.ResultState.HitObserved)
        {
            SelectComponent(point, normal);
        }
    }
    #endregion
}

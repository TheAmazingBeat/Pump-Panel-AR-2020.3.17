using MagicLeap.Core;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

[System.Serializable]
public class PumpPanelComponents
{
    // Parts found in a Pump Panel
    public GameObject waterLevel;
    public GameObject intakePressureGauge;
    public GameObject dischargePressureGauge;
    public GameObject foamSystem;
    public GameObject pumpSpeedController;
    public GameObject masterIntakeValve;
    public GameObject electronicIntakeValveController;
    public GameObject waterValves;
    
}

[RequireComponent(typeof(MLImageTrackerBehavior))]
public class TrackedPanelComponents : MonoBehaviour
{
    #region Variables
    private bool _targetFound = false;
    private Vector3[] compOffsets = new Vector3[8];

    public MLImageTrackerBehavior _trackingBehavior = null;
    public PumpPanelComponents PumpPanel;
    #endregion

    #region Unity Methods
    void Start()
    {
        _trackingBehavior = GetComponent<MLImageTrackerBehavior>();
        _trackingBehavior.OnTargetFound += OnTargetFound;
        _trackingBehavior.OnTargetLost += OnTargetLost;
        _trackingBehavior.OnTargetUpdated += OnTargetUpdated;
    }

    void Update()
    {

    }

    private void OnDestroy()
    {
        _trackingBehavior.OnTargetFound -= OnTargetFound;
        _trackingBehavior.OnTargetLost -= OnTargetLost;
        _trackingBehavior.OnTargetUpdated -= OnTargetUpdated;
    }
    #endregion

    #region Tracking Behavior
    void OnTargetFound(MLImageTracker.Target target, MLImageTracker.Target.Result result)
    {
        _targetFound = true;
        RefreshViewMode();
    }

    void OnTargetLost(MLImageTracker.Target target, MLImageTracker.Target.Result result)
    {
        _targetFound = false;
        RefreshViewMode();
    }

    // Sets This GGameObject to Position & Rotation of Tracked Image
    void OnTargetUpdated(MLImageTracker.Target target, MLImageTracker.Target.Result result)
    {
        transform.position = result.Position;
        transform.rotation = result.Rotation;
        RefreshViewMode();
    }

    void RefreshViewMode()
    {
        // When image is found, do something
        // Show Panel components and Track Position
        if (_targetFound)
        {
            float xPos = transform.position.x;
            float yPos = transform.position.y;
            float zPos = transform.position.z;

            // Water Level Indicator
            PumpPanel.waterLevel.SetActive(true);
            Vector3 waterLevelPosition = new Vector3(-0.0525f, 0.03f, 0);
            PumpPanel.waterLevel.transform.position = new Vector3(xPos + waterLevelPosition.x, yPos + waterLevelPosition.y, zPos);

            // Intake Pressure Gauge
            PumpPanel.intakePressureGauge.SetActive(true);
            Vector3 intakePosition = new Vector3(-0.01f, 0.05f, 0);
            PumpPanel.intakePressureGauge.transform.position = new Vector3(xPos + intakePosition.x, yPos + intakePosition.y, zPos);
            
            // Discharge Pressure Gauge
            PumpPanel.dischargePressureGauge.SetActive(true);
            Vector3 dpgPosition = new Vector3(0.0075f, 0.05f, 0);
            PumpPanel.dischargePressureGauge.transform.position = new Vector3(xPos + dpgPosition.x, yPos + dpgPosition.y, zPos);

            // Foam System
            PumpPanel.foamSystem.SetActive(true);
            Vector3 foamSystemPosition = new Vector3(0.03f, 0.05f, 0f);
            PumpPanel.foamSystem.transform.position = new Vector3(xPos + foamSystemPosition.x, yPos + foamSystemPosition.y, zPos);

            // Pump Speed Controller
            PumpPanel.pumpSpeedController.SetActive(true);
            Vector3 psControllerPosition = new Vector3(-0.055f, -0.01f, 0);
            PumpPanel.pumpSpeedController.transform.position = new Vector3(xPos + psControllerPosition.x, yPos + psControllerPosition.y, zPos);

            // Master Intake Valve
            PumpPanel.masterIntakeValve.SetActive(true);
            Vector3 mivPosition = new Vector3(-0.005f, -0.02f, 0);
            PumpPanel.masterIntakeValve.transform.position = new Vector3(xPos + mivPosition.x, yPos + mivPosition.y, zPos);

            // Electronic Intake Valve Controller
            PumpPanel.electronicIntakeValveController.SetActive(true);
            Vector3 elvControllerPosition = new Vector3(0.04f, 0.02f, 0);
            PumpPanel.electronicIntakeValveController.transform.position = new Vector3(xPos + elvControllerPosition.x, yPos + elvControllerPosition.y, zPos);

            // Water Valves
            PumpPanel.waterValves.SetActive(true);
            Vector3 waterValvesPosition = new Vector3(0, 0.015f, 0);
            PumpPanel.waterValves.transform.position = new Vector3(xPos, yPos + waterValvesPosition.y, zPos);
        }
        else
        {
            PumpPanel.waterLevel.SetActive(false);
            PumpPanel.intakePressureGauge.SetActive(false);
            PumpPanel.dischargePressureGauge.SetActive(false);
            PumpPanel.foamSystem.SetActive(false);
            PumpPanel.pumpSpeedController.SetActive(false);
            PumpPanel.masterIntakeValve.SetActive(false);
            PumpPanel.electronicIntakeValveController.SetActive(false);
            PumpPanel.waterValves.SetActive(false);
        }
    }
    #endregion

}

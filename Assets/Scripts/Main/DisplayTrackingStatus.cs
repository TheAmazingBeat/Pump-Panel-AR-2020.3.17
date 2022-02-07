using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using MagicLeap.Core;
using TMPro;

[RequireComponent(typeof(MLImageTrackerBehavior))]
public class DisplayTrackingStatus : MonoBehaviour
{
    #region Variables
    public MLImageTrackerBehavior _trackingBehavior = null;
    public TextMeshProUGUI UIStatus;

    private bool _targetFound = false;
    #endregion

    #region Unity Methods
    // Start is called before the first frame update
    void Start()
    {
        _trackingBehavior = GetComponent<MLImageTrackerBehavior>();
        _trackingBehavior.OnTargetFound += OnTargetFound;
        _trackingBehavior.OnTargetLost += OnTargetLost;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnDestroy()
    {
        _trackingBehavior.OnTargetFound -= OnTargetFound;
        _trackingBehavior.OnTargetLost -= OnTargetLost;
    }
    #endregion

    #region Methods
    void OnTargetFound(MLImageTracker.Target target, MLImageTracker.Target.Result result)
    {
        _targetFound = true;
        UIStatus.SetText("Pump Panel Found");
    }

    void OnTargetLost(MLImageTracker.Target target, MLImageTracker.Target.Result result)
    {
        _targetFound = false;
        UIStatus.SetText("Looking for Pump Panel...");
    }
    #endregion
}

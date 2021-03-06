using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using MagicLeap.Core;

[RequireComponent(typeof(MLImageTrackerBehavior))]
public class TrackingVisuals : MonoBehaviour
{
    private bool _targetFound = false;
    private MLImageTrackerBehavior _trackingBehavior = null;
    public GameObject digiObject;

    // Start is called before the first frame update
    void Start()
    {
        _trackingBehavior = GetComponent<MLImageTrackerBehavior>();
        _trackingBehavior.OnTargetFound += OnTargetFound;
        _trackingBehavior.OnTargetLost += OnTargetLost;
        _trackingBehavior.OnTargetUpdated += OnTargetUpdated;

        RefreshViewMode();
    }

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

    void OnTargetUpdated(MLImageTracker.Target target, MLImageTracker.Target.Result result)
    {
        transform.position = result.Position;
        transform.rotation = result.Rotation;
    }

    void RefreshViewMode()
    {
        if (_targetFound)
        {
            digiObject.SetActive(true);
        }
        else
        {
            digiObject.SetActive(false);
        }
    }

    private void OnDestroy()
    {
        _trackingBehavior.OnTargetLost -= OnTargetLost;
        _trackingBehavior.OnTargetFound -= OnTargetFound;
        _trackingBehavior.OnTargetUpdated -= OnTargetUpdated;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

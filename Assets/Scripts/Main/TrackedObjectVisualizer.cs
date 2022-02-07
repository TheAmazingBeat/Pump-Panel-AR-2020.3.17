using MagicLeap.Core;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

[RequireComponent(typeof(MLImageTrackerBehavior))]
public class TrackedObjectVisualizer : MonoBehaviour
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

    private void OnDestroy()
    {
        _trackingBehavior.OnTargetFound -= OnTargetFound;
        _trackingBehavior.OnTargetLost -= OnTargetLost;
        _trackingBehavior.OnTargetUpdated -= OnTargetUpdated;
    }

    void RefreshViewMode()
    {
        // When image is found, do something
        if (_targetFound)
        {
            digiObject.SetActive(true);
        }
        else
        {
            digiObject.SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class DistanceBetween : MonoBehaviour
{
    public GameObject one;
    public GameObject two;
    private MLInput.Controller _controller= null;
    private Vector3 onePos;
    private Vector3 twoPos;

    // Start is called before the first frame update
    void Start()
    {
        _controller = MLInput.GetController(MLInput.Hand.Left);
        _controller.OnButtonDown += OnDown;

        onePos = one.transform.position;
        twoPos = two.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnDestroy()
    {
        _controller.OnButtonDown -= OnDown;
    }

    private void OnDown(byte controllerId, MLInput.Controller.Button button)
    {
        if (button == MLInput.Controller.Button.Bumper)
        {
            Debug.Log($"Distance between: {Vector3.Distance(onePos, twoPos)}");
        }
    }

}


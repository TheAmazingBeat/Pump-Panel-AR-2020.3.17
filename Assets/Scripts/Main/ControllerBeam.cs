using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

[RequireComponent(typeof(LineRenderer))]
public class ControllerBeam : MonoBehaviour
{
    private LineRenderer _beam = null;
    private MLInput.Controller _controller = null;
    private GameObject hitObject = null;

    // Start is called before the first frame update
    void Start()
    {
        _controller = MLInput.GetController(MLInput.Hand.Left);
        _beam = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = _controller.Position;
        transform.rotation = _controller.Orientation;

        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.forward, out hit))
        {
            _beam.enabled = true;
            _beam.useWorldSpace = true;
            _beam.SetPosition(0, transform.position);
            _beam.SetPosition(1, hit.point);

            // TODO::
            // When raycast hits interactable game objects, objects have less transparency to show hover
            if(hit.transform.gameObject.tag.Equals("Interactable"))
            {
                hitObject = hit.transform.gameObject;
                Color col = hitObject.GetComponent<Renderer>().material.color;
                col.a = 0.5f;
            }
        }
        else
        {
            _beam.enabled = false;
            _beam.useWorldSpace = false;
            _beam.SetPosition(0, transform.position);
            _beam.SetPosition(1, Vector3.forward * 5);
        }
    }
}

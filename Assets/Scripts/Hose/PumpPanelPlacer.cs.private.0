using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class PumpPanelPlacer : MonoBehaviour
{
  public GameObject pumpPanel;
  public MLInput.Controller controller;
  public GameObject MainUIPanel;
  public GameObject Fire;
  public GameObject Water;
  public GameObject controllerObj;

  private MLInput.Controller _controller;
  private bool trigger = false;
  private GameObject selectedObj;
  private Rigidbody gravity;

  // Start is called before the first frame update
  void Start()
  {
    controller = MLInput.GetController(MLInput.Hand.Left);
    MLInput.OnTriggerDown += OnTrigDown;
    MLInput.OnTriggerUp += OnTrigUp;
    pumpPanel.GetComponent<Rigidbody>().useGravity = false;
  }

  private void OnDestroy()
  {
    MLInput.OnTriggerDown -= OnTrigDown;
    MLInput.OnTriggerUp -= OnTrigUp;
  }

  // Update is called once per frame
  void Update()
  {
    if (!trigger)
    {
      RaycastHit hit;
      if (Physics.Raycast(controller.Position, transform.forward, out hit))
      {
        pumpPanel.transform.position = hit.point;
        pumpPanel.transform.rotation = controller.Orientation;
      }
    }

  }

  void OnTrigDown(byte controlId, float TriggerValue)
  {
    if (!MainUIPanel.activeSelf)
    {
      trigger = true;
      pumpPanel.GetComponent<Rigidbody>().useGravity = true;
      Fire.SetActive(true);
      Water.SetActive(true);
      controllerObj.SetActive(false);
    }

  }

  void OnTrigUp(byte controlId, float TriggerValue)
  {
    // trigger = false;
  }
}

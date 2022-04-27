using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class PumpPanelPlacer : MonoBehaviour
{
  public GameObject pumpPanel;
  public MLInput.Controller controller;
  public GameObject MainUIPanel;

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
    pumpPanel.transform.rotation = transform.rotation;
    
    if (trigger)
      pumpPanel.GetComponent<Rigidbody>().useGravity = true;
    else
      FollowCursor();
  }

  void FollowCursor()
  {
    RaycastHit hit;
    if (Physics.Raycast(controller.Position, transform.forward, out hit))
    {
      // Debug.Log(hit.point);
      pumpPanel.transform.position = hit.point;
    }
  }

  void OnTrigDown(byte controlId, float TriggerValue)
  {
    if (!MainUIPanel.activeSelf)
      trigger = true;
  }

  void OnTrigUp(byte controlId, float TriggerValue)
  {
    trigger = false;
  }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class PumpPanelPlacer : MonoBehaviour
{
  public GameObject pumpPanel;
  public GameObject mainUIPanel;
  public GameObject fire;
  public GameObject water;
  public GameObject controllerObj;

  private MLInput.Controller controller;
  private bool trigger = false;
  private GameObject selectedObj;
  private Rigidbody gravity;
  private bool placed = false;
  // private GameObject panelModel;

  // Start is called before the first frame update
  void Start()
  {
    controller = MLInput.GetController(MLInput.Hand.Left);
    MLInput.OnTriggerDown += OnTrigDown;
    MLInput.OnControllerButtonDown += OnButtonDown;

    // panelModel = pumpPanel.transform.GetChild(0).gameObject;
    pumpPanel.GetComponent<Rigidbody>().useGravity = false;
    // panelModel.GetComponent<Rigidbody>().useGravity = false;
  }

  private void OnDestroy()
  {
    MLInput.OnTriggerDown -= OnTrigDown;
    MLInput.OnControllerButtonDown -= OnButtonDown;
  }

  // Update is called once per frame
  void Update()
  {
    if (trigger)
    {
      pumpPanel.GetComponent<Rigidbody>().useGravity = true;
      // panelModel.GetComponent<Rigidbody>().useGravity = false;
    }
    else
    {
      pumpPanel.GetComponent<Rigidbody>().useGravity = false;
      // panelModel.GetComponent<Rigidbody>().useGravity = false;
      RaycastHit hit;
      if (Physics.Raycast(controller.Position, transform.forward, out hit))
      {
        pumpPanel.transform.position = hit.point;
        // pumpPanel.transform.position = hit.point + new Vector3(0, 0.5f, 0);
        // pumpPanel.transform.rotation = Quaternion.AngleAxis(transform.rotation.y, Vector3.up);
        // pumpPanel.transform.rotation = Quaternion.Euler(transform.eulerAngles.x, transform.eulerAngles.y, transform.eulerAngles.z);
        pumpPanel.transform.rotation = transform.rotation;
      }
    }
  }

  void OnTrigDown(byte controlId, float TriggerValue)
  {
    if (!mainUIPanel.activeSelf && !placed)
    {
      trigger = true;
      fire.SetActive(true);
      water.SetActive(true);
      controllerObj.SetActive(true);
      pumpPanel.GetComponent<Rigidbody>().isKinematic = true;
      // pumpPanel.transform.rotation = Quaternion.AngleAxis(0, Vector3.right);
      pumpPanel.transform.rotation = Quaternion.Euler(0, transform.eulerAngles.y, 0);
      placed = true;
    }
  }

  void OnButtonDown(byte controlId, MLInput.Controller.Button button)
  {
    if (button == MLInput.Controller.Button.HomeTap)
    {
      placed = false;
      trigger = false;
      fire.SetActive(false);
      water.SetActive(false);
      controllerObj.SetActive(false);
    }
  }
}

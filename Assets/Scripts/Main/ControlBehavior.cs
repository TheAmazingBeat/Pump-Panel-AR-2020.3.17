using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class ControlBehavior : MonoBehaviour
{
    private MLInput.Controller _controller = null;
    public GameObject mainPanel;
    public GameObject infoPanel;
    public TrackedPanelComponents panel;
    GameObject selectedObject;

    // Start is called before the first frame update
    void Start()
    {
        _controller = MLInput.GetController(MLInput.Hand.Left);
        _controller.OnButtonDown += OnButtonDown;
    }

    private void OnDestroy()
    {
        _controller.OnButtonDown -= OnButtonDown;
    }

    // Update is called once per frame
    void Update()
    {
        CheckTrigger();
    }

    void OnButtonDown(byte controller_id, MLInput.Controller.Button button)
    {
        if(button == MLInput.Controller.Button.Bumper)
        {
            if(mainPanel.activeSelf && !infoPanel.activeSelf)
            {
                mainPanel.SetActive(false);
                infoPanel.SetActive(true);
                infoPanel.transform.GetChild(0).gameObject.SetActive(true);
                infoPanel.transform.GetChild(1).gameObject.SetActive(false);
                infoPanel.transform.GetChild(2).gameObject.SetActive(false);
            }
            else if(infoPanel.activeSelf && !mainPanel.activeSelf)
            {
                infoPanel.transform.GetChild(0).gameObject.SetActive(false);
                infoPanel.transform.GetChild(1).gameObject.SetActive(true);
            }
            else
            {
                infoPanel.transform.GetChild(1).gameObject.SetActive(false);
                infoPanel.transform.GetChild(2).gameObject.SetActive(true);
            }
        }
    }

    void CheckTrigger()
    {
        // When trigger is pressed and raycast hits the component, it will display info about component
        // Components has tag "Interactable"
        if(_controller.TriggerValue > 0.2f)
        {
            RaycastHit hit;
            if(Physics.Raycast(_controller.Position, transform.forward, out hit))
            {
                Debug.Log("<color=red>" + hit.collider.gameObject + "</color>");
                Debug.Log(hit.collider.gameObject.tag);
                if (hit.collider.gameObject.tag.Equals("Interactable") || hit.transform.gameObject.tag.Equals("Interactable"))
                {
                    selectedObject = hit.collider.gameObject;
                    Debug.Log("<color=green>Interactable hit</color>");
                    if (mainPanel.activeSelf == true && infoPanel.activeSelf == false)
                    {
                        mainPanel.SetActive(false);
                        infoPanel.SetActive(true);
                    }
                }
            }
        }
    }
}

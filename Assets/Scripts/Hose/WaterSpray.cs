using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.Events;

public class WaterSpray : MonoBehaviour
{
  #region Variables
  private MLInput.Controller _controller;
  //   private bool triggerPulled = false;
  private bool safetyTrigger;
  public ParticleSystem waterParticles;
  public ParticleSystem mistParticles;
  public GameObject TwoIn_lever;
  //   public UnityEvent OnTriggerDown = new UnityEvent();
  //   public UnityEvent OnTriggerUp = new UnityEvent();
  #endregion

  #region Unity Methods
  // Start is called before the first frame update
  void Start()
  {
    safetyTrigger = true;
    _controller = MLInput.GetController(MLInput.Hand.Right);
    MLInput.OnTriggerDown += HandleOnTriggerDown;
    MLInput.OnTriggerUp += HandleOnTriggerUp;
    MLInput.OnControllerButtonDown += OnButtonDown;

    var waterEmission = waterParticles.emission;
    var mistEmission = mistParticles.emission;

    waterEmission.rateOverTime = 0;
    mistEmission.rateOverTime = 0;
    
    // toggleSpray(false, safetyTrigger);
  }

  private void OnDestroy()
  {
    MLInput.OnTriggerDown -= HandleOnTriggerDown;
    MLInput.OnTriggerUp -= HandleOnTriggerUp;
    MLInput.OnControllerButtonDown -= OnButtonDown;
  }
  #endregion

  #region Isaac's Methods
  void OnButtonDown(byte controllerId, MLInput.Controller.Button button)
  {
    if (button == MLInput.Controller.Button.Bumper && safetyTrigger)
    {
      safetyTrigger = false;
      TwoIn_lever.transform.rotation = Quaternion.Euler(TwoIn_lever.transform.rotation.eulerAngles.x, TwoIn_lever.transform.rotation.eulerAngles.y, -30);
    }
    else if (button == MLInput.Controller.Button.Bumper && !safetyTrigger)
    {
      safetyTrigger = true;
      TwoIn_lever.transform.rotation = Quaternion.Euler(TwoIn_lever.transform.rotation.eulerAngles.x, TwoIn_lever.transform.rotation.eulerAngles.y, 0);
    }
  }
  void HandleOnTriggerDown(byte controller_id, float triggerValue)
  {
    toggleSpray(true, safetyTrigger);
    // OnTriggerDown?.Invoke();
  }

  void HandleOnTriggerUp(byte controller_id, float triggerValue)
  {
    toggleSpray(false, safetyTrigger);
    // OnTriggerUp?.Invoke();
  }

  /**
   * Turns the water on and off based on controller trigger
   * @params {...} pulled is the boolean whether controller trigger is pressed
   */
  public void toggleSpray(bool pulled, bool safety)
  {
    float emissionConst = 100f;
    var waterEmission = waterParticles.emission;
    var mistEmission = mistParticles.emission;

    if (pulled && !safety)
    {
      //TODO :: dynamic rateOverTime based on triggerValue
      waterEmission.rateOverTime = emissionConst;
      mistEmission.rateOverTime = emissionConst;
    }
    else if (!pulled && !safety)
    {
      waterEmission.rateOverTime = 0;
      mistEmission.rateOverTime = 0;
    }
  }

  #endregion
}

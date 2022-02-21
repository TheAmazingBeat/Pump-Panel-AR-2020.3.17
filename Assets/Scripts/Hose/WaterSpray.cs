using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;
using UnityEngine.Events;

public class WaterSpray : MonoBehaviour
{
    #region Variables
    private MLInput.Controller _controller;
    private bool triggerPulled = false;
    public ParticleSystem waterParticles;
    public ParticleSystem mistParticles;
    public UnityEvent OnTriggerDown = new UnityEvent();
    public UnityEvent OnTriggerUp = new UnityEvent();
    #endregion

    #region Unity Methods
    // Start is called before the first frame update
    void Start()
    {
        _controller = MLInput.GetController(MLInput.Hand.Right);
        MLInput.OnTriggerDown += HandleOnTriggerDown;
        MLInput.OnTriggerUp += HandleOnTriggerUp;
        toggleSpray(triggerPulled);
    }

    private void OnDestroy()
    {
        MLInput.OnTriggerDown -= HandleOnTriggerDown;
        MLInput.OnTriggerUp -= HandleOnTriggerUp;
    }
    #endregion

    #region Isaac's Methods
    void HandleOnTriggerDown(byte controller_id, float triggerValue)
    {
        triggerPulled = true;
        OnTriggerDown?.Invoke();
    }

    void HandleOnTriggerUp(byte controller_id, float triggerValue)
    {
        triggerPulled = false;
        OnTriggerUp?.Invoke();
    }

    /**
     * Turns the water on and off based on controller trigger
     * @params {...} pulled is the boolean whether controller trigger is pressed
     */
    public void toggleSpray(bool pulled)
    {
        float emissionConst = 75f;
        var waterEmission = waterParticles.emission;
        var mistEmission = mistParticles.emission;
        if (pulled)
        {
            //TODO :: dynamic rateOverTime based on triggerValue
            waterEmission.rateOverTime = emissionConst;
            mistEmission.rateOverTime = emissionConst;
        }
        else if(!pulled)
        {
            waterEmission.rateOverTime = 0;
            mistEmission.rateOverTime = 0;
        }
    }

    #endregion
}

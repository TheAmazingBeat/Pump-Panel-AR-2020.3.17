using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.MagicLeap;
using TMPro;

namespace MagicLeap
{
    public class HoseUI : MonoBehaviour
    {
        #region Variables
        public EventSystem eventSystem;
        public Canvas userInterface;
        public GameObject mainPanel;
        public GameObject showHideButton;
        public GameObject lockButton;

        private MLHeadposeCanvasBehavior _headpose;
        private PlaceFromCamera _placeFromCamera;
        private GameObject _buttonTMP;
        private TextMeshProUGUI _buttonText;
        #endregion

        #region Methods
        // Either SHOW or HIDE the MainPanel
        public void TogglePanel()
        {
            _buttonTMP = showHideButton.transform.GetChild(0).gameObject;
            _buttonText = _buttonTMP.GetComponent<TextMeshProUGUI>();
            if (eventSystem.currentSelectedGameObject == showHideButton && mainPanel.activeSelf == true)
            {
                mainPanel.SetActive(false);
                _buttonText.SetText("Hide");
                Debug.Log("Main Panel Hidden");
            }
            else
            {
                mainPanel.SetActive(true);
                _buttonText.SetText("Show");
                Debug.Log("Main Panel Shown");
            }
        }

        // Lock the Headpose Display
        public void LockPanel()
        {
            _placeFromCamera = GetComponent<PlaceFromCamera>();
            _buttonTMP = lockButton.transform.GetChild(0).gameObject;
            _buttonText = _buttonTMP.GetComponent<TextMeshProUGUI>();
            if (eventSystem.currentSelectedGameObject == lockButton)
            {

                _headpose = userInterface.GetComponent<MLHeadposeCanvasBehavior>();
                if (_headpose.PositionLerpSpeed > 0 && _headpose.RotationLerpSpeed > 0)
                {
                    _headpose.PositionLerpSpeed = 0;
                    _headpose.RotationLerpSpeed = 0;
                    _placeFromCamera.PlaceOnUpdate = false;
                    _buttonText.SetText("Unlock");
                    Debug.Log("Main Panel Locked");
                }
                else
                {
                    _headpose.PositionLerpSpeed = 2;
                    _headpose.RotationLerpSpeed = 2;
                    _placeFromCamera.PlaceOnUpdate = true;
                    _buttonText.SetText("Lock");
                    Debug.Log("Main Panel Unlocked");
                }

            }
        }
        #endregion
    }
}


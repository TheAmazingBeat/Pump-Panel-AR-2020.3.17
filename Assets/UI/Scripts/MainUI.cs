using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.MagicLeap;
using UnityEngine.SceneManagement;
using TMPro;

namespace MagicLeap
{
    public class MainUI : MonoBehaviour
    {
        #region Variables
        public EventSystem _eventSystem;
        public Canvas _userInterface;
        public GameObject _mainPanel;
        public GameObject _infoPanel;
        public GameObject _showHideButton;
        public GameObject _lockButton;

        private MLHeadposeCanvasBehavior _headpose;
        private PlaceFromCamera _placeFromCamera;
        private GameObject _buttonTMP;
        private TextMeshProUGUI _buttonText;
        #endregion

        #region Unity Methods
        private void Start()
        {
            _mainPanel.SetActive(true);
            _infoPanel.SetActive(false);
        }
        #endregion

        #region Methods
        // Either SHOW or HIDE the MainPanel
        public void TogglePanel()
        {
            _buttonTMP = _showHideButton.transform.GetChild(0).gameObject;
            _buttonText = _buttonTMP.GetComponent<TextMeshProUGUI>();
            if (_eventSystem.currentSelectedGameObject == _showHideButton && _mainPanel.activeSelf == true)
            {
                _mainPanel.SetActive(false);
                _infoPanel.SetActive(false);
                _buttonText.SetText("Hide");
                Debug.Log("Main Panel Hidden");
            }
            else
            {
                _mainPanel.SetActive(true);
                _buttonText.SetText("Show");
                Debug.Log("Main Panel Shown");

            }
        }

        // Lock the Headpose Display
        public void LockPanel()
        {
            _placeFromCamera = GetComponent<PlaceFromCamera>();
            _buttonTMP = _lockButton.transform.GetChild(0).gameObject;
            _buttonText = _buttonTMP.GetComponent<TextMeshProUGUI>();
            if (_eventSystem.currentSelectedGameObject == _lockButton)
            {

                _headpose = _userInterface.GetComponent<MLHeadposeCanvasBehavior>();
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


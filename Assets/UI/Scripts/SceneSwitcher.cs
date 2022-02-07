using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSwitcher : MonoBehaviour
{
    public void SwitchScene(int sceneNumber)
    {
        /*
         * 0: Main Menu
         * 1: Informational Scene
         * 2: Simulation Scene
         */
        SceneManager.LoadScene(sceneNumber);
    }
}

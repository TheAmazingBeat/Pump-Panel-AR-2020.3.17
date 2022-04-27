using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneStarter : MonoBehaviour
{
  public List<GameObject> objectToDisable;
  public List<GameObject> objectToShow;

  // Start is called before the first frame update
  void Start()
  {
    Reset();
  }

  public void Reset(){
    foreach (GameObject item in objectToDisable)
    {
      item.SetActive(false);
    }
    foreach (GameObject item in objectToShow)
    {
      item.SetActive(true);
    }
  }
}

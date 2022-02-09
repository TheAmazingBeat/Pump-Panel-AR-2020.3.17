using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroySpatialMap : MonoBehaviour
{
   public GameObject meshParent;

   #region Unity Methods
   // Start is called before the first frame update

   private void OnDestroy()
   {
      foreach (Transform child in meshParent.transform)
      {
         GameObject.Destroy(child.gameObject);
      }
      Debug.Log("Removed Children of meshParent");
   }
   #endregion
}

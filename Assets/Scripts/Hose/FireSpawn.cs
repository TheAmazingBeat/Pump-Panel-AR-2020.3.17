using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireSpawn : MonoBehaviour
{
   #region Variables
   public GameObject firePrefab;
   public bool FireSpawning = true;
   public int minimumFires = 1;
   public int maximumFires = 2;
   #endregion

   #region Unity Methods
   // Start is called before the first frame update
   void Start()
   {
      if (FireSpawning)
         Place(minimumFires, maximumFires);
   }

   // Update is called once per frame
   void Update()
   {

   }
   #endregion

   #region Other Methods
   // TODO Make fire randomly spawn
   private void Place(int minFireCount, int maxFireCount)
   {
      // Random Position within world space
      Vector3 randomPosition()
      {
         float floor = -0.75f;
         return new Vector3(Random.Range(-2.0f, 2.0f), floor, Random.Range(-2.0f, 2.0f));
      }

      // Instantiate Fire Particle System prefab <fireCount> times
      int counter = 0;
      while (counter < (int)Random.Range(minFireCount, maxFireCount))
      {
         Instantiate(firePrefab, randomPosition(), Quaternion.identity);
         counter++;
      }
   }
   #endregion
}

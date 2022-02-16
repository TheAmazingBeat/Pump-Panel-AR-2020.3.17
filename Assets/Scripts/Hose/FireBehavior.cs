using System.Collections.Generic;
using UnityEngine;

public class FireBehavior : MonoBehaviour
{
   #region Variables
   public float fireHealth = 50;
   public float maxFireHealth = 50;
   public float fireRegen = 5;
   public bool IsOnFire = true;
   public int extinguishRate = 1;

   public ParticleSystem fire;
   private ParticleSystem.EmissionModule fireEmission;
   #endregion

   #region Unity Methods
   // Start is called before the first frame update
   void Start()
   {
      fire = GetComponent<ParticleSystem>();
      fireEmission = fire.emission;
      fireHealth = fireEmission.rateOverTime.constant;
   }

   private void Update()
   {
      if (fireHealth <= 0)
      {
         fire.Stop();
         fireHealth = 0;
      }
      else
      {
         // Fire regeneration
         while (fireHealth < 50)
         {
            fireHealth += fireRegen * Time.deltaTime;
            fireEmission.rateOverTime = fireHealth;
         }
      }
   }

   private void OnParticleCollision(GameObject other)
   {
      // If fire is wet, decrease fire emission
      if (other.tag == "Water")
      {
         fireHealth -= extinguishRate;
         fireEmission.rateOverTime = fireHealth;
      }
   }
   #endregion

   #region Other Methods
   private void Spread(){
      // called if collision is not water
   }
   #endregion

}

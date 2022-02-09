using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireBehavior : MonoBehaviour
{
   public float fireHealth = 50;
   public float maxFireHealth = 50;
   public float fireRegen = 5;
   public bool IsOnFire = true;

   public ParticleSystem fire;
   public List<ParticleCollisionEvent> collisionEvents;

   // Start is called before the first frame update
   void Start()
   {
      fire = GetComponent<ParticleSystem>();
      collisionEvents = new List<ParticleCollisionEvent>();
   }

   private void OnParticleCollision(GameObject other)
   {
      int numCollistionEvents = fire.GetCollisionEvents(other, collisionEvents);
      if (numCollistionEvents <= 0) return;



      Debug.Log(numCollistionEvents);
   }
}

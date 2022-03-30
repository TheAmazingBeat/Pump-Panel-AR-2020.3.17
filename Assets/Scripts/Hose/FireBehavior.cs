using System.Collections.Generic;
using UnityEngine;

public class FireBehavior : MonoBehaviour
{
  #region Variables
  public float fireHealth = 50;
  public float maxFireHealth = 50;
  public float fireRegen;
  // public bool IsOnFire = true;
  public float extinguishRate;

  public ParticleSystem fire;
  private ParticleSystem.EmissionModule fireEmission;

  public bool extinguish = false;
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
      // Destroy(gameObject);
      // TODO Instantiate smoke particles
    }

    if (extinguish)
    {
      Debug.Log("Hitting Water");
      if (fireHealth > 0)
        fireHealth -= extinguishRate;
    }
    else
    {
      // Fire Regeneration
      while (fireHealth > 0 && fireHealth < maxFireHealth)
        fireHealth += fireRegen;
    }

    fireEmission.rateOverTime = fireHealth;
  }

  private void OnParticleCollision(GameObject other)
  {
    // Debug.Log($"Collision Detected with {other.name}");
    // // If fire is wet, decrease fire emission
    // if (other.tag == "Water") extinguish = true;
    // else if (other.tag == "Flammable") Spread(other);
    // else extinguish = false;
  }
  #endregion

  #region Other Methods
  private void Spread(GameObject other)
  {
    // TODO Make clones of fire or make a large fire prefab around other
    // called if collision is not water
  }
  #endregion

}

using System.Collections.Generic;
using UnityEngine;

public class FireBehavior : MonoBehaviour
{
  #region Variables
  public float fireHealth = 50;
  public float maxFireHealth = 50;
  public float fireRegen = 0.5f;
  // public bool IsOnFire = true;
  public float extinguishRate = 2.0f;

  public ParticleSystem fire;
  private ParticleSystem.EmissionModule fireEmission;

  private bool extinguish = false;
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
      // TODO Instantiate smoke particles
    }

    Debug.Log($"Extinguishing? : {extinguish}");
    if (extinguish)
    {
      Debug.Log("Hitting Water");
      if (fireHealth > 0)
      {
        fireHealth -= extinguishRate;
        // extinguishRate += Time.deltaTime;
      }
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
    // If fire is wet, decrease fire emission
    if (other.tag == "Water") extinguish = true;
    else if (other.tag == "Flammable") Spread(other);
    else extinguish = false;
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

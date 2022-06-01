using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireSpawn : MonoBehaviour
{
  #region Variables
  public GameObject firePrefab;
  public GameObject pumppanel;
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
      float ppX = pumppanel.transform.position.x;
      float ppZ = pumppanel.transform.position.z;
      float floor = pumppanel.transform.position.y;
      return new Vector3(Random.Range(-(ppX + 0.2f), ppX + 0.2f), floor, Random.Range(-(ppZ + 0.2f), ppZ + 0.2f));
    }

    // Instantiate Fire Particle System prefab <fireCount> times
    int counter = 0;
    while (counter < (int)Random.Range(minFireCount, maxFireCount))
    {
      var fire = Instantiate(firePrefab, randomPosition(), Quaternion.identity);
      fire.transform.parent = gameObject.transform;
      counter++;
    }
  }
  #endregion
}

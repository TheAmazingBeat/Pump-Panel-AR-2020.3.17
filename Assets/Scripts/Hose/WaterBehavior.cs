using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterBehavior : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnParticleCollision(GameObject other) {
        if(other.tag == "Fire"){
            GameObject Fire = other;
            FireBehavior behavior = Fire.GetComponent<FireBehavior>();
            behavior.extinguish = true;
        }
    }
}

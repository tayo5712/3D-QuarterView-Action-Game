using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int damage;
    public bool isMelee; // 근접 공격 범위가 파괴되지 않도록 조건 추가
    public bool isRock;

    // 충돌 로직 작성
    void OnCollisionEnter(Collision collision)
    {
        if (!isRock && collision.gameObject.tag == "Floor")
        {
            Destroy(gameObject, 3);
        }
        else if (collision.gameObject.tag == "Wall")
        {
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (!isMelee)
        {
            if (other.gameObject.tag == "Enemy" || other.gameObject.tag == "Wall")
                Destroy(gameObject);
            if (other.gameObject.tag == "Floor")
                Destroy(gameObject, 3);
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int damage;
    public bool isMelee; // ���� ���� ������ �ı����� �ʵ��� ���� �߰�
    public bool isRock;

    // �浹 ���� �ۼ�
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

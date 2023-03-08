using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{   
    // ������ Ÿ�� ( Ÿ�� �̸� ���� �ʿ� )
    // enum ������ �ٰ�ȣ �ȿ� �����͸� �����ϵ��� �ۼ�
    // ������ ������ ���� ������ ���� ����
    public enum Type { Ammo, Coin, Grenade, Heart, Weapon };
    public Type type;
    public int value;

    Rigidbody rigid;
    SphereCollider sphereCollider;

    void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        sphereCollider = GetComponent<SphereCollider>();
    }
    void Update()
    {
        transform.Rotate(Vector3.down * 20 * Time.deltaTime);    
    }

    void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Floor")
        {
            rigid.isKinematic = true;
            sphereCollider.enabled = false;
        }
    }
}

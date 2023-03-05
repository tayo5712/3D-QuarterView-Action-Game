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

    void Update()
    {
        transform.Rotate(Vector3.down * 20 * Time.deltaTime);    
    }
}

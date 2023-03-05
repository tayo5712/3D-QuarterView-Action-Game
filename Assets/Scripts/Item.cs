using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{   
    // 열거형 타입 ( 타입 이름 지정 필요 )
    // enum 선언은 줄괄호 안에 데이터를 열거하듯이 작성
    // 아이템 종류와 값을 저장할 변수 선언
    public enum Type { Ammo, Coin, Grenade, Heart, Weapon };
    public Type type;
    public int value;

    void Update()
    {
        transform.Rotate(Vector3.down * 20 * Time.deltaTime);    
    }
}

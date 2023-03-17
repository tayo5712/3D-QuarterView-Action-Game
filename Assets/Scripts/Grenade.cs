using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grenade : MonoBehaviour
{
    public GameObject meshObj;
    public GameObject effectObj;
    public Rigidbody rigid;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(Explosion());
    }

    // 시간차 폭발을 위한 코루틴 구현
    IEnumerator Explosion()
    {
        yield return new WaitForSeconds(3f);
        // 물리적 속도를 모두 Vector3.zero로 초기화
        rigid.velocity = Vector3.zero;
        rigid.angularVelocity = Vector3.zero;
        meshObj.SetActive(false);
        effectObj.SetActive(true);

        // 구체 모양의 레이캐스팅 (모든 오브젝트)
        RaycastHit[] rayHits = Physics.SphereCastAll(transform.position,
            15,
            Vector3.up,
            0f,
            LayerMask.GetMask("Enemy"));

        foreach(RaycastHit hitObj in rayHits)
        {
            hitObj.transform.GetComponent<Enemy>().HitByGrenade(transform.position);
        }

        Destroy(gameObject, 5);
    }
}

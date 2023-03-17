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

    // �ð��� ������ ���� �ڷ�ƾ ����
    IEnumerator Explosion()
    {
        yield return new WaitForSeconds(3f);
        // ������ �ӵ��� ��� Vector3.zero�� �ʱ�ȭ
        rigid.velocity = Vector3.zero;
        rigid.angularVelocity = Vector3.zero;
        meshObj.SetActive(false);
        effectObj.SetActive(true);

        // ��ü ����� ����ĳ���� (��� ������Ʈ)
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

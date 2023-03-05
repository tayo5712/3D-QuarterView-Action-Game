using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public enum Type { Melee, Range };
    public Type type;
    public int damage;
    public float rate;
    public int maxAmmo;
    public int curAmmo;

    public BoxCollider meleeArea;
    public TrailRenderer trailEffect;
    // �Ѿ�, ź�� ���õ� ���� ����
    public Transform bulletPos;
    public GameObject bullet;
    public Transform bulletCasePos;
    public GameObject bulletCase;

    public void Use()
    {
        if(type == Type.Melee)
        {
            StopCoroutine("Swing");
            StartCoroutine("Swing");
        }
        else if (type == Type.Range && curAmmo > 0) // ���⿡�� Ÿ������ ������ �־� �ٸ� �ڷ�ƾ �����ϱ�
        {
            curAmmo--;
            StartCoroutine("Shot");
        }
    }

    IEnumerator Swing()
    {
        yield return new WaitForSeconds(0.1f); // 0.1�� ���
        meleeArea.enabled = true;
        trailEffect.enabled = true;

        yield return new WaitForSeconds(0.3f);
        meleeArea.enabled = false;

        yield return new WaitForSeconds(0.3f);
        trailEffect.enabled = false;
    }

    // Use() ���η�ƾ -> Swing() �����ƾ -> Use() ���η�ƾ
    // Use() ���η�ƾ + Swing() �ڷ�ƾ (Co-Op)

    IEnumerator Shot()
    {
        // #1. �Ѿ� �߻�
        // Instantiate() �Լ��� �Ѿ� �ν��Ͻ�ȭ �ϱ�
        GameObject intantBullet = Instantiate(bullet, bulletPos.position, bulletPos.rotation);
        // �ν��Ͻ�ȭ�� �Ѿ˿� �ӵ� �����ϱ�
        Rigidbody bulletRigid = intantBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 50;

        yield return null; // �� ������ ���

        // #2. ź�� ����
        GameObject intantCase = Instantiate(bulletCase, bulletCasePos.position, bulletCasePos.rotation);
        Rigidbody caseRigid = intantBullet.GetComponent<Rigidbody>();
        // �ν��Ͻ�ȭ�� ź�ǿ� ������ �� ���ϱ�
        Vector3 caseVec = bulletCasePos.forward * Random.Range(-3, -2) + Vector3.up * Random.Range(2, 3);
        caseRigid.AddForce(caseVec, ForceMode.Impulse);
        caseRigid.AddTorque(Vector3.up * 10, ForceMode.Impulse);
    }

}

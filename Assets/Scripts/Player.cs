using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed;
    // �÷��̾��� ������� �迭 �Լ� 2�� ����
    public GameObject[] weapons;
    public bool[] hasWeapons;
    public GameObject[] grenades;
    public int hasGrenades;
    // �÷��̾ ����ī�޶� ������ ����� �Ҵ��ϱ�
    public Camera followCamera;

    public int ammo;
    public int coin;
    public int health;
    
    float hAxis;
    float vAxis;

    bool wDown;
    bool jDown;
    bool fDown;
    bool rDown;
    bool iDown;
    bool sDown1;
    bool sDown2;
    bool sDown3;

    bool isJump;
    bool isDodge;
    bool isSwap; // ��ü �ð����� ���� �÷��� ���� �ۼ�
    bool isFireReady = true;
    bool isReload;

    Vector3 moveVec;
    Vector3 dodgeVec;

    Animator anim;
    Rigidbody rigid;

    // Ʈ���� �� �������� �����ϱ� ���� ���� ����
    GameObject nearObject;
    // ������ ������ ���⸦ �����ϴ� ������ �����ϰ� Ȱ���ϱ�
    Weapon equipWeapon;
    int equipWeaponIndex = -1;
    float fireDelay;


    void Awake()
    {
        anim = GetComponentInChildren<Animator>();
        rigid = GetComponent<Rigidbody>();
        // ���� ȿ���� ���� Rigidbody ���� ���� ��, �ʱ�ȭ
    }

    void Start()
    {
        // anim = GetComponentInChildren<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        GetInput();
        Move();
        Turn();
        Jump();
        Attack();
        Reload();
        Dodge();
        Interaction();
        Swap(); // ���� ��ü �Լ�

    }

    void GetInput()
    {
        hAxis = Input.GetAxisRaw("Horizontal");
        vAxis = Input.GetAxisRaw("Vertical");
        wDown = Input.GetButton("Walk");
        // Ű���� ������ �� GetButton()�Լ� ���
        jDown = Input.GetButtonDown("Jump");
        // Ű���带 ���� ������ GetButtonDown
        fDown = Input.GetButton("Fire1");
        rDown = Input.GetButtonDown("Reload");

        iDown = Input.GetButtonDown("Interaction");
        sDown1 = Input.GetButtonDown("Swap1");
        sDown2 = Input.GetButtonDown("Swap2");
        sDown3 = Input.GetButtonDown("Swap3");


    }

    void Move()
    {
        moveVec = new Vector3(hAxis, 0, vAxis).normalized;

        if (isDodge) // ȸ�� �߿��� ������ ���� -> ȸ�ǹ��� ���ͷ� �ٲ�� ����
            moveVec = dodgeVec;

        if (isSwap || isReload || !isFireReady) // ���� ���̰ų� ���� �߿��� ��������
        {
            moveVec = Vector3.zero;
        }

        transform.position += moveVec * speed * (wDown ? 0.3f : 1f) * Time.deltaTime;

        anim.SetBool("isRun", moveVec != Vector3.zero);
        anim.SetBool("isWalk", wDown);
    }

    void Turn()
    {
        // �츮�� ���ư��� �������� �ٶ󺻴�.
        // #1. Ű���忡 ���� ȸ��
        transform.LookAt(transform.position + moveVec);

        // #2. ���콺�� ���� ȸ��
        // ���콺�� Ŭ�� ���� ���� ȸ���ϵ��� ���� �߰�
        if (fDown)
        {
            // ScreenPointToRay() : ��ũ������ ����� Ray�� ��� �Լ�
            Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
            // RaycastHit ������ ������ ���� �߰�
            RaycastHit rayHit;
            // out : returnó�� ��ȯ���� �־��� ������ �����ϴ� Ű����
            if (Physics.Raycast(ray, out rayHit, 100))
            {
                // RayCastHit�� ���콺 Ŭ�� ��ġ Ȱ���Ͽ� ȸ���� ����
                Vector3 nextVec = rayHit.point - transform.position;
                // RayCastHit�� ���̴� �����ϵ��� Y�� ���� 0���� �ʱ�ȭ
                nextVec.y = 0;
                transform.LookAt(transform.position + nextVec);
            }
        }
    }

    void Jump()
    {   
        // ����Ű�� ������, �������� �ʰ�, ���� ���� �ƴ� ��, ȸ�� ���� �ƴ� ��, ���� ���� �ƴ� ��
        if (jDown && moveVec == Vector3.zero && !isJump && !isDodge && !isSwap)
        {
            rigid.AddForce(Vector3.up * 15, ForceMode.Impulse);
            anim.SetBool("isJump", true);
            anim.SetTrigger("doJump");
            isJump = true;
        }
    }

    void Attack()
    {
        if (equipWeapon == null)
            return;

        fireDelay += Time.deltaTime;
        isFireReady = equipWeapon.rate < fireDelay;

        if (fDown && isFireReady && !isDodge && !isSwap && !isReload)
        {
            // ������ �����Ǹ� ���⿡ �ִ� �Լ� ����
            equipWeapon.Use();
            anim.SetTrigger(
                equipWeapon.type == Weapon.Type.Melee ? "doSwing" : "doShot"
                );
            fireDelay = 0;  // ���ݵ����̴� 0���� ������ ���� ���ݱ��� ��ٸ����� �ۼ�
        }
    }

    void Reload()
    {
        // ���� ���� ���� ���Ⱑ ���ų� ���������̰ų� ���� �Ѿ��� ������ ����
        if (equipWeapon == null || equipWeapon.type == Weapon.Type.Melee || ammo == 0)
        {
            return;
        }
        if (rDown && !isJump && !isDodge && !isSwap && isFireReady)
        {
            isReload = true;
            anim.SetTrigger("doReload");
            // �ִϸ����� Ʈ���� ȣ��� �÷��׺��� ��ȭ �ۼ�
            Invoke("ReloadOut", 1f);
        }
    }

    void ReloadOut()
    {
        int reAmmo = ammo < equipWeapon.maxAmmo ? ammo : equipWeapon.maxAmmo;
        equipWeapon.curAmmo = reAmmo;
        ammo -= reAmmo;
        isReload = false;
    }

    void Dodge()
    {   
        // ����Ű�� ������, �����̰� ���� ��, ���� ���� �ƴ� ��, ȸ�� ���� �ƴ� ��, ���� ���� �ƴ� ��
        if (jDown && moveVec != Vector3.zero && !isJump && !isDodge && !isSwap)
        {
            // ȸ�� ���� ������ȯ�� ���� �ʵ��� ȸ�ǹ��� Vector3 �߰�
            dodgeVec = moveVec;
            speed *= 2;
            anim.SetTrigger("doDodge");
            isDodge = true;
            // Invoke() �Լ��� �ð��� �Լ� ȣ��
            Invoke("DodgeOut", 0.5f);


        }
    }

    void DodgeOut()
    {
        speed *= 0.5f;
        isDodge = false;
    }

    void SwapOut()
    {
        isSwap = false;
    }

    void Swap()
    {
        if (!isSwap)
        {
            // ���� �ߺ� ��ü, ���� ���� Ȯ���� ���� ���� �߰�
            if (sDown1 && (!hasWeapons[0] || equipWeaponIndex == 0))
                return;
            if (sDown2 && (!hasWeapons[1] || equipWeaponIndex == 1))
                return;
            if (sDown3 && (!hasWeapons[2] || equipWeaponIndex == 2))
                return;

            //   ����Ű�� �´� ���⸦ �迭���� Ȱ��ȭ�ϱ�
            int weaponIndex = -1;
            if (sDown1) weaponIndex = 0;
            if (sDown2) weaponIndex = 1;
            if (sDown3) weaponIndex = 2;

            if ((sDown1 || sDown2 || sDown3) && !isJump && !isDodge)
            {
                if (equipWeapon != null) // �� ���� ���
                {
                    equipWeapon.gameObject.SetActive(false);
                }
                equipWeaponIndex = weaponIndex;
                equipWeapon = weapons[weaponIndex].GetComponent<Weapon>();
                equipWeapon.gameObject.SetActive(true);

                anim.SetTrigger("doSwap");

                isSwap = true;
                Invoke("SwapOut", 0.4f);
            }
        }

        
    }



    void Interaction()
    {
        if (iDown && nearObject != null && !isJump && !isDodge)
        {
            if (nearObject.tag == "Weapon")
            {
                Item item = nearObject.GetComponent<Item>();
                int weaponIndex = item.value;
                hasWeapons[weaponIndex] = true;

                Destroy(nearObject);
            }
        }
    }


    // OnCollisionEnter() �̺�Ʈ �Լ��� ���� ����
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Floor")
        {
            anim.SetBool("isJump", false);
            isJump = false;
        }
    }

    void OnTriggerStay(Collider other)
    {
        if (other.tag == "Weapon")
        {
            nearObject = other.gameObject;
        }
    }


    void OnTriggerExit(Collider other)
    {
        if (other.tag == "Weapon")
        {
            nearObject = null;
        }

    }
}

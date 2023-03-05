using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed;
    // 플레이어의 무기관련 배열 함수 2개 선언
    public GameObject[] weapons;
    public bool[] hasWeapons;
    public GameObject[] grenades;
    public int hasGrenades;
    // 플레이어에 메인카메라 변수를 만들고 할당하기
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
    bool isSwap; // 교체 시간차를 위한 플래그 로직 작성
    bool isFireReady = true;
    bool isReload;

    Vector3 moveVec;
    Vector3 dodgeVec;

    Animator anim;
    Rigidbody rigid;

    // 트리거 된 아이템을 저장하기 위한 변수 선언
    GameObject nearObject;
    // 기존에 장착된 무기를 저장하는 변수를 선언하고 활용하기
    Weapon equipWeapon;
    int equipWeaponIndex = -1;
    float fireDelay;


    void Awake()
    {
        anim = GetComponentInChildren<Animator>();
        rigid = GetComponent<Rigidbody>();
        // 물리 효과를 위해 Rigidbody 변수 선언 후, 초기화
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
        Swap(); // 무기 교체 함수

    }

    void GetInput()
    {
        hAxis = Input.GetAxisRaw("Horizontal");
        vAxis = Input.GetAxisRaw("Vertical");
        wDown = Input.GetButton("Walk");
        // 키보드 누르는 중 GetButton()함수 사용
        jDown = Input.GetButtonDown("Jump");
        // 키보드를 누른 순간만 GetButtonDown
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

        if (isDodge) // 회피 중에는 움직임 벡터 -> 회피방향 벡터로 바뀌도록 구현
            moveVec = dodgeVec;

        if (isSwap || isReload || !isFireReady) // 스왑 중이거나 스윙 중에는 못움직임
        {
            moveVec = Vector3.zero;
        }

        transform.position += moveVec * speed * (wDown ? 0.3f : 1f) * Time.deltaTime;

        anim.SetBool("isRun", moveVec != Vector3.zero);
        anim.SetBool("isWalk", wDown);
    }

    void Turn()
    {
        // 우리가 나아가는 방향으로 바라본다.
        // #1. 키보드에 의한 회전
        transform.LookAt(transform.position + moveVec);

        // #2. 마우스에 의한 회전
        // 마우스를 클릭 했을 때만 회전하도록 조건 추가
        if (fDown)
        {
            // ScreenPointToRay() : 스크린에서 월드로 Ray를 쏘는 함수
            Ray ray = followCamera.ScreenPointToRay(Input.mousePosition);
            // RaycastHit 정보를 저장할 변수 추가
            RaycastHit rayHit;
            // out : return처럼 반환값을 주어진 변수에 저장하는 키워드
            if (Physics.Raycast(ray, out rayHit, 100))
            {
                // RayCastHit의 마우스 클릭 위치 활용하여 회전을 구현
                Vector3 nextVec = rayHit.point - transform.position;
                // RayCastHit의 높이는 무시하도록 Y축 값을 0으로 초기화
                nextVec.y = 0;
                transform.LookAt(transform.position + nextVec);
            }
        }
    }

    void Jump()
    {   
        // 점프키를 누르고, 움직이지 않고, 점프 중이 아닐 때, 회피 중이 아닐 때, 스왑 중이 아닐 때
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
            // 조건이 충족되면 무기에 있는 함수 실행
            equipWeapon.Use();
            anim.SetTrigger(
                equipWeapon.type == Weapon.Type.Melee ? "doSwing" : "doShot"
                );
            fireDelay = 0;  // 공격딜레이는 0으로 돌려서 다음 공격까지 기다리도록 작성
        }
    }

    void Reload()
    {
        // 현재 장착 중인 무기가 없거나 근접무기이거나 남은 총알이 없으면 리턴
        if (equipWeapon == null || equipWeapon.type == Weapon.Type.Melee || ammo == 0)
        {
            return;
        }
        if (rDown && !isJump && !isDodge && !isSwap && isFireReady)
        {
            isReload = true;
            anim.SetTrigger("doReload");
            // 애니메이터 트리거 호출과 플래그변수 변화 작성
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
        // 점프키를 누르고, 움직이고 있을 때, 점프 중이 아닐 때, 회피 중이 아닐 때, 스왑 중이 아닐 떄
        if (jDown && moveVec != Vector3.zero && !isJump && !isDodge && !isSwap)
        {
            // 회피 도중 방향전환이 되지 않도록 회피방향 Vector3 추가
            dodgeVec = moveVec;
            speed *= 2;
            anim.SetTrigger("doDodge");
            isDodge = true;
            // Invoke() 함수로 시간차 함수 호출
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
            // 무기 중복 교체, 없는 무기 확인을 위한 조건 추가
            if (sDown1 && (!hasWeapons[0] || equipWeaponIndex == 0))
                return;
            if (sDown2 && (!hasWeapons[1] || equipWeaponIndex == 1))
                return;
            if (sDown3 && (!hasWeapons[2] || equipWeaponIndex == 2))
                return;

            //   단축키에 맞는 무기를 배열에서 활성화하기
            int weaponIndex = -1;
            if (sDown1) weaponIndex = 0;
            if (sDown2) weaponIndex = 1;
            if (sDown3) weaponIndex = 2;

            if ((sDown1 || sDown2 || sDown3) && !isJump && !isDodge)
            {
                if (equipWeapon != null) // 빈 손일 경우
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


    // OnCollisionEnter() 이벤트 함수로 착지 구현
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

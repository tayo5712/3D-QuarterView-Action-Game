using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Orbit : MonoBehaviour
{
    public Transform target; // 공전 중심
    public float orbitSpeed; // 공전 속도
    Vector3 offSet; // 목표와의 거리
    // Start is called before the first frame update
    void Start()
    {
        offSet = transform.position - target.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = target.position + offSet;
        transform.RotateAround(target.position, Vector3.up, orbitSpeed * Time.deltaTime);
        offSet = transform.position - target.position; // RotateAround() 후의 위치를 가지고 목표와의 거리를 유지
    }
}

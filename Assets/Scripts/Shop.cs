using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    // UI, 애니메이터, 플레이어를 담을 변수 생성
    public RectTransform uiGroup;
    public Animator anim;

    // 각 버튼에 따른 아이템프리펩, 가격, 위치 배열 변수 생성
    public GameObject[] itemObj;
    public int[] itemPrice;
    public Transform[] itemPos;
    public string[] talkData;
    public Text talkText;

    Player enterPlayer;

    public void Enter(Player player) // 입장
    {
        enterPlayer = player;
        uiGroup.anchoredPosition = Vector3.zero; // 화면 중앙에 ui 위치 시키기
    }

    // Update is called once per frame
    public void Exit() // 퇴장
    {
        anim.SetTrigger("doHello");
        uiGroup.anchoredPosition = Vector3.down * 1000; // 퇴장 시, ui 위치 밑으로 내리기.
    }

    public void Buy(int index)
    {
        int price = itemPrice[index];
        if (price > enterPlayer.coin)
        {
            StopCoroutine(Talk()); // 사용자가 계속 누를 경우 꼬일 수 있기 때문에 먼저 끄고 다시 실행.
            StartCoroutine(Talk());
            return;
        }
        enterPlayer.coin -= price;
        Vector3 ranVec = Vector3.right * Random.Range(-3, 3) + Vector3.forward * Random.Range(-3, 3);
        Instantiate(itemObj[index], itemPos[index].position + ranVec, itemPos[index].rotation);
    }

    IEnumerator Talk()
    {
        talkText.text = talkData[1];
        yield return new WaitForSeconds(2f);
        talkText.text = talkData[0];
    }
}

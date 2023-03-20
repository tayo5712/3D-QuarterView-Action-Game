using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    // UI, �ִϸ�����, �÷��̾ ���� ���� ����
    public RectTransform uiGroup;
    public Animator anim;

    // �� ��ư�� ���� ������������, ����, ��ġ �迭 ���� ����
    public GameObject[] itemObj;
    public int[] itemPrice;
    public Transform[] itemPos;
    public string[] talkData;
    public Text talkText;

    Player enterPlayer;

    public void Enter(Player player) // ����
    {
        enterPlayer = player;
        uiGroup.anchoredPosition = Vector3.zero; // ȭ�� �߾ӿ� ui ��ġ ��Ű��
    }

    // Update is called once per frame
    public void Exit() // ����
    {
        anim.SetTrigger("doHello");
        uiGroup.anchoredPosition = Vector3.down * 1000; // ���� ��, ui ��ġ ������ ������.
    }

    public void Buy(int index)
    {
        int price = itemPrice[index];
        if (price > enterPlayer.coin)
        {
            StopCoroutine(Talk()); // ����ڰ� ��� ���� ��� ���� �� �ֱ� ������ ���� ���� �ٽ� ����.
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
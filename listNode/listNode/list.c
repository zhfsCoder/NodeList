#include "list.h"


//�������е����ݴ�ӡ����
void PrintList(pNODE pHead)
{
	pNODE pMove = pHead;
	printf("�����е������ǣ�\n");
	while(NULL != pMove->next)
	{
		pMove = pMove->next;
		printf("%d --> ", pMove->data);
		
	}
	printf("\n");
}


//����һ���µ�����
pNODE CreateList(void)
{
	pNODE pHead;
	pHead = (pNODE)malloc(sizeof(NODE));
	if(NULL == pHead)
	{
		printf("�ڴ����ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}
	else 
	{
		pHead->data = NULL;
		pHead->next = NULL;
	}
	return pHead;
}

//ʹ��ͷ�巨����������
pNODE HeadInsertNode(pNODE pHead, int data)
{
	pNODE pMove = pHead;
	pNODE pNew = (pNODE)malloc(sizeof(NODE));
	if(NULL == pNew)
	{
		printf("�ڴ����ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}
	else
	{
		pNew->data = data;
		pNew->next = pMove->next;
		pMove->next = pNew;
	}
}

//��ͷ����ʼɾ������
pNODE HeadDelNode(pNODE pHead)
{
	pNODE pBefDel = pHead;
	pNODE pDel;

	if(NULL == pBefDel->next)
	{
		printf("����Ϊ��!");
		return ;
	}
	else
	{
		pDel = pBefDel->next;
		pBefDel->next = pDel->next;
		free(pDel);
	}
}

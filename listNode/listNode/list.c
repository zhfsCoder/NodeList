#include "list.h"


pNODE CreateNewNode()
{
	pNODE pNew = (pNODE)malloc(sizeof(NODE));
	if(NULL == pNew)
	{
		printf("�ڴ����ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}
	return pNew;
}

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

//��ָ��λ�ò���ָ������
pNODE LocalInsertNode(pNODE pHead, int locNum, int data)
{
	int countNum = 0;
	pNODE pMove = pHead;
	pNODE pNew;
	while(NULL != pMove)
	{
		if(locNum == countNum+1)
		{
			pNew = CreateNewNode();
			//pNew = (pNODE)malloc(sizeof(NODE));
			/*if(NULL == pNew)
			{
				printf("�ڴ����ʧ�ܣ�");
				exit(EXIT_FAILURE);
			}*/
			if(pNew)
			{
				pNew->data = data;
				pNew->next = pMove->next;
				pMove->next = pNew;
			}
			
			
			return;
		}

		pMove = pMove->next;
		countNum++;
	}
	if(countNum < locNum || locNum <= 0)
	{
		printf("����λ�ò����ڣ�\n");
	}
}

//��ָ��λ��ɾ������
pNODE LocalDelNode(pNODE pHead, int locNum)
{
	int countNum = 0;
	pNODE pMove = pHead;
	pNODE pNew, pBefDel, pDel;
	
	if(NULL == pMove)
	{
		printf("����Ϊ�գ�");
	}
	
	while(NULL != pMove)
	{
		if(countNum+1 == locNum)
		{
			pBefDel = pMove;
			if(NULL == pBefDel->next)
			{
				printf("Ҫɾ����λ��Ϊ�գ�\n");
			}
			else
			{
				pDel = pBefDel->next;
				pBefDel->next = pDel->next;
				free(pDel);
			}
		}
		pMove = pMove->next;
		countNum++;
	}
		if(countNum < locNum || locNum <= 0)
	{
		printf("ɾ��λ�ò����ڣ�\n");
	}
}
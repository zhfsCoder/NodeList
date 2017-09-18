#include "list.h"


pNODE CreateNewNode()
{
	pNODE pNew = (pNODE)malloc(sizeof(NODE));
	if(NULL == pNew)
	{
		printf("内存分配失败！");
		exit(EXIT_FAILURE);
	}
	return pNew;
}

//将链表中的数据打印出来
void PrintList(pNODE pHead)
{
	pNODE pMove = pHead;
	printf("链表中的数据是：\n");
	while(NULL != pMove->next)
	{
		pMove = pMove->next;
		printf("%d --> ", pMove->data);
		
	}
	printf("\n");
}


//创建一个新的链表
pNODE CreateList(void)
{
	pNODE pHead;
	pHead = (pNODE)malloc(sizeof(NODE));
	if(NULL == pHead)
	{
		printf("内存分配失败！");
		exit(EXIT_FAILURE);
	}
	else 
	{
		pHead->data = NULL;
		pHead->next = NULL;
	}
	return pHead;
}

//使用头插法插入新数据
pNODE HeadInsertNode(pNODE pHead, int data)
{
	pNODE pMove = pHead;
	pNODE pNew = (pNODE)malloc(sizeof(NODE));
	if(NULL == pNew)
	{
		printf("内存分配失败！");
		exit(EXIT_FAILURE);
	}
	else
	{
		pNew->data = data;
		pNew->next = pMove->next;
		pMove->next = pNew;
	}
}

//从头部开始删除数据
pNODE HeadDelNode(pNODE pHead)
{
	pNODE pBefDel = pHead;
	pNODE pDel;

	if(NULL == pBefDel->next)
	{
		printf("链表为空!");
		return ;
	}
	else
	{
		pDel = pBefDel->next;
		pBefDel->next = pDel->next;
		free(pDel);
	}
}

//在指定位置插入指定数据
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
				printf("内存分配失败！");
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
		printf("插入位置不存在！\n");
	}
}

//从指定位置删除数据
pNODE LocalDelNode(pNODE pHead, int locNum)
{
	int countNum = 0;
	pNODE pMove = pHead;
	pNODE pNew, pBefDel, pDel;
	
	if(NULL == pMove)
	{
		printf("链表为空！");
	}
	
	while(NULL != pMove)
	{
		if(countNum+1 == locNum)
		{
			pBefDel = pMove;
			if(NULL == pBefDel->next)
			{
				printf("要删除的位置为空！\n");
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
		printf("删除位置不存在！\n");
	}
}
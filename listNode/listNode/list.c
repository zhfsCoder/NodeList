#include "list.h"


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

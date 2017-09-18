#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *pNODE;

void PrintList(pNODE pHead);
pNODE CreateList(void);
pNODE HeadInsertNode(pNODE pHead, int data);
pNODE HeadDelNode(pNODE pHead);
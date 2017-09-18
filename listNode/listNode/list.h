#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node
{
	int data;
	struct Node *next;
}NODE, *pNODE;


void PrintList(pNODE pHead);
pNODE CreateNewNode();

pNODE CreateList(void);
pNODE HeadInsertNode(pNODE pHead, int data);
pNODE HeadDelNode(pNODE pHead);
pNODE LocalInsertNode(pNODE pHead, int locNum, int data);
pNODE LocalDelNode(pNODE pHead, int locNum);
pNODE SearchList(pNODE pHead, int locNum);
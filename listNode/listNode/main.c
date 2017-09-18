#include "list.h"

int main()
{
	pNODE p = CreateList();
	//PrintList(p);
	HeadInsertNode(p, 3);
	HeadInsertNode(p, 4);
	HeadInsertNode(p, 5);
	HeadInsertNode(p, 6);
	HeadInsertNode(p, 7);
	HeadInsertNode(p, 8);
	HeadInsertNode(p, 9);
	HeadInsertNode(p, 10);
	HeadInsertNode(p, 11);
	PrintList(p);
	HeadDelNode(p);
	PrintList(p);
	LocalInsertNode(p, 1, 100);
	PrintList(p);
	LocalDelNode(p, 0);
	PrintList(p);

	getchar();
	return 0;
}
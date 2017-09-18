#include "list.h"

int main()
{
	pNODE p = CreateList();
	PrintList(p);
	HeadInsertNode(p, 3);
	HeadInsertNode(p, 4);
	HeadInsertNode(p, 5);
	HeadInsertNode(p, 6);
	HeadInsertNode(p, 7);
	PrintList(p);
	HeadDelNode(p);
	PrintList(p);

	getchar();
	return 0;
}
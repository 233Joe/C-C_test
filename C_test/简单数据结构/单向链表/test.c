#include "SList.h"
#include "SList.c"

int main()
{
	SListNode* head = NULL;
	int i = 0;
	for(i=1; i<=5; i++)
	{
		SListPushBack(&head, i);
	}
	SListPrint(head);
	SListPuphBack(&head);
	SListPrint(head);
	SListPrint(SListCheck(head, 2));

	return 0;
}

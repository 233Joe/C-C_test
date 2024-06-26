#include "SList.h"
#include "SList.c"

int main()
{
	SListNode* head = NULL;
	int i = 0;
	for(i=1; i<=10; i++)
	{
		SListPushBack(&head, i);
	}
	SListPrint(head);
	SListPuphBack(&head);
	SListPrint(head);
	SListPrint(SListCheck(head, 2));

	SListPushFront(&head, 100);
	SListPrint(head);
	SListPuphFront(&head);
	SListPrint(head);
	
	SListPushInsert(&head, 11, 2);
	SListPrint(head);
	SListPupErase(&head, 2);
	SListPrint(head);
	
	SListPrint(SListInverse1(&head));
	SListPrint(head);
	SListPrint(SListInverse2(&head));
	SListPrint(head);
	return 0;
}

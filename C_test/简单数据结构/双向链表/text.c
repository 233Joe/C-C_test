#include "List.h"
#include "List.c"

int main()
{
	ListNode* head = ListInit();
	ListNode* newhead = head;
	ListPushBack(head, 1);
	ListPushBack(head, 2);
	ListPushBack(head, 3);
	ListPushBack(head, 4);
	
	head = head->prev;
	while(head->data > 0)
	{
		printf("%d ", head->data);
		head = head->prev;
	}
	ListPopBack(head);
	ListPopBack(head);
//	ListPopBack(head);
//	ListPopBack(head);
//	ListPopBack(head);

	head = newhead;
	printf("\n");
	while(head->data > 0)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	head = newhead;
	ListPushuFrnot(head, 6);
	ListPushuFrnot(head, 7);
	ListPushuFrnot(head, 8);
	ListPushuFrnot(head, 9);
	ListPushuFrnot(head, 10);
	printf("\n");
	int i = 10;
	while(i>0)
	{
		printf("%d ", head->data);
		head = head->next;
		i--;
	}
	printf("\n");
	head = newhead;
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);

	i = 6;
	while(i>=0)
	{
		printf("%d ", head->data);
		head = head->next;
		i--;
	}
	head = newhead;
	return 0;
} 

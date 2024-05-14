#include "List.h"

ListNode* ListInit()
{
	ListNode* head = ListSpace(0);
	head->next = head;
	head->prev = head;
	return head;
}

ListNode* ListSpace(int data)
{
	ListNode* phead = (ListNode*)malloc(sizeof(ListNode));
	phead->next = NULL;
	phead->prev = NULL;
	phead->data = data;
	return phead;
}

void ListPushBack(ListNode* phead, int data)
{
	if(!phead)
		return ;

	ListNode* newtail = ListSpace(data); // 1 2 3   4 // 1 3
	ListNode* pheadprev = NULL;
	
	pheadprev = phead->prev;
	phead->prev = newtail;
	newtail->next = phead;
	newtail->prev = pheadprev;
	pheadprev->next = newtail;
}

void ListPopBack(ListNode* phead)
{
	if(!phead || phead->next == phead)
		return ;
	
	ListNode* tail = phead->prev->prev;//0 1 1 1   1
	free(tail->next);
	tail->next = phead;
	phead->prev = tail;
}

void ListPushuFrnot(ListNode* phead, int data)
{
	if(!phead)
		return ;
	ListNode* newhead = ListSpace(data);
	ListNode* headnext = phead->next;
	newhead->next = headnext;
	newhead->prev = phead;
	phead->next = newhead;
	headnext->prev = newhead;
}

void ListPopFront(ListNode* phead)
{
	if(!phead || phead->next == phead)//0 1 1 1   1 1
		return ;
	
	ListNode* usedhead = phead->next;
	ListNode* newhead = usedhead->next;
	phead->next = newhead;
	newhead->prev = phead;
	free(usedhead);
}

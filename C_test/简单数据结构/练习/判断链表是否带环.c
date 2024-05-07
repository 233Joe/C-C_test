#include<stdio.h>
#include<stdlib.h>

typedef struct SListNode 
{
	int data;
	struct SListNode* next;
}SListNode;


void SListTail(SListNode** tail)//找到链表的最后一个
{
	while((*tail)->next != NULL)
	{
		*tail = (*tail)->next;
	}
}


void SListPushBack(SListNode** ppNode, int val)//尾插入
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if(newNode == NULL)
	{
		return;
	}
	if(*ppNode == NULL)
	{
		*ppNode = newNode;
	}
	else
	{
		SListNode* tail = *ppNode;
		SListTail(&tail);
		tail->next = newNode;
	}
	newNode->data = val;
	newNode->next = NULL;
}


int main()
{
	SListNode* head = NULL;
	int i = 0;
	for(i=1; i<=10; i++)
	{
		SListPushBack(&head, i);
	}
	
	SListNode* lookup = head;
	while(lookup->data != 3)
	{
		lookup = lookup->next;
	}
	SListNode* tail = head;
	SListTail(&tail);
	tail->next = lookup;

	SListNode* fast = head;
	SListNode* slow = head;
	while(fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		
		if(fast == slow)
			break;
	}
	if(fast == slow)
		printf("这个链表带环");
	else
		printf("这个链表不带环");
	return 0;
}

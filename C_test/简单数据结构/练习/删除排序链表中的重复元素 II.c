#include<stdio.h>
#include<stdlib.h>

typedef struct SListNode 
{
	int data;
	struct SListNode* next;
//	struct SListNode* random;
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
//	newNode->random = NULL;
}

int main()
{
	SListNode* head = NULL;
	SListPushBack(&head, 1);
	SListPushBack(&head, 1);
	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushBack(&head, 4);
	SListPushBack(&head, 4);
	SListPushBack(&head, 5);
	SListPushBack(&head, 5);
	SListPushBack(&head, 9);
	SListPushBack(&head, 10);
	SListPushBack(&head, 10);
	
	SListNode* newhead = (SListNode*)malloc(sizeof(SListNode));
	newhead->next = head;
	SListNode* node = newhead;
	SListNode* next = head->next;
	SListNode* release = head;
	
	while(next)
	{
		SListNode* n = NULL;
		while(next && node->next->data == next->data)// 111 2 3 44 55 9 1010
		{
			n = node;
			release = next;
			next = next->next;
			free(release);
		}
		if(node == n)
		{
			free(node->next);
			node->next = next;
		}
		else
		{
			node = node->next;
		}
		if(next)	
		{
			next = next->next;	
		}
	}
	while(newhead->next)
	{
		newhead = newhead->next;
		printf("%d ", newhead->data);
	}
	return 0;
}

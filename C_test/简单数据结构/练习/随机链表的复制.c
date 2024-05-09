#include<stdio.h>
#include<stdlib.h>

typedef struct SListNode 
{
	int data;
	struct SListNode* next;
	struct SListNode* random;
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
	newNode->random = NULL;
}


int main()
{
	SListNode* head = NULL;
	int i = 0;
	for(i=1; i<=6; i++)
	{
		SListPushBack(&head, i);
	}
	head->random = NULL;
	head->next->random = head;
	head->next->next->random = head->next->next->next;
	head->next->next->next->random = head->next->next;
	head->next->next->next->next->random = head->next;
	head->next->next->next->next->next->random = head->next->next->next->next->next;
	
	SListNode* copy = NULL;
	SListNode* newhead  = head;
	SListNode* next  = NULL;
	while(newhead != NULL)
	{
		copy = (SListNode*)malloc(sizeof(SListNode));
		copy->data = newhead->data;
		copy->random = NULL;
		
		next = newhead->next;
		newhead->next = copy;
		copy->next = next;
		
		newhead = next;
		if(next != NULL)
		{
			next = next->next;
		}	
	}
	
	copy = NULL;
	newhead = head;
	while(newhead != NULL)
	{
		copy = newhead->next;
		if(newhead->random == NULL)
		{
			copy->random = newhead->random;
		}
		else
		{
			copy->random = newhead->random->next;
		}
		newhead = copy->next;
	}

	SListNode* copyhead = head->next;
	newhead = head;
	copy = copyhead;
//   1   2   3   4   5   6
// 1   2   3   4   5   6   n

	while(newhead != NULL)
	{
		next = copy->next;
		newhead->next = next;
		if(next != NULL)
		{
			copy->next = next->next;
			newhead = newhead->next;
			copy = copy->next;	
		}
		else
		{
			copy->next = next;
			newhead = newhead->next;
		}
	}

	copy = copyhead;
	while(copy != NULL)
	{
		printf("%d %d\n", copy, copy->random);
		copy = copy->next;
	}
	newhead = head;
	while(newhead != NULL)
	{
		printf("%d %d\n", newhead, newhead->random);
		newhead = newhead->next;
	}
	return 0;
}

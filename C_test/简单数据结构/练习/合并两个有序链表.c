#include<stdio.h>
#include<stdlib.h>

typedef struct SListNode 
{
	int val;
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
	newNode->val = val;
	newNode->next = NULL;
}

int main()
{
	SListNode* list1 = NULL;
	SListNode* list2 = NULL;
	int i = 0;
	for(i=1; i<=10; i++)
	{
		SListPushBack(&list1, i);
		SListPushBack(&list2, i);
	}
	
	if(list2 == NULL)
	{
//		return list1;
	}
	else if(list1 == NULL)
	{
//		return list2;
	}
	
	SListNode* l1 = list1;
	SListNode* l2 = list2;
	SListNode* head = NULL;
	SListNode* tail = NULL;
	head = tail = (SListNode*)malloc(sizeof(SListNode));
	// if(l1->val < l2->val)
	// {
	//     head =  l1;
	//     l1 = l1->next;
	// }
	// else
	// {
	//     head =  l2;
	//     l2 = l2->next;
	// }
	// ListNode* tail = head;
	
	while(l1 && l2)
	{
		if(l1->val < l2->val)
		{
			tail->next = l1;
			l1 = l1->next;
		}
		else
		{
			tail->next = l2;
			l2 = l2->next;
		}
		tail = tail->next;
	}
	if(l1)
	{
		tail->next = l1;
	}
	else
	{
		tail->next = l2;
	}
	SListNode* newhead = head->next;
	free(head);
	head = NULL;
	
	while(newhead) 
	{
		printf("%d ", newhead->val);
		newhead = newhead->next;
	}

	return 0;
}

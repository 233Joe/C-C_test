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
	for(i=1; i<=1; i++)
	{
		SListPushBack(&head, i);
	}
	int k = 0;
	scanf("%d", &k);
	
	SListNode* slow = head;
	SListNode* fast = head;
	while(k--)
	{
		if(fast)
		{
			fast = fast->next;
		}
		else
		{
			return 0;
		}
	}
	while(fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	
	printf("%d\n", slow->data);
	return 0;
}

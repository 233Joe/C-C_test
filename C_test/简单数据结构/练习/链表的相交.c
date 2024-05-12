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
	SListNode* head1 = NULL;
	SListNode* head2 = NULL;
	int i = 0;
	for(i=1; i<=6; i++)
	{
		SListPushBack(&head1, i);
	}
	SListNode* head1_Tail = head1;
	SListNode* head2_Tail = head2;
	SListTail(&head1_Tail);
	for(i = 1; i <= 10; i++)
	{
		
		if(i != 5)
		{
			SListPushBack(&head2, i);
			head2_Tail = head2;
		}
		else
		{
			SListNode* node = (SListNode*)malloc(sizeof(SListNode));
			if(node == NULL)
				return 0;
			
			node->next = NULL;
			node->data = 5;
			head1_Tail->next = node;
			SListTail(&head2_Tail);
			head2_Tail->next = node;
		}
		
	}
	SListNode* head1_Next = head1;
	SListNode* head2_Next = head2;
	
	while(head1_Next != NULL)
	{
		printf("%d ", head1_Next->data);
		head1_Next = head1_Next->next;
	}
	printf("\n");
	while(head2_Next != NULL)
	{
		printf("%d ", head2_Next->data);
		head2_Next = head2_Next->next;
	}
	printf("\n");
	
	
//判断链表相交点
	int numNode1 = 0;
	int numNode2 = 0;
	head1_Next = head1;
	head2_Next = head2;
	
	while(head1_Next)
	{
		numNode1++;
		head1_Next = head1_Next->next;
	}
	while(head2_Next)
	{
		numNode2++;
		head2_Next = head2_Next->next;
	}
	head1_Next = head1;
	head2_Next = head2;
	
	
	int disparity = 0;
	if(numNode1 > numNode2)
	{
		disparity = numNode1-numNode2;
		while(disparity)
		{
			head1_Next = head1_Next->next;
			disparity--;
		}
	}
	else if(numNode1 < numNode2)
	{
		disparity = numNode2-numNode1;
		while(disparity)
		{
			head2_Next = head2_Next->next;
			disparity--;
		}
	}
	
	while(head1_Next != head2_Next)
	{
		head1_Next = head1_Next->next;
		head2_Next = head2_Next->next;
	}
	printf("他们相交于: %d %d", head1_Next, head1_Next);
	return 0;
}

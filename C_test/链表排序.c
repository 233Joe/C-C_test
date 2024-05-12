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
	SListPushBack(&head, 9);
	SListPushBack(&head, 1);
	SListPushBack(&head, 7);
	SListPushBack(&head, -1);
	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushBack(&head, 4);
	SListPushBack(&head, 5);
//链表排序 // 方法一:一一替换
//	SListNode* newhead = head;
//	SListNode* headnode = head->next;
//	SListNode* headnext = headnode;
//	SListNode* headtail = head;
//	headtail->next = NULL;
//	while(headnext)
//	{
//		headnode = headnext;
//		headnext = headnode->next;
//		if(newhead->data >= headnode->data) //比对头, 头插
//		{
//			headnode->next = newhead;
//			newhead = headnode;
//		}
//		else if(headtail->data <= headnode->data)//比对尾,尾插
//		{
//			headtail->next = headnode;
//			headtail = headtail->next;
//			headtail->next = NULL;
//		}
//		else
//		{
//			SListNode* body = newhead;
//			while(body != headtail)
//			{
//				if(body->next->data >= headnode->data)
//				{
//					headnode->next = body->next;
//					body->next = headnode;
//					break;
//				}
//				else
//				{
//					body = body->next;
//				}
//			}
//		}
//	}
//	while(newhead != NULL)
//	{
//		printf("%d ", newhead->data);
//		newhead = newhead->next;
//	}
//	return 0;
//}	
	// 方法二:将连续有序的链表段段替换
	SListNode* newhead = (SListNode*)malloc(sizeof(SListNode));
	newhead->next = head;
	SListNode* node = head;
	SListNode* next = head;
	SListNode* tail = head;

	while(next->next)
	{
		next = node->next;
		if(node->data > next->data)
		{
			SListNode* large = newhead;
			SListNode* small = next;

			while(large->next->data < small->data)
				large = large->next;
			
			tail = small;
			
			while(tail->next && (large->next->data >= tail->next->data) && (tail->data <= tail->next->data))
				tail = tail->next;
			
			node->next = tail->next;
			tail->next = large->next;
			large->next = small;
			next = node;		
		}
		else
			node = node->next;
	}
	while(newhead->next != NULL)
	{
		newhead = newhead->next;
		printf("%d ", newhead->data);
	}
	return 0;
}

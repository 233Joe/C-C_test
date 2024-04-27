#include"SList.h"

void SListJudge(SListNode* newNode)//判断指针是否为空
{
	if(newNode == NULL)
	{
		printf("为空\n");
		exit(-1);
	}
}

void SListPrint(SListNode* pNode)//打印
{
	SListJudge(pNode);
	while(pNode != NULL)
	{
		printf("%d ", pNode->data);
		pNode = pNode->next;
	}
	printf("\n");
}

SListNode* SListCheck(SListNode* pNode, TYPE val)//数据查找
{
	SListJudge(pNode);
	while(pNode->data != val)
	{
		if(pNode == NULL)
		{
			printf("未查找到该数据\n");
			return NULL;
		}
		pNode = pNode->next;
	}
	return pNode;
}

void SListTail(SListNode** tail)//找到链表的最后一个
{
	while((*tail)->next != NULL)
	{
		*tail = (*tail)->next;
	}
}
void SListPushBack(SListNode** ppNode, TYPE val)//尾插入
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	SListJudge(newNode);
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

void SListPuphBack(SListNode** ppNode) //尾删除
{
	SListJudge(*ppNode);
	if((*ppNode)->next == NULL)
	{
		free(*ppNode);
		*ppNode = NULL;
	}
	else
	{
		SListNode* tail = *ppNode;
		SListNode* newtail = NULL;
		while(tail->next != NULL)
		{
			newtail = tail;
			tail = tail->next;
		}
		free(newtail->next);
		newtail->next = NULL;
	}
}

void SListPushFront(SListNode** ppNode, TYPE val)//头插入
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->next = *ppNode;
	newNode->data = val;
	*ppNode = newNode;
}
void SListPuphFront(SListNode** ppNode)//头删除
{
	SListJudge(*ppNode);
	SListNode* headNode = *ppNode;
	*ppNode = headNode->next;
	free(headNode);
	headNode = NULL;
}

void SListPushInsert(SListNode** ppNode, TYPE val, int place)//任意位置插入
{
	if(*ppNode == NULL)
	{
		SListPushFront(ppNode, val);
		return ;
	}
	SListNode* posNode = SListCheck(*ppNode, place);
	if(posNode == NULL)
	{
		return ;
	}
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->next = posNode->next;	
	posNode->next = newNode;
	newNode->data = val;
}

void SListPupErase(SListNode** ppNode, int place)//任意位置删除
{
	SListNode* curNode = SListCheck(*ppNode, place);
	if(curNode == NULL || curNode->next == NULL)
	{
		return ;
	}
	SListNode* desNode = curNode->next;
	curNode->next = desNode->next;
	free(desNode);
	desNode = NULL;
}

SListNode* SListInverse1(SListNode** ppNode)//逆序链表 方法一
{
	if(*ppNode == NULL || (*ppNode)->next == NULL)
	{
		return *ppNode;
	}
	SListNode* p1 = NULL;
	SListNode* p2 = *ppNode;
	SListNode* p3 = (*ppNode)->next;
	
	while(p2)
	{
		p2->next = p1;
		p1 = p2;		
		p2 = p3;
		if(p3)
		{
			p3 = p3->next;
		}
		
	}
	*ppNode = p1;
	return p1;
}

// p->4 3 2 1->NULL
SListNode* SListInverse2(SListNode** ppNode)//逆序链表 方法二:头插法
{//方法一新建链表
//	if(*ppNode == NULL || (*ppNode)->next == NULL)
//	{
//		return *ppNode;
//	}
//	SListNode* cur1 = *ppNode;
//	static SListNode* newhead = NULL;
//	while(cur1)
//	{
//		SListPushFront(&newhead, cur1->data);
//		cur1 = cur1->next;
//	}
//	return newhead;
//方法二原链表
	SListNode* cur = (*ppNode)->next;
	(*ppNode)->next = NULL;
	while(cur)
	{
		SListNode* next = cur->next;
		cur->next = *ppNode;
		*ppNode = cur;
		cur = next;
	}
	return *ppNode;
}



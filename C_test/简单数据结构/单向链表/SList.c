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
	if(*ppNode == NULL)
	{
		printf("删除失败链表为空");
		return ;
	}
	else if((*ppNode)->next == NULL)
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

void SListPushFront(SListNode** ppNode, TYPE val);//头插入
void SListPuphFront(SListNode** ppNode); //头删除

void SListPushInsert(SListNode** ppNode, TYPE val, int place);//任意位置插入
void SListPupErase(SListNode** ppNode, int place);//任意位置删除

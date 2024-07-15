#include "Queue.h"


//初始化队列
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_head = pq->_tail = NULL;
}

//销毁队列
void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->_head;
	while(cur)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	pq->_head = pq->_tail = NULL;
}

//进队列
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if(newnode == NULL)
	{
		printf("newnode内存申请失败\n");
		exit(-1);
	}
	newnode->_data = x;
	newnode->_next = NULL;
	if(pq->_head == NULL)
	{
		pq->_head = pq->_tail = newnode;
	}
	else
	{
		pq->_tail->_next = newnode;
		pq->_tail = newnode;
	}
}

//出队列
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->_head);
	QueueNode* newhead = pq->_head->_next;
	free(pq->_head);
	pq->_head = newhead;
	if(pq->_head == NULL)
		pq->_tail = NULL;
	
}

//返回队头
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->_head);
	return pq->_head->_data;
}

//返回队尾
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->_head);
	return pq->_tail->_data;
}

//判断队列是否为空 0非空 1空
int  QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->_head == NULL ? 1 : 0;
}

//判断队列数据个数
int  QueueSize(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->_head;
	int sz = 0;
	while(cur)
	{
		sz++;
		cur = cur->_next;
	}
	return sz;
}

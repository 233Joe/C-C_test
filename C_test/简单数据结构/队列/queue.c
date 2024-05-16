#include"queue.h"

void QueueInit(Queue* pq)//初始化
{

	pq->_head = NULL;
	pq->_tail = NULL;
}
void QueueDestruction(Queue* pq)//销毁
{
	if(!pq)
		return ;
	
	while(pq->_head != pq->_tail)
	{
		QueuePop(pq);
	}
	free(pq->_head);
	QueueInit(pq);
}

void QueuePush(Queue* pq, int x)//添加
{
	if(!pq)
		return ;
	
	QueueType* newtail = (QueueType*)malloc(sizeof(QueueType));
	if(!newtail)
		return ;
	newtail->_data = x;
	newtail->_next = NULL;
	if(!pq->_head)
	{
		pq->_head = newtail;
		pq->_tail = pq->_head;
	}
	else
	{
		pq->_tail->_next = newtail;
		pq->_tail = newtail;
	}
}

void QueuePop(Queue* pq)//删除
{
	if(!pq && pq->_head)
		return ;
	
	
	if(pq->_head->_next != NULL)
	{
		QueueType* headNext = pq->_head->_next;
		free(pq->_head);
		pq->_head = headNext;
	}
	else
	{
		free(pq->_head);
		QueueInit(pq);
	}

}

int QueueSize(Queue* pq)//统计大小
{
	if(!pq)
		return 0;
	
	QueueType* newhead = pq->_head;
	int x = 0;
	while(newhead != NULL)
	{
		newhead = newhead->_next;
		x++;
	}
	return x;
}

int QueueEmpty(Queue* pq)//空返回1
{
	if(!pq)
		return 1;
	
	return pq->_head == NULL ? 1 : 0;
}

int QueueTop(Queue* pq)//返回队顶的数据
{
	if(!pq)
		return -1;
	
	return pq->_tail->_data;
}

#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct QueueType
{
	struct QueueType* _next;
	int _data;
}QueueType;

typedef struct Queue
{
	QueueType* _head;
	QueueType* _tail;
}Queue;

void QueueInit(Queue* pq);//初始化

void QueueDestruction(Queue* pq);//销毁

void QueuePush(Queue* pst, int x);//添加

void QueuePop(Queue* pq);//删除

int QueueSize(Queue* pq);//统计大小

int QueueEmpty(Queue* pq);//空返回1

int QueueTop(Queue* pq);//返回栈顶的数据

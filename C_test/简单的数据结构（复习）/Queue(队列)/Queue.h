#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int QDataType;

typedef struct QueueNode
{
	struct QueueNode* _next;
	QDataType _data;
}QueueNode;

typedef struct Queue
{
	QueueNode* _head;
	QueueNode* _tail;
	
}Queue;

//初始化队列
void QueueInit(Queue* pq);
//销毁队列
void QueueDestory(Queue* pq);
//进队列
void QueuePush(Queue* pq, QDataType x);
//出队列
void QueuePop(Queue* pq);
//返回队头
QDataType QueueFront(Queue* pq);
//返回队尾
QDataType QueueBack(Queue* pq);
//判断队列是否为空 0非空 1空
int  QueueEmpty(Queue* pq);
//判断队列数据个数
int  QueueSize(Queue* pq);

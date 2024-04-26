#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int TYPE;

typedef struct SListNode 
{
	TYPE data;
	struct SListNode* next;
}SListNode;

void SListPrint(SListNode* pNode);//打印

SListNode* SListCheck(SListNode* pNode, TYPE val);//数据查找

void SListPushBack(SListNode** ppNode, TYPE val); //尾插入
void SListPuphBack(SListNode** ppNode); //尾删除

void SListPushFront(SListNode** ppNode, TYPE val);//头插入
void SListPuphFront(SListNode** ppNode); //头删除

void SListPushInsert(SListNode** ppNode, TYPE val, int place);//任意位置插入
void SListPupErase(SListNode** ppNode, int place);//任意位置删除

SListNode* SListinverse(SListNode** ppNode);//逆序链表;

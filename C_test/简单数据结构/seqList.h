#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLD;
typedef struct SeqList
{
	SLD* a;
	int size;
	int capacity;	
}SeqList;

void SeqListInit(SeqList* sq);//初始化

void SeqListprint(SeqList* sq);//打印

void SeqListPushBack(SeqList* sq, SLD n);//尾插入
void SeqListPupBack(SeqList* sq);//尾删除

void SeqListPushFront(SeqList* sq, SLD n);//头插入
void SeqListPupFront(SeqList* sq);//头删除

void SeqListInsert(SeqList* sq, SLD n, int x);//任意位置插入
void SeqListErase(SeqList* sq, int x);//任意位置删除

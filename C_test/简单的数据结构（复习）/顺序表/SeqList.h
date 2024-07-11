#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct SeList
{
	int* a;
	int sz;
	int capacity;
}SL;

void SeqListPrint(SL* ps);

void SeqListInit(SL* ps);

void SeqListPushBack(SL* ps, int n);

void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps, int n);

void SeqListPopFront(SL* ps);

void SeqListInsert(SL* ps, int p, int n);

void SeqListErase(SL* ps, int p);

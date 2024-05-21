#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Heap
{
	int* _a;
	int _sz;
	int _capactity;
}Heap;

void AdjustDown(int* a, int n, int root);

void AdjustUp(int* a, int n, int chile);

void HeapInit(Heap* php, int* arr, int n);

void HeapDestruction(Heap* php);

void HeapPush(Heap* php, int n);

void HeapPop(Heap* php);

int HeapTop(Heap* php);

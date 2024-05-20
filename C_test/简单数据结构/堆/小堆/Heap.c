#include"Heap.h"

void AdjustDown(int* a, int n, int root) 
{
	int parent = root;
	int chile = parent * 2 + 1;
	while(chile < n)
	{
		if(a[chile+1] < a[chile])
			chile++;
		
		if(a[parent] > a[chile])
		{
			int x = a[parent];
			a[parent] = a[chile];
			a[chile] = x;
		}
		parent = chile;
		chile = parent * 2 + 1;
	}
}

void HeapInit(Heap* php, int* arr, int n)
{
	php->_a = (int*)malloc(sizeof(int)*n);
	memcpy(php->_a, arr, n);
	php->_capactity = n;
	php->_sz = n;
}

void HeapDestruction(Heap* php);

void HeapPush(Heap* php, int* arr, int n);

void HeapPop(Heap* php);

int* HeapTop(Heap* php);

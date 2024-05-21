#include"Heap.h"

void AdjustDown(int* a, int n, int root)
{
	int parent = root;
	int chile = parent * 2 + 1;
	while(chile < n)
	{
		if( chile+1 < n && a[chile+1] < a[chile] )
			chile++;
		
		if(a[parent] > a[chile])
		{
			int x = a[parent];
			a[parent] = a[chile];
			a[chile] = x;
			parent = chile;
			chile = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n) // {5, 6, 7, 9, 1, 23, 4, 6, 7, 56};
//				5
//			6		7
//		9	1		23	4
//	6	7	56
{
	int i = 0;
	for(i = (n-2)/2; i>=0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n-1;
	while(end > 0)
	{
		int x = a[0];
		a[0] = a[end];
		a[end] = x;
		AdjustDown(a, end, 0);
		--end;
	}
}

void AdjustUp(int* a, int n, int chile)
{
	int parent = (chile - 1) / 2;
	while(chile > 0)
	{
		if(a[parent] > a[chile])
		{
			int x = a[parent];
			a[parent] = a[chile];
			a[chile] = x;
			chile = parent;
			parent = (chile - 1) / 2;
		}
		else
		{
			break;
		}
	}
}



void HeapInit(Heap* php, int* arr, int n)
{
	php->_a = (int*)malloc(sizeof(int)*n);
	memcpy(php->_a, arr, n*sizeof(int));
	php->_capactity = n;
	php->_sz = n;
}

void HeapDestruction(Heap* php)
{
	free(php->_a);
	php->_a = NULL;
	php->_capactity = 0;
	php->_sz = 0;
}

void HeapPush(Heap* php, int x)
{
	if(!php)
		return ;
	if(php->_capactity == php->_sz)
	{
		php->_capactity *= 2;
		php->_a = (int*)realloc(php->_a, sizeof(int)*php->_capactity);
	}
	php->_a[php->_sz++] = x;
	AdjustUp(php->_a, php->_sz, php->_sz-1);
}

void HeapPop(Heap* php);

int HeapTop(Heap* php)
{
	if(!php)
		return -1;
	return php->_a[0];
}

#include "Heap.h"

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//向上调整
void AdjustUp(HPDataType* a, int n, int child)
{
	int parent = (child - 1) / 2;
	while(child > 0)
	{
		if(a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

//向下调整
void AdjustDown(HPDataType* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while(child < n)
	{
		if(child+1 < n && a[child] > a[child+1])
		{
			child++;	
		}

		if(a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

//初始化堆
void HeapInit(Heap* php, HPDataType* a, int n)
{
	assert(php);
	php->_a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if(!php->_a)
	{
		printf("内存申请失败");
		exit(-1);
	}
	memcpy(php->_a, a, sizeof(HPDataType)*n);
	php->_capacity = php->_size = n;
	
	int i = 0;
	for(i = (n-1-1)/2; i >= 0; i--)
	{
		AdjustDown(php->_a, n, i);
	}
}

void HeapSort(HPDataType* a, int n)
{
	assert(a);	
	int i = 0;
	for(i = (n-1-1)/2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	
	int end = n-1;
	while(end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

//销毁
void HeapDestory(Heap* php)
{
	assert(php);
	free(php->_a);
	php->_a = NULL;
	php->_capacity = php->_size = 0;
}

//插入数据
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);
	if(php->_capacity == php->_size)
	{	
		php->_capacity *= 2;
		HPDataType* tmp = (HPDataType*)realloc(php->_a, sizeof(HPDataType)*php->_capacity);
		php->_a = tmp;
	}
	php->_a[php->_size++] = x;
	AdjustUp(php->_a, php->_size, php->_size - 1);
}

//删除尾数
void HeapPop(Heap* php)
{
	assert(php);
	assert(php->_size > 0);
	Swap(&php->_a[0], &php->_a[--php->_size]);
	AdjustDown(php->_a, php->_size, php->_a[0]);
}

//返回顶数
HPDataType HeapTop(Heap* php)
{
	assert(php);
	assert(php->_size > 0);
	return php->_a[0];
}

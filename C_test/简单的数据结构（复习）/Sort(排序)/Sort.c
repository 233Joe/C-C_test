#include "Sort.h"

//打印数组
void PrintArr(int* a, int sz)
{
	int i = 0;
	for(i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//交换
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//插入排序
void InsertSort(int* a, int n)
{
	assert(a);
	int i = 0;
	for(i = 0;i < n-1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while(end > -1)
		{
			if(a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

//希尔排序
void ShellSort(int* a, int sz)
{
	assert(a);
	int gap = sz;
	while(gap > 1)
	{
		gap = gap / 3 + 1;//+1保证了gap最后一次一定是1;
		int i = 0;
		for(i = 0;i < sz-gap; i++)
		{
			int end = i;	
			int tmp = a[end + gap];
			while(end > -1)
			{
				if(a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

//选择排序
void SelectSort(int* a, int sz)//选择排序逆序是最慢的
{
	assert(a);
	int min = 0, max = 0;
	int begin = 0;
	int end = sz - 1;
	while(begin < end)
	{
		min = max = begin;
		int i = 0;
		for(i = begin+1; i < end; i++)
		{
			if(a[i] > a[max])
				max = i;
			
			else if(a[i] < a[min])
				min = i;
		}
		
		Swap(&a[begin], &a[min]);
		
		if(max == begin)
			max = min;
			
		Swap(&a[end], &a[max]);
		
		++begin;
		--end;
	}
}


//堆排序
void AdjustDwon(int* a, int sz, int root)//0, 6, 85, 4, 8, 3, 1, 5, 4, 2
{
	int parent = root;
	int child = parent * 2 + 1;
	while(child < sz)
	{
		if(child + 1 < sz && a[child + 1] > a[child])
		{
			++child;
		}
		
		if(a[parent] < a[child])
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

void HeapSort(int* a, int sz)
{
	assert(a);
	int end = (sz-1-1)/2;
	while(end >= 0)
		AdjustDwon(a, sz, end--);
	
	end = sz-1;
	while(end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);
		--end;
	}
}

//冒泡排序
void BubbleSort(int*a, int sz)
{
	assert(a);
	int exchange = 0;
	int end = sz;
	while(end > 0)
	{
		for(int i = 0; i < end-1; i++)
		{
			if(a[i] > a[i+1])
			{
				Swap(&a[i], &a[i+1]);
				exchange = 1;
			}
		}
		--end;
		
		if(!exchange)
			break;
	}
}

//三数取中
int ThreeNumMedian(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if((a[begin] > a[mid] && a[begin] < a[end]) 
	|| (a[begin] > a[end] && a[begin] < a[mid]))
		return begin;
	
	else if((a[mid] > a[begin] && a[mid] < a[end]) 
	     || (a[mid] > a[end] && a[mid] < a[begin]))
		return mid;
	
	else 
		return end;
}

//快速排序: 左右指针法
int PartSort1(int*a, int begin, int end)
{
	int key = ThreeNumMedian(a, begin, end);
	Swap(&a[key], &a[end]);
	key = end;
	
	while(begin < end)
	{
		while(begin < end && a[begin] <= a[key])
			++begin;
		
		while(begin < end && a[end] >= a[key])
			--end;
		
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[key]);
	return begin;
}

//快速排序: 挖坑法
int PartSort2(int*a, int begin, int end)
{
	int key = ThreeNumMedian(a, begin, end);
	Swap(&a[key], &a[end]);
	key = a[end];
	
	while(begin < end)
	{
		while(begin < end && a[begin] <= key)
			++begin;
		
		a[end] = a[begin];
		
		while(begin < end && a[end] >= key)
			--end;
		
		a[begin] = a[end];
	}
	a[begin] = key;
	return begin;
}

//快速排序: 前后指针法
int PartSort3(int*a, int begin, int end)
{
	int key = ThreeNumMedian(a, begin, end);
	Swap(&a[key], &a[end]);
	key = end;	
	
	int cur = begin;
	int prev = begin-1;
	while(cur < end)
	{
		if(a[cur] < a[key] && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		
		++cur;
	}
	Swap(&a[++prev], &a[key]);
	return prev;
}

//快速排序
void QuickSort(int*a, int left, int right)
{
	assert(a);
	if(left >= right)
		return ;
	
	int div = PartSort3(a, left, right);
	QuickSort(a, left, div-1);
	QuickSort(a, div+1, right);
}


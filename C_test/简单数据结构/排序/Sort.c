#include"Sort.h"

void PrintArr(int* a, int n)
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(int* a, int n)//直接插入排序
{
	if(!*a)
		return ;
	
	int end ;
	int tmp ;
	int i = 0;
	for(i = 0; i < n-1; i++)
	{
		end = i;
		tmp = a[end + 1];
		while(end >= 0)
		{
			if(a[end] > tmp)
			{
				a[end+1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end+1] = tmp;
	}
}

void ShellSort(int* a, int n)//希尔排序  a{1 4 6 5 4 6 8 1 3}
{
	if(!*a)
		return ;
	int gap = n;
	int i = 0;
	while(gap > 1)
	{
		gap = gap / 3 + 1;
		for(i = 0; i < n-gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while(end >= 0)
			{
				if(tmp < a[end])
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

void Swap(int* a, int* b)
{
	int tmp = *a;//3, 1
	*a = *b;
	*b = tmp;//1,3
}

void SelectSort(int* a, int n)//选择排序 a{1, 4, 6, 5, 4, 6, 8, 1, 3, 5};
										// 1, 1, 3, 4, 4, , 5, 6, 6, 8
{
	int i = 0;
	for(i = 0; i < n/2; i++)
	{
		int j = 0;
		int min = i;
		int max = n-i-1;
		for(j = 0 + i; j < n-i; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
			else if(a[j] > a[max])
			{
				max = j;
			}
		}
		Swap(&a[i], &a[min]);
		
		if(a[n-1-i] != a[max])
		{	
			if(a[min] > a[max])
				max = min;
			
			Swap(&a[n-1-i], &a[max]);
		}
	}
}

void AdjustDown(int* a, int n, int root)//{1, 4, 6, 5, 4, 6, 8, 1, 3, 5};
{
	int parent = root;
		int child = parent * 2 + 1;
	while(child < n)
	{
		if(a[child] < a[child+1] && child+1 < n)
			child++;
		
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

void HeapSort(int* a, int n)//堆排序
{
	int tailParent = (n - 2) / 2;
	while(tailParent >= 0)
	{
		AdjustDown(a, n, tailParent);
		--tailParent;
	}
	
	int end = n-1;
	while(end > 0)
	{
		Swap(&a[0], &a[end--]);
		AdjustDown(a, end, 0);
	}
}

void  BubbleSort(int* a, int n)//冒泡排序
{
	int x = 0;
	while(x < n)
	{
		int judge = 0;
		int i = 0;
		for(i = 0; i < n-1-x; i++)
		{
			if(a[i] > a[i+1])
			{
				Swap(&a[i], &a[i+1]);
				judge = 1;
			}
		}
		if(judge == 0)
		{
			return ;
		}
		x++;
	}
}

int JudgeQuickSort(int* a, int begin, int end)	//找中间数
{
	int mid = end/2;
	if((a[begin] >= a[mid] && a[begin] <= a[end]) || 
	   (a[begin] <= a[mid] && a[begin] >= a[end]))
		return begin;
	
	else if((a[mid] >= a[begin] && a[mid] <= a[end]) || 
			(a[mid] <= a[end] && a[mid] >= a[begin]))
		return mid;
	
	else
		return end;
}

int PartSort1(int* a, int begin, int end)	//进行左右区分 方法一:左右指针法
{

	Swap(&a[JudgeQuickSort(a, begin, end)], &a[end]);
	int secondaryKey  = end;
	while(begin < end)
	{
		while(begin < end && a[begin] <= a[secondaryKey])
			++begin;
		
		
		while(begin < end && a[end] >= a[secondaryKey])
			--end;
		
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[secondaryKey]);
	return begin;
}

int PartSort2(int* a, int begin, int end)//进行左右区分 方法二:挖坑法
{
	Swap(&a[JudgeQuickSort(a, begin, end)], &a[end]);
	int secondaryKey  = a[end];
	while(begin < end)
	{
		while(begin < end && a[begin] <= secondaryKey)
			++begin;
		
		a[end] = a[begin];
		while(begin < end && a[end] >= secondaryKey)
			--end;
		a[begin] = a[end];
	}
	a[begin] = secondaryKey;
	return begin;
}

int PartSort3(int* a, int begin, int end)//进行左右区分 方法三:前后指针法
{
	int prev = begin-1;
	int cur = begin;
	int secondaryKey  = end;
	
	while(cur != end)
	{
		if(a[cur] < a[secondaryKey])
		{
			
			Swap(&a[++prev], &a[cur]);
		}
		++cur;
	}
	Swap(&a[++prev], &a[secondaryKey]);
	return prev;
}

void QuickSort(int* a, int left, int right)	//快速排序
{
	if(!*a) return ;
	
	if(left > right) return ;
	
//	int div = PartSort1(a, left, right);//进行左右区分 方法一:左右指针法
	
//	int div = PartSort2(a, left, right);//进行左右区分 方法二:挖坑法

	int div = PartSort3(a, left, right);//进行左右区分 方法三:前后指针法

	QuickSort(a, left, div-1);
	QuickSort(a, left+1, right);
}

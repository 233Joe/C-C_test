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

int JudgeQuickSort(int* a, int begin, int end)	//3数找中间数
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
	
	int div = PartSort1(a, left, right);//进行左右区分 方法一:左右指针法
	
//	int div = PartSort2(a, left, right);//进行左右区分 方法二:挖坑法

//	int div = PartSort3(a, left, right);//进行左右区分 方法三:前后指针法

	QuickSort(a, left, div-1);
	QuickSort(a, left+1, right);
}

typedef int StackPointerType;
typedef struct Stack
{
	StackPointerType* _a;
	int _capacity;
	int _top;
}Stack;

void StackInit(Stack* pst)//初始化
{
	if(!pst)
		return ;
	pst->_a = (StackPointerType*)malloc(sizeof(StackPointerType)*4);
	pst->_capacity = 4;
	pst->_top = 0;
}

void StackDestruction(Stack* pst)//销毁
{
	if(!pst)
		return ;
	
	free(pst->_a);
	pst->_a = NULL;
	pst->_top = 0;
	pst->_capacity = 0;
}

void StackPush(Stack* pst, int x)//添加
{
	if(!pst)
		return ;
	
	if(pst->_capacity == pst->_top)
	{
		pst->_a = (StackPointerType*)realloc(pst->_a, sizeof(*pst->_a)*2);
		pst->_capacity *= 2;
	}
	
	if(pst->_a != NULL)
	{
		pst->_a[pst->_top] = x;
		pst->_top++;
	}
	else
		exit(-1);
	
}

void StackPop(Stack* pst)//删除
{
	if(!pst)
		return ;	
	
	if(pst->_top > 0)
		pst->_top--;
}

int StackSize(Stack* pst)//统计大小
{
	if(!pst)
		return -1;
	
	return pst->_top;
}

int StackEmpty(Stack* pst)//空返回1
{
	if(!pst)
		return -1;
	
	return pst->_top == 0 ? 1 : 0;
}

int StackTop(Stack* pst)//返回栈顶的数据
{
	if(!pst)
		return -1;
	
	if(pst->_top > 0)
		return pst->_a[pst->_top-1];
	return -1;
}


void QuickSortNonR(int* a, int left, int right)//非递归实现快排
{
	Stack st;
	StackInit(&st);
	
	StackPush(&st, right);
	StackPush(&st, left);
	
	while(!StackEmpty(&st))
	{
		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);
		
		int val = PartSort1(a, begin, end);
		
		if(val + 1 < end)
		{
			StackPush(&st, end);
			StackPush(&st, val + 1);
		}
		if(val - 1 > begin)
		{
			StackPush(&st, val - 1);
			StackPush(&st, begin);
		}
	}
}

void _MergeSort(int* a, int left, int right, int* tmp)//合并排序
{
	if(left >= right)	return ;
	
	int mid = (left+right)/2;
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid+1, right, tmp);
	
	int begin1 = left, end1 = mid;
	int begin2 = mid+1, end2 = right;	
	int index = begin1;
	while(begin1 <= end1 && begin2 <= end2)
	{
		if(a[begin1] < a[begin2])
			tmp[index] = a[begin1++];
		else
			tmp[index] = a[begin2++];
		++index;
	}
	
	while(begin1 <= end1)
		tmp[index++] = a[begin1++];
	
	while(begin2 <= end2)
		tmp[index++] = a[begin2++];
	
	int i = 0;
	for(i = left; i <= right; i++)
		a[i] = tmp[i];
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	
	_MergeSort(a, 0, n-1, tmp);
	
	free(tmp);
}


void MergeArr(int* a, int begin1, int end1,int begin2, int end2, int* tmp)//非递归实现合并排序
{
	int left = begin1, right = end2;
	int index = begin1;
	while(begin1 <= end1 && begin2 <= end2)
	{
		if(a[begin1] < a[begin2])
			tmp[index] = a[begin1++];
		else
			tmp[index] = a[begin2++];
		++index;
	}
	
	while(begin1 <= end1)
		tmp[index++] = a[begin1++];
	
	while(begin2 <= end2)
		tmp[index++] = a[begin2++];
	
	int i = 0;
	for(i = left; i <= right; i++)
		a[i] = tmp[i];
}

void MergeSortNonR(int* a, int n)//非递归实现合并排序
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	int gap = 1;
	while(gap < n)
	{
		int i = 0;
		for(i = 0;i<n;i+= 2*gap)
		{
			int begin1 = i, end1 = i+gap-1;
			int begin2 = i+gap, end2 = i+2*gap-1;
			if(begin2 >= n)
				break;
			if(end2 >= n)
				end2 = n-1;
			MergeArr(a, begin1, end1, begin2, end2, tmp);//非递归实现合并排序
		}
		gap *= 2;
	}
	free(tmp);
}



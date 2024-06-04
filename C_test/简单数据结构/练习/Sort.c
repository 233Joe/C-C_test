#include<stdio.h>
#include<stdlib.h>

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





void Swap(int* a, int* b)
{
	int n = *a;
	*a = *b;
	*b = n;
}

void PrintArr(int* a, int n)
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
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
	int comparison = end;
	
	while(begin < end)
	{
		while(begin < end && a[begin] <= a[comparison])
			++begin;
		
		while(begin < end && a[end] >= a[comparison])
			--end;
		
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[comparison]);
	return begin;
}

int PartSort2(int* a, int begin, int end)	//进行左右区分 方法二:挖坑法
{
	Swap(&a[JudgeQuickSort(a, begin, end)], &a[end]);
	int comparison = a[end];
	
	while(begin < end)
	{
		while(begin < end && a[begin] <= comparison)
			++begin;
		a[end] = a[begin];
		
		while(begin < end && a[end] >= comparison)
			--end;
		a[begin] = a[end];
	}
	
	a[begin] = comparison;
	return begin;
}

int PartSort3(int* a, int begin, int end)	//进行左右区分 方法三:前后指针法
{
	int prev = begin-1;
	int cur = begin;
	int comparison  = end;
	
	while(cur != end)
	{
		if(a[cur] < a[comparison])
			Swap(&a[cur], &a[++prev]);
		++cur;
	}
	Swap(&a[++prev], &a[comparison]);
	return prev;
}

void QuickSort(int* a, int left, int right)
{
	if(!*a)	return ;
	if(left > right) return ;
	
	int val = PartSort3(a, left, right);
	QuickSort(a, left, val-1);
	QuickSort(a, val+1, right);
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



int main()
{
	int arr[] = {11 , 99, 1, 4, 6, 5, 4, 6, 8, 1, 3, 6};
	QuickSortNonR(arr, 0, (sizeof(arr)/sizeof(arr[0])-1));
	
	PrintArr(arr, sizeof(arr)/sizeof(int));
	
	
	return 0;
}

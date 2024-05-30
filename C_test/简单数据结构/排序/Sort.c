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
	
	int i=0;
	for(i = 0; i < n-1; i++)
	{
		int end = i;
		int tmp = a[i+1];
		while(end >= 0)
		{
			if(tmp < a[end])
			{
				a[end+1] = a[end];
				--end;
			}
			else
			{
				break ;
			}
		}
		a[end+1] = tmp;
	}
}

void ShellSort(int* a, int n)//希尔排序  a{1 4 6 5 4 6 8 1 3}
{
	int gap = n;
	while(gap > 1)
	{
		gap = gap / 3 + 1;
		int i = 0;
		for(i = 0; i < n-gap; ++i)
		{
			int end = i;
			int tmp = a[end+gap];
			while(end >= 0)
			{
				if(tmp < a[end])
				{
					a[end+gap] = a[end];
					end -= gap;
				}
				else
				{
					break ;
				}
			}
			a[end+gap] = tmp;
		}
		PrintArr(a, n);
	}

}

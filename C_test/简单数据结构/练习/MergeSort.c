#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void _MergeSort(int *a, int* tmp, int left, int right)
{
	int mid = (right+left)/2;
	if(right != left)
	{
		_MergeSort(a, tmp, left, mid);
		_MergeSort(a, tmp, mid+1, right);
	}
	int begin1 = left, end1 = mid;
	int begin2 = mid+1, end2 = right;
	int index = begin1;
	while(begin1 <= end1 && begin2 <= end2)
	{
		if(a[begin1] < a[begin2])
			tmp[index] = a[begin1++];
		else
			tmp[index] = a[begin2++];
		index++;
	}
	while(begin1 <= end1)
		tmp[index++] = a[begin1++];
	
	while(begin2 <= end2)
		tmp[index++] = a[begin2++];

	for(int i=left;i<=right;i++)
		a[i] = tmp[i];
	
}

void MergeSort1(int *a, int sz)//递归实现合并排序
{
	int *tmp = (int*)malloc((sz+1)*sizeof(int)); 
	
	_MergeSort(a, tmp, 0, sz);
	
	free(tmp);
}


void MergeArr(int *a, int* tmp, int begin1, int end1, int begin2, int end2)
{
	int left = begin1, right = end2;
	int index = left;
	while(begin1 <= end1 && begin2 <= end2)
	{
		if(a[begin1] < a[begin2])
			tmp[index] = a[begin1++];
		else
			tmp[index] = a[begin2++];
		index++;
	}
	while(begin1 <= end1)
		tmp[index++] = a[begin1++];
	
	while(begin2 <= end2)
		tmp[index++] = a[begin2++];
	
	for(int i=left;i<=right;i++)
		a[i] = tmp[i];
	
}

void MergeSort2(int *a, int sz)//非递归实现合并排序
{
	int *tmp = (int*)malloc((sz+1)*sizeof(int)); 
	int gap = 1;
	while(gap <= sz)
	{
		int i = 0;
		for(i=0;i<=sz;i += gap*2)
		{
			int begin1 = i, end1 = i+gap-1;
			int begin2 = i+gap, end2 = i+2*gap-1;
			if(begin2 > sz)
				break;
			if(end2 > sz)
				end2 = sz;
			MergeArr(a, tmp, begin1, end1, begin2, end2);
		}
		gap *= 2;
	}
	free(tmp);
}

int main()
{
	int a[] = {5, 35, 7, 6, 1, 6, 4, 6, 4, 10, 0};
	MergeSort2(a, sizeof(a)/sizeof(a[0])-1);
	
	for(int i=0;i<=sizeof(a)/sizeof(a[0])-1;i++)
		printf("%d ", a[i]);
	
	return 0;
}

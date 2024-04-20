#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int arr[] = {6, 2, 3, 3, 9, 2, 1, 7, 5};
	int sz = sizeof(arr)/sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), compare);
	
	for(int i=0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

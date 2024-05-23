#include<stdio.h>
#include<stdlib.h>

void AdjustDown(int* a, int n, int root)
{
	int parent = root;
	int chile = parent * 2 + 1;
	
	while(chile < n)
	{
		if(chile+1 < n && a[chile] < a[chile+1])
			chile++;
		
		if(a[chile] > a[parent])
		{
			int x = a[chile];
			a[chile] = a[parent];
			a[parent] = x;
			
			parent = chile;
			chile = parent*2+1;
		}
		else
		{
			break;
		}
	}
}
int* smallestK(int* arr, int arrSize, int k, int* returnSize){
	*returnSize = k;
	if(k == 0)
		return NULL;
	
	int* pa = (int*)malloc(sizeof(int)*k);
	int i = 0;
	for(i = 0; i < k; i++)
		pa[i] = arr[i];
	
	for(i = (arrSize-2)/2; i >= 0; i--)
		AdjustDown(pa, k, i);
	
	for(i = k; i < arrSize; ++i)
	{
		if(pa[0] > arr[i])
		{
			pa[0] = arr[i];
			AdjustDown(pa, k, 0);
		}
	}
	return pa;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int returnSize = 0;
	int* pa = smallestK(arr, 10, 5, &returnSize);
	
	for(int i=0;i<returnSize;i++)
	{
		printf("%d", pa[i]);
	}
	return 0;
}

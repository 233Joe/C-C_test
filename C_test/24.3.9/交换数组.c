#include<stdio.h>
//交换函数
void swap(int arr1[], int arr2[], int si)
{
	int i = 0, k = 0;
	for(i=0;i<=si;i++)
	{
		if(arr1[i] != arr2[i]){
			k = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = k;
		}
	}
}

//打印数组函数
void print(int arr[], int si)
{
	int i = 0;
	for(i=0;i<=si;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr2[] = {10 ,9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	int si1 = 0, si2 = 0;
	si1 = sizeof(arr1) / sizeof(arr1[0]) - 1;
	si2 = sizeof(arr2) / sizeof(arr2[0]) - 1;	
	
	if(si1 == si2)
		swap(arr1, arr2, si1);
	
	print(arr1, si1);
	print(arr2, si2);
	return 0;
}

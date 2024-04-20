#include<stdio.h>
/*
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for(i=0;i<r;i++)
	{
		int j = 0;
		for(j=0;j<c;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
*/
//数组指针正常的用法
void print2(int (*p)[5], int r, int c)
{
	int i = 0;
	for(i=0;i<r;i++)
	{
		int j = 0;
		for(j=0;j<c;j++)
		{
			printf("%d ", *(*(p+i)+j));
			printf("%d ", (*(p+i))[j]);
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	/*数组指针别扭的用法
	int si = 0, i = 0;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	si = sizeof(arr)/sizeof(arr[0]) - 1;
	int (*p)[si] = &arr;
	
	for(i=0;i<=si;i++){
		printf("%d ", (*p)[i]);
	}
	*/
	//正常用法
	int arr[3][5] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7}; 
//	print1(arr, 3, 5);
	print2(arr, 3, 5);
	
	return 0;
}

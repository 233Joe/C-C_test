#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)b -*(int*)a );
}


int main()
{ 
	int arr[] = {88, 42, 12, 11, 5, 6, 7, 8, 9, 10};
	int num = sizeof(arr)/sizeof(arr[0]);
	qsort(arr, num, sizeof(arr[0]), cmpfunc);
	
	for(int i=0;i<num;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

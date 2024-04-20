#include<stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int si = 0, i = 0;
	int *p = arr;
	si = sizeof(arr)/sizeof(arr[0]);
	
	for(i = 0 ; i < si ; i++)
		printf("%d", *p+i);
	
	return 0;
}

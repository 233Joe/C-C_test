#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 0, 0};
	int x = 800700;

	int sz = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=sz-1;i>=0;i--)
	{
		arr[i] += x % 10 ;
		x = x/10;
		if(arr[i] >= 10 && i-1 >= 0)
		{
			arr[i-1] += arr[i]/10;
			arr[i] = arr[i]%10;
		}
	}
	if(arr[0] >= 10)
	{
		int* parr = (int*)malloc((sz+1)*4);
		memset(parr, 0, (sz+1)*4);
		memcpy(parr+1, arr, (sz+1)*4);
		parr[0] += parr[1]/10;
		parr[1] = parr[1]%10;
		
		for(int i=0;i<=sz;i++)
		{
			printf("%d ", parr[i]);
		}
	}
	else
	{
		for(int i=0;i<sz;i++)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int arr[] = {1, 2, 3, 5, 1, 3, 5};
	int sz = sizeof(arr)/sizeof(arr[0]);
	
	int ans = 0;
	int i = 0;
	for(i=0;i<sz;i++)
	{
		ans ^= arr[i];
	}
	
	printf("%d", ans);
	return 0;
}

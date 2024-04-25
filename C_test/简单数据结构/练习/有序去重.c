#include<stdio.h>
int main()
{
	int arr[] = {1, 1};
	int cur = 0, prev = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	while(cur < sz)
	{
		if(arr[cur] != arr[prev])
		{
			prev++;
			arr[prev] = arr[cur];
		}
		cur++;
	}
	for(int i=0;i<=prev;i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}

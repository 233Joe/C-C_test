#include<stdio.h>
int main()
{
	int x = 0, i = 0, max = 0, n = 0;
	int arr[100000] = {0};
	scanf("%d", &x);
	for(i=0;i<x;i++)//5 4 3 2 1
	{
		scanf("%d", &n);
		arr[n] = 1;
		if(n > max) max = n;
	}
	for(i=0;i<=max;i++)
	{
		if(arr[i] == 1){
			printf("%d ", i);
		}
	}
	return 0;
}

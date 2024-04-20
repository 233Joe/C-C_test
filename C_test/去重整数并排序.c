#include<stdio.h>
int main()
{
	int arr[1000] = {0};
	int i = 0, n = 0, x = 0, max = 0;
	scanf("%d", &n);
	for(i = 0;i < n; i++)
	{
		scanf("%d", &x);
		if(x > max){
			max = x;
		}
		arr[x] = 1;
	}
	for(i = 1;i<=max;i++)
	{
		if(arr[i] == 1){
			printf("%d ", i);
		}
	}
	return 0;
}

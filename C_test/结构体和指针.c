#include<stdio.h>
int main()
{
	int i = 0, n = 0, arr[100] = {0},x = 0, a = 0, j = 0;
	scanf("%d", &n);
	for(i = 0;i<n;i++) scanf("%d", &arr[i]);
	scanf("%d", &x);
	for(i=0;i<n;i++)
	{
		if(arr[i] == x)
		{
			arr[i] = 0;
			a++;
		}
	}
	printf("%d\n", n-a);
	for(i=0;i<n;i++)
	{
		if(arr[i] != 0) printf("%d ", arr[i]);
	}
	
	return 0;
}

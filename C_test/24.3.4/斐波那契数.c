#include<stdio.h>
//斐波那契数列
//递归方法二
int Fibonacci(int arr[],int n)
{
	if(n < 3)
		return 1;
	return Fibonacci(arr, n-2) + Fibonacci(arr, n-1);
}
int main()
{
//方法一
	int n = 0, i = 0, j = 0, arr[100] = {1,1};
	scanf("%d", &n);
	
	for(int i=2;i<n;i++)
	{
		for(j=1;j<i;j++)
			arr[i] = arr[j-1] + arr[j] ;
	}
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	printf("%d ", Fibonacci(arr, n));
	
	return 0;
}

#include<stdio.h>
//实现阶乘
//方法二递归
int factorial(int x)
{
	if(x)
	return (x*factorial(x-1));
	return 1;
}
int main()
{
//方法一
	int i = 0, x = 0, num1 = 1;
	scanf("%d", &x);
	for(i=1;i<=x;i++)
		num1 *= i;
	
	printf("方法一:%d 方法二:%d", num1, factorial(x));
	return 0;
}

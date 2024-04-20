#include<stdio.h>
//方法一：可进行正负数原码二进制位对比
//整型十进制转二进制存进数组
void convert(int arr[], int n)
{
	int i = 0;
	if(n < 0)
		arr[0] = 1;
	else
		arr[0] = 0;
	for(i=31;i>0;i--)
	{
		arr[i] = n % 2;
		n /= 2;
	}
}
//打印数组函数
void print(int arr[], int si)
{
	int i = 0;
	for(i=0;i<=si;i++)
		printf("%d", arr[i]);
	printf("\n");
}
//比较二进制位数差异
int compare1(int arr1[], int arr2[])
{
	int i = 0, n = 0;
	for(i=0;i<32;i++)
	{
		if(arr1[i] != arr2[i])
			n++;
	}
	return n;
}

//方法二：对比两个数二进制位不同，一正一负不准
int compare2(int x, int y)
{
	int i = 32, n = 0;
	while(i--)
	{
		if(x % 2 != y % 2)
			n++;
		x/=2;
		y/=2;
	}
	return n;
}
int main()
{
	int arr1[32] = {0};
	int arr2[32] = {0};
	int m = -1, n = 1, si = 0;
	si = sizeof(arr1)/sizeof(arr1[0]) - 1;
	convert(arr1, m);
	convert(arr2, n);
	print(arr1, si);
	print(arr2, si);
	
	printf("m和n的二进制有%d位不同\n", compare1(arr1, arr2));
	printf("m和n的二进制有%d位不同\n", compare2(m, n));
	return 0;
}

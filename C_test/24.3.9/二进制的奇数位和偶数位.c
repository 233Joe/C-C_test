#include<stdio.h>
//可进行正负数原码二进制奇偶数位打印
int binary(int x, int i, int a)
{
	static int n = 0;
	if(x < 0)
	{
		n = 1;
		x *= -1;
	}

	if(i>2)
	{
		binary(x/2, i-1, a);
		if((i % 2 == 0 && a == 0) || (i % 2 != 0 && a == 1))
			printf("%d ", x%2);
		return 0;
	}
	//a用于判断是否为偶数,n判断是否为正负数
	if(a == 0)
		printf("%d ", n);
	return 0;
}

int main()
{
	int x = 0;
	scanf("%d", &x);
	//打印二进制偶数位，0表示偶数
	printf("偶数位:");
	binary(x, 32, 0);

	//打印二进制奇数位，1表示奇数
	printf("\n奇数位:");
	binary(x, 34, 1);
	return 0;
}

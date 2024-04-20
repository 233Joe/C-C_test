#include<stdio.h>
	
//大小置换
void Size(int* big, int* small)
{
	int a = 0;
	if(*big < *small)
	{
		a = *big;
		*big = *small;
		*small = a; 
	}
}

int main()
{
	int a = 0, b = 0, big = 0, small = 0, num = 0;
	scanf("%d %d", &a, &b);
	
	big = a, small = b;
	Size(&big, &small);
	//更相减损法
	//最大公约数
	while(big != small)
	{
		if(big > small)
			big = big - small;
		
		else if(big < small)
			Size(&big, &small);
	}
	num = big;
	printf("最大公约数为:%d\n", num);
	
	//辗转相除法
	//最大公约数
	big = a, small = b;
	Size(&big, &small);
	
	while(big % small != 0)
	{
		if(big > small)
			big = big % small;
		
		Size(&big, &small);
	}
	num = small;
	printf("最大公约数为:%d\n", num);
	
	//最小公倍数
	//最小公倍数== (a*b)/最大公约数
	printf("最小公倍数为%d", ((a * b)/num));

	return 0;
}

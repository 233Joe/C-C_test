#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0 , max = 0;
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b ? a:b);

	printf("最大值是%d", max > c ? max:c);
	
	return 0;
}

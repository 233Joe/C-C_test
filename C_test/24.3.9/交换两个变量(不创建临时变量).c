#include<stdio.h>
int main()
{
	//方法一
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int m = a, n = b;
	
	printf("交换前:a=%d  b=%d\n", a, b);
	a += b;
	b = a - b;
	a -= b;
	printf("交换后:a=%d  b=%d\n", a, b);

	//方法二
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("交换后:m=%d  n=%d\n", m, n);
	return 0;
}

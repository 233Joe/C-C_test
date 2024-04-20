#include<stdio.h>
int compare(int* a, int* b)
{
	int n = 0;
	n = *a;
	*a = *b;
	*b = n;
}
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a > b)
	{
		compare(&a, &b);
	}
	if(b > c)
	{
		compare(&b, &c);
	}
	if(a > b)
	{
		compare(&a, &b);
	}
	printf("%d %d %d", a, b, c);
	return 0;
}

#include<stdio.h>
int DigitSum(int n)
{
	if(n != 0)
		return (n % 10) + DigitSum(n/10);
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", DigitSum(n));
	return 0;
}

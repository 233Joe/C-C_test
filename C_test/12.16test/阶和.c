#include<stdio.h>

void print(int n , long long i)
{
	if(n > 0)
	{
		i+=n;
		print(n-1, i);
	}
	else
	{
		printf("%lld", i);
	}	
}
int main()
{
	int num = 0;
	long long i = 0;
	scanf("%d", &num);
	print(num, i);
	return 0;
}

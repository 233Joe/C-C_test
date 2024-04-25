#include<stdio.h>

void print(int n )
{
	if(n > 5)
	{
		print(n/6);
	}	
	printf("%d", n%6);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);

	return 0;
}

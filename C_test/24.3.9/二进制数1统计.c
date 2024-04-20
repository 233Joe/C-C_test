#include<stdio.h>
int main()
{
	int x = 0, n = 0;
	scanf("%d", &x);
	int i = 0;
	for(i=31;i>=0;i--)
	{
		printf("%d", (x >> i)  & 1);
		if((( x >> i ) & 1) == 1 )
			n++;
	}
	printf("  %d个1", n);
	return 0;
}

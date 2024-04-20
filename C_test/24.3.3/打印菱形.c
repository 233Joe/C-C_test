#include<stdio.h>

int main()
{
	int x = 0, num = 0, i = 0, j = 0;
	scanf("%d", &num);
	x = num/2;
	for(i=0;i<=x;i++)
	{
		for(j=x;j>i;j--)
			printf("  ");
		
		for(j=0;j<i*2+1;j++)
			printf("* ");
		printf("\n");
	}
	for(int i=x;i>0;i--)
	{
		for(j=x;j>=i;j--)
			printf("  ");
		
		for(j=0;j<i*2-1;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}

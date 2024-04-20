#include<stdio.h>
int main()
{
	int i = 0, j = 0, x = 0;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i % j == 0)
			{
				break; 
			}
			else
				printf("%d ", i);
		}
			
	}
	return 0;
} 

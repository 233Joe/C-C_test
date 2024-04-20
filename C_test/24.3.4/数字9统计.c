#include<stdio.h>
int main()
{
	int i = 0, x = 0, num = 0, g = 0;
	for(i=1;i<=1000;i++)
	{
		x = i;
		while(x != 0)
		{
			g = x % 10;
			if(g % 9 == 0 && g != 0)
			{
				num++;
				printf("%d ", i);
				break;
			}
			else
				x = x / 10;
		}
	}
	return 0;
}

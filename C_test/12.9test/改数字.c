#include<stdio.h>
int main()
{
	int i = 0, num = 0, x = 0;
	int j = 1;
	scanf("%d", &num);
	i = num;
	while(i)
	{
		if((i % 10) % 2 != 0)
		{
			x += j*1;
		}
		j *= 10;
		i/=10;
	}
	printf("%d", x);

	return 0;
}

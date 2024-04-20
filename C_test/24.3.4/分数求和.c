#include<stdio.h>
int main()
{
	int i = 0;
	double num = 0;
	for(i=1;i<=100;i++)
	{
		if((i % 10) % 2 == 0)
			num -= (1.0/i);
		else 
			num += (1.0/i);
	}
	printf("%lf", num );
	return 0;
}

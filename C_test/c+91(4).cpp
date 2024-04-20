#include <stdio.h>
int main()
{
	int i,sum=0,o,sum1=0,sum2=0;
	for(i=0;i>=-50;i=i-2)
	{
	sum=i+sum;	
	}
	printf("sum=%d\n",sum);
	for(o=1;o<=50;o=o+2)
	{
	sum1=o+sum1;
	}
	printf("sum1=%d\n",sum1);
	sum2=sum+sum1;
	printf("sum2=%d",sum2);
}

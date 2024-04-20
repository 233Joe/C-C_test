#include <stdio.h>
int main()
{
	int d,y;
	scanf("%d",&d);
	if(d>=3000)	y=d*0.9;
	if(d>=5000)	y=d*0.8;
	if(d>=1000)	y=d*0.95;
	if(d<1000)  y=d;
	printf("%d元",y);
	return 0;
}

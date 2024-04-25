#include<stdio.h>
int main()
{
	long long max_a = 0, least_m = 0, a = 0, b = 0;
	long long a1 = 0, b1 = 0;
	scanf("%lld %lld", &a, &b);
	a1 = a;
	b1 = b;
	//更相减损法
	while(a1 != b1){
		if(a1>b1)
			a1 = a1 - b1;
		if(b1>a1)
			b1 = b1 - a1;
	}
	max_a = a1;
	
	least_m = (a*b)/max_a;
	printf("%lld", max_a+least_m);
	return 0;
}

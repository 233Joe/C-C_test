#include<stdio.h>

#define MY_EXCHANGE(x) (((x) & 0x55555555)<<1) + (((x) & 0xaaaaaa)>>1)

int main()
{
	
	int x = 0;
	scanf("%d", &x);
	printf("%d ",MY_EXCHANGE(x));

	return 0;
}

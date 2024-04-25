#include<stdio.h>
int main()
{//hour:minute k(如hour或minute
	int h = 0, m = 0, k = 0;
	scanf("%d:%d %d", &h, &m, &k);
	h = ((k + m)/60 + h) % 24 ;
	m = (k + m) % 60;
	printf("%02d:%02d", h, m);
	return 0;
}

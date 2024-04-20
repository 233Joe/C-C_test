#include<stdio.h>
int count(int n, int k)
{
	if(k != 0)
		return n * count(n, k-1);
	return 1;
}
int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	
	printf("n的k次方为:%d", count(n, k));
	return 0;
}

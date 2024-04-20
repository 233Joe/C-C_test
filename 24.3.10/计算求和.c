#include<stdio.h>
int main()
{
	int i = 0, a = 0, sn = 0;
	scanf("%d", &a);
	for(i=0;i<5;i++)
	{
		sn += a;
		a = 10 * a + 2;
	}
	printf("%d", sn);
	return 0;
}

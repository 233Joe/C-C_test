#include <stdio.h>
void test(int a)
{
	int b=20;
	printf("%d\n",a+b);
}
int main()
{
	int i=2,j=3,k;
	k=i+j;
	{
		int k=8;
		printf("%d\n",k);
	}
	printf("%d\n",k);
	test(k);
	return 0;
}

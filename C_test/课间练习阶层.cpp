#include <stdio.h>
long factor(int n)
{
	int i;
	long f=1;
	for (i=1;i<=n;i++)
		f=f*i;
	return f;
}
long sum(int m)
{
	int i;
	long s=0;
	for(i=1;i<=m;i++)
		s=s+factor(i);
	return s;
}
int main()
{
	int n;
	long s;
	printf("please input a number:");
	scanf("%d",&n);
	s=sum(n);
	printf("1!+2!+.........%d!=%ld",n,s);
	return 0;
}

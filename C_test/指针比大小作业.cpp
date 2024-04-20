#include<stdio.h>
int main()
{
	int a,b,s,t,r,*pa,*pb;
	scanf("%d %d",&a,&b);
	pa=&a;
	pb=&b;
	if(*pa>*pb)
	printf("%d %d",a,b);
	else
	printf("%d %d",b,a);
}



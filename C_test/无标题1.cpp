#include<stdio.h>
void inv(int *x,int n)
{
	int *p,*i,*j,m,t;
	m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;
	for(;i<=p;i++,j--)
	{t=*i;*i=*j;*j=t;}
}
int main()
{
	int i,arr[10],*p=arr;
	printf("原来的数值\n");
	for()
}



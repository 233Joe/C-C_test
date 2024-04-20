#include<stdio.h>
int main()
{
	int c=15,d=30,e=100,s,t,r,*pa,*pb,*pr;
	pa=&c;
	pb=&d;
	pr=&e;
	s=*pa+*pb;
	t=*pa**pb;
	r=*pr*t;
	printf("c=%d\td=%d\tc+d=%d\tc*d=%d\te*c*d=%d\n",c,d,c+d,c*d,e*t);
	printf("s=%d\tt=%d\n",s,t,r);
}



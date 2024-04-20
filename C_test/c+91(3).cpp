#include <stdio.h>
int main()
{
	int n,i;
	for(n=3;n<=100;n=n+1)
	{
		for(i=2;i<=n-1;i=i+1)
			if(n%i==0)break;
		if(i>=n)printf("%d\t",n);
	}
}

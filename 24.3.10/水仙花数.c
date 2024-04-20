#include<stdio.h>
int digit(int i)
{
	int x = 1;
	if(i != 0 && i / 10)
		return	x += digit(i/10);
	return x;
}
int main()
{
	int i = 0, n = 0, x = 0, j = 0, sum = 0, g = 0;
	for(i=0;i<=100000;i++)
	{
		sum = 0;
		x = digit(i);
		n = i;
		while(n){
			g = n % 10;
			for(j=1;j<x;j++)
				g *= n % 10;	
			sum += g;
			n /= 10;
		}
		if(sum == i || x == 1)
			printf("%d ", i);
	}
	return 0;
}

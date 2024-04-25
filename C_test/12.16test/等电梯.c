#include<stdio.h>
int main()
{
	int n = 0, m = 0;
	scanf("%d", &n);
	if(n>=12){
		m =  n/12 * 4;
	}
	printf("%d", m+2);
	return 0;
}

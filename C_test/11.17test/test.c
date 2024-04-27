#include<stdio.h>
int main(){	
	int x = 1;
	int *p = &x;
	

	printf("%d", x);
	++*p;
	printf("\n%d", x);

}

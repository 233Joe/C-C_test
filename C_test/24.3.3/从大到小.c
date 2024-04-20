#include<stdio.h>

void sort1(int* a, int* b, int* c)
{
	int x = 0;
	if(*a < *b){
		x = *a;
		*a = *b;
		*b = x;
	}
	if(*a < *c){
		x = *a;
		*a = *c;
		*c = x;
	}
	if(*b < *c){
		x = *b;
		*b = *c;
		*c = x;
	}
}

int main()
{
	int a = 0, b = 0, c = 0;
	
	scanf("%d %d %d", &a, &b, &c);	
	sort1(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	
	return 0;
}

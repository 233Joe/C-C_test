#include<stdio.h>
int main(){	
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int x = 1;

	while((a*x) % b){
		
		x++;
	}
	
	
	printf("%d", a*x);

	return 0;
}

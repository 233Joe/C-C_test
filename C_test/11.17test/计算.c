#include<stdio.h>
int main(){	
	int m = 0;
	scanf("%d", &m);
	int x = m;

	while(m>=2){
		x += m / 2;
		m = m / 2 +  m % 2;
	}
	printf("%d", x);
	return 0;
}

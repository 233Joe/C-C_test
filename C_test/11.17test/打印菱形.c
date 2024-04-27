#include<stdio.h>
int main(){
	int i = 0;
	int i1 = 0;
	int j = 0;
	int n = 0;
	int k = 0;
	int y = 0;
	scanf("%d", &n);

	//printf("%d", n/2);

	for(i=0; i<(n/2); i++){
		for(k=0; k<(n/2)-i-1; k++){
			printf(" ");
		}
		for(j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");

	}
	for(i=0; i<(n/2); i++){
		for(k=0; k<=i; k++){
			printf(" ");
		}
		for(j=0; j<2*((n/2)-1-i)-1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

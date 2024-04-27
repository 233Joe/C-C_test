#include<stdio.h>
int main(){
	int i = 0;
	int j = 0;
	int k = 0;
	int x = 0;
	scanf("%d", &x);
	
	for(i=0;i<=x;i++){
		
		for(j=x;j>i;j--){
			printf("  ");
		}
		for(k=0;k<=i;k++){
			printf("*");
		}	
		printf("\n");
	}
	for(i=0;i<x;i++){
		
		for(j=0;j<i+1;j++){
			printf("  ");
		}
		for(k=x;k>i;k--){
			printf("*");
		}	
		printf("\n");
	}

	return 0;
}

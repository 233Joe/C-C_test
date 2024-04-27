#include<stdio.h>
int main(){
	int i = 0;
	int j = 0;
	int x = 0;
	scanf("%d", &x);
	
	for(i=0;i<=x;i++){
		
		for(j=x;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}
	for(i=0;i<x;i++){
		
		for(j=0;j<=i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

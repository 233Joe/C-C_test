#include<stdio.h>
int main(){
	int i = 0;
	int x = 0;
	
	while(scanf("%d", &x)!=EOF){
		for(i=0;i<x;i++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

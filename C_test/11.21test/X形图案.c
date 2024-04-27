#include<stdio.h>
int main(){
	int i = 0;
	int x= 0;
	int k = 0;
	
	while(scanf("%d", &x) !=EOF){
		for(i=0; i<x; i++){
			
			for(k=0;k<x;k++){
				if(i == k){
					printf("*");
				}
				else if(i + k == (x-1)){
					printf("*");
				}
				else{
					printf(" ");
				}
				
			}
			printf("\n");
		}
	}
	
	return 0;
}

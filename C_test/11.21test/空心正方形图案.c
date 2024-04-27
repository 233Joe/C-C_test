#include<stdio.h>
int main(){
	int i = 0;
	int x= 0;
	int j = 0;
	
	while(scanf("%d", &x) !=EOF){
		for(i=0; i<x; i++){
			
			for(j=0;j<x;j++){
				if(i == 0 || i == (x-1)){
					printf("* ");
				}
				else if(j == 0 || j == (x-1)){
					printf("* ");
				}
				else{
					printf("  ");
				}
				
			}
			printf("\n");
		}
	}
	
	return 0;
}

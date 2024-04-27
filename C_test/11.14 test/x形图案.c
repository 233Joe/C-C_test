#include <stdio.h>
int main(){
	int i = 0;
	int j = 0;
	int num = 0;
	scanf("%d", &num);
	for(i=0; i<num; i++){
		for(j=0; j<=num; j++){
			if(i == j || (j + i) == (num-1)){
				printf("*");	
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}

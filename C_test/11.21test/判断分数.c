#include<stdio.h>
int main(){
	int score= 0;
	
	while(scanf("%d", &score) != EOF){
		
		if(score >= 10){
			printf("Danger++");
		}
		else if(score >= 4 && score <= 9){
			printf("Danger");
		}
		else{
			printf("Good");
		}
	}

	
	return 0;
}

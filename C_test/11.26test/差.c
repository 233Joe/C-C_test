#include<stdio.h>
int main(){
	int i = 0;
	int x = 0;
	int num =0;
	int least = 10000;
	int max = 0;
	
	scanf("%d", &x);
	for(i=0;i<x;i++){
		scanf("%d", &num);
		
		if(least > num){
			least = num;
		}
		if(max < num){
			max = num;
		}
	}
	printf("%d\n" , max-least);
	return 0;
}

#include<stdio.h>
int main(){
	int i = 0;
	int x = 0;
	int num =0;
	int sum = 0;
	
	scanf("%d", &x);
	for(i=0;i<x;i++){
		scanf("%d", &num);
		sum += num;
	}
	printf("%d\n" , sum);
	return 0;
}

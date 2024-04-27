#include<stdio.h>
int main(){
	float h= 0;
	float mean = 0;

	while(scanf("%f", &h) != EOF){
		mean += h;
	}
		printf ("%.2f", mean /= 5);
	
	return 0;
}

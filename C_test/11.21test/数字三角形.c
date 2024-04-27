#include<stdio.h>
int main(){
	int max= 0;
	float mean = 0;
	int num = 0;
	int least = 0;
	float x = 0;

	while(scanf("%d", &num) != EOF){
		if(x==0){
			least = num;
		}
		if(max < num){
			max = num;
		}
		if(least > num){
			least = num;
		}
		mean += num;
		x++;
		if(x == 7){
			mean = mean - max - least;
			printf("%0.2f\n", mean /= (x-2));
			x = 0;
			max = 0;
			least = 0;
			mean = 0;
		}
	}
	return 0;
}

#include<stdio.h>

int main(){
	int i = 0;
	int j = 0;
	int num = 0;
	for(i = 10000; i <= 99999; i++){
		num = 0;
		for(j = 10; j <= 10000; j *= 10){
			num += (i/j)*(i%j);
		}
		if(num == i){
			printf("%d ", i);
		}
	}
	return 0;
}

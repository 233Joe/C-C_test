#include<stdio.h>
#include <math.h>

int main(){
	int i = 0;
	int j = 0;
	int num = 0;
	int n = 0;
	int i1 = 0;

	for(i=0; i<=100000; i++){
		num = 0;
		i1 = i;
		n = 0;
		while(i1){
			i1 /= 10;
			n++;
		}
		
		i1 = i;
		for(j=0; j<n; j++){
			num += pow((i1 % 10), n);
			i1 /= 10;
		}

		if(i == num){
			printf("%d\n", num);
		}
	}
	return 0;
}



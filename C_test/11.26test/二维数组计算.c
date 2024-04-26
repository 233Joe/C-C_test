#include<stdio.h>
int main(){
	int i = 0;
	int j = 0;
	float num = 0;
	float arr[5][5] ={0};

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%f", &arr[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		num = 0;
		for(j=0;j<5;j++){
			printf("%.1f ", arr[i][j]);
			num += arr[i][j];	
		}
		printf("%.1f\n", num);
	}
	return 0;
}

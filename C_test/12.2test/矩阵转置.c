#include<stdio.h>
int main(){
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;
	int arr1[20][20] = {0};

	scanf("%d %d", &x, &y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &arr1[i][j]);
		}
	}	
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			printf("%d ", arr1[j][i]);
		}
		printf("\n");
	}
	return 0;
}

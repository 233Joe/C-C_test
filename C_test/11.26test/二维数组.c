#include<stdio.h>
int main(){
	int i = 0;
	int x = 0;
	int y = 0;
	int j = 0;
	int arr[10][10] ={0};

	scanf("%d %d", &x, &y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &arr[i][j]);
			printf("%d ", arr[i][j]);
			
		}
		printf("\n");
	}

	return 0;
}

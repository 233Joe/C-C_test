#include<stdio.h>
int main(){
	int i = 0;
	int x = 0;
	int y = 0;
	int j = 0;
	int arr[10][10] ={0};
	int x1 = 0;
	int y1 = 0;
	scanf("%d %d", &x, &y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
		scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d %d", &x1, &y1);
	printf("%d", arr[x1-1][y1-1]);

	return 0;
}

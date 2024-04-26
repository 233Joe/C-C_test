#include<stdio.h>
int main(){
	int i = 0;
	int j = 0;
	int n =0;
	int m = 0;
	int num = 0;
	int arr[100][100] = {0};
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++){
		for(j=0;j<m;j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j] > 0){
				num += arr[i][j];
			}
		}
	}
	printf("%d", num);

	
	return 0;
}

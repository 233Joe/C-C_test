#include<stdio.h>
int main(){
	int i = 0;
	int j = 0 ;
	int arr1[10][10] = {0};
	int arr2[10][10] = {0};
	int n = 0;
	int m = 0;
	double x = 0.0;
	int num = 0;
	
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++){
		for(j=0; j<m;j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0; j<m;j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	
	x = 100.0/(n*m);
	for(i=0; i<n; i++){
		for(j=0;j<m;j++){
			if(arr1[i][j] == arr2[i][j]){
				num++;
			}
		}
	}
	printf("%.2lf\n", x*num);
	return 0;
}

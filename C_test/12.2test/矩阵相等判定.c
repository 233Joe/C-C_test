#include<stdio.h>
#include <string.h>
int main(){
	int arr1[20][20] = {0};
	int arr2[20][20] = {0};
	int n = 0;
	int m = 0;
	int i = 0;
	int j = 0;
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(arr1[i][j] != arr2[i][j]){
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes");
	return 0;
}

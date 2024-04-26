#include<stdio.h>
int main(){
	int i = 0;
	int n = 0;
	int m = 0;
	int arr1[1000] ={0};
	int arr2[1000] ={0};

	int x = 0;
	int y = 0;
	
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++){
		scanf("%d", &arr1[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d", &arr2[i]);
	}
	

	while(1){
		if(arr1[x] <= arr2[y]){
			printf("%d ", arr1[x]);
			x++;
		}
		if(n == x){
			for(i=y;i<m;i++){
				printf("%d ", arr2[i]);
			}
			break;
		}
		if(arr1[x] >= arr2[y]){
			printf("%d ", arr2[y]);
			y++;
		}
		if(m == y){
			for(i=x;i<n;i++){
				printf("%d ", arr1[i]);
			}
			break;
		}
	}	

	return 0;
}

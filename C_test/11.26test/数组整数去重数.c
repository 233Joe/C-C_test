#include<stdio.h>
int main(){
	int i = 0;
	int n = 0;
	int j = 0;
	int arr[100] ={0};
	int u = 0 ;
	int y = 0;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<n-u;i++){
		for(j=i+1;j<n-u;j++){
			if(arr[i] == arr[j]){
				for(y=j;y<n-u;y++){
					arr[y] = arr[y+1];	
				}
				i -= 1;
				u++;
			}
		}
	}
	for(i=0;i<n-u;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

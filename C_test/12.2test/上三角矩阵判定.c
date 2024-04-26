#include<stdio.h>

int my_judge(int(*arr)[10], int n){
	int i = 0;
	int j = 0;
	for(i=1; i<n; i++){
		for(j=0; j<i; j++){
			if(arr[i][j] != 0){
				return 1;
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(arr[i][j] == 0){
				return 1;
			}
		}
	}	
	return 0;
}
int main()
{	
	int arr[10][10] = {0};
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	if(my_judge(arr, n)){
		printf("No");
	}
	else{
		printf("Yes");
	}
	return 0;	
}

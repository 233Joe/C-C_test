#include<stdio.h>

void num(int* p, int i, int n){
	int j = 0;
	for(j=2;j<=n;j++){
		if((p[i] != j && (p[i] % j == 0 && p[i] % j == 0))){
			p[i] = 0;
			break;
		}
	}	
}

int main(){
	int n = 0;
	int i = 0;
	int arr[100] = {0};
	int x = 0;
	scanf("%d", &n);
	
	for(i=2; i<n; i++){
		arr[i] = i;
		num(arr, i, n);
	}

	for(i=1; i<n; i++){
		if(arr[i] != 0){
			printf("%d ", arr[i]);
		}
		else{
			x++;
		}
	}
	printf("\n%d ", x);

	return 0;
}

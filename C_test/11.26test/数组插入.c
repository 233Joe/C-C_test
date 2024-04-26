#include<stdio.h>
int main(){
	int i = 0;
	int n = 0;
	int j = 0;
	int num = 0;
	int arr[100] ={0};
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &num);
	
	if(num < arr[n-1]){
		for(i=0;i<n;i++){
			if(arr[i] > num){
				for(j=n;j>=i;j--){
					arr[j] = arr[j-1];
				}
				arr[i] = num;
				break;
			}
		}
	}
	else{
		arr[n] = num;
	}

	for(i=0;i<=n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

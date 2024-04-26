#include<stdio.h>
int main(){
	int i = 0;
	int n = 0;
	int j = 0;
	int num = 0;
	int arr[100] ={0};
	int u = 0 ;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &num);
	

		for(i=0;i<n;i++){
			if(arr[i] == num){
				for(j=i;j<n;j++){
					arr[j] = arr[j+1];
					
				}
				i -= 1;
				u++;
			}
		}
	

	for(i=0;i<n-u;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

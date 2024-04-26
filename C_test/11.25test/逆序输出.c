#include <stdio.h>

int main() {
	int i = 0;
	int arr[100] = {0};
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
	}
	for(i=10-1; i>=0; i--){
		printf("%d ", arr[i]);
	}
	
	
	return 0;
}

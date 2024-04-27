#include <stdio.h>

int main(){
	int n = 0;
	int arr[50] = {0};
	int num1 = 0;
	int num2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int x = 0; x< n; x++) {
		num1 = arr[x];
		for (int j = x; j<n; j++) {
			if (arr[j]>num1) {
				num1 = arr[j];
				arr[j] = arr[x];
				arr[x] = num1;
			}
		}
	}
	for (int i = 0; i<n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}

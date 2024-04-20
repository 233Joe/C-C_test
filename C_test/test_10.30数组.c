#include<stdio.h>
void bubble_sort(int arr[], int sz){
	int i = 0;
	for(i=0;i<sz-1;i++){
		for(int y=0;y < sz-i-1;y++){
			if(arr[y] < arr[y+1]){
				int num = 0;
				num = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = num;
			}
		}
	}
}
int main(){
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int sz = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, sz);

	for(int i=0;i < sizeof(arr)/sizeof(arr[0]);i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

#include <stdio.h>

void init(int arr[], int sz){//初始化数组全为0
	
	for(int i=0;i<sz;i++){
		arr[i] = 0;
	}
}

void print(int arr[], int sz){//打印函数
	for(int i=0;i<sz;i++){
		printf("%d ", arr[i]);
	}
		printf("\n");
}

void reverse(int arr[], int sz){//完成数组元素逆序
	int l = 0;
	int r = sz - 1;
	while(l < r){
		int num = arr[l];
		arr[l] = arr[r];
		arr[r] = num;
		l++;
		r--;
	}
	
}

int main(){
	int sz = 0;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	sz = sizeof(arr)/sizeof(arr[0]);
	
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	
	return 0;
}




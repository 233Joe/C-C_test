#include<stdio.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, size_t num){
	assert(src);
	void* a = dest; 
	while(num--){
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return a;
}

int main(){
	int arr1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[20] = {0};
	my_memcpy(arr2, arr1, 20);
	int i = 0;
	for(i = 0;i<10;i++){
		printf("%d", arr2[i]);
	}
	return 0;
}

#include<stdio.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, size_t num){
	assert(src);
	void* a = dest;
	if(dest <= src){
		while(num--){
			*(char*)dest = *(char*)src;
			dest = (char*)dest +  1;
			src = (char*)src + 1;
		}	
	}
	else{
		while(num--){
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return a;
}

int main(){
	int arr1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[20] = {0};
	my_memcpy(arr1+4, arr1+2, 20);
	int i = 0;
	for(i = 0;i<10;i++){
		printf("%d", arr1[i]);
	}
	return 0;
}

#include<stdio.h>

int my_dx(const void* e1,const void* e2){
	return (int*) e2 - (int*) e1;
}

void swap(char* e1,char* e2 , int width){
	int i = 0;
	for(i=0;i<width;i++){
		char ch = *e1;
		*e1 = *e2;
		*e2 = ch;
		e1++;
		e2++;
	}
}



void my_qsort(void* base, int num, int width, int(* cmp)(const void* e1,const void* e2)){
	
	int i = 0;
	int j = 0;
	int flag = 0;
	for(i=0; i<num-1-1; i++){
		
		for(j=0; j<num-i; j++){
			if(cmp((char*)base + j*width, (char*)base + (j+1)*width) > 0){
				swap((char*)base + j*width, (char*)base + (j+1)*width, width);
				flag++;
			}
		}
		if(flag == 0){
			break;
		}
	}
}


int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6 ,7, 8 ,9};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	my_qsort(arr, sz, sizeof(arr[0]), my_dx);
	
	for(i=0;i<sz;i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

#include <stdio.h>
/*
int main(){
	int num[4] = {0};
	for (int i = 3; 0 <= i; i--) {
		scanf("%d", &num[i]);
		printf("%d", num[i]);
	}
	
	
	
	return 0;
}

int main(){
	int a = 1;
	int n = 0;
	int num = 0;
	scanf("%d", &n);
	for(int l=1;l<=n;l++){
		
		a *= l;
		num += a;
			
	}
	printf("%d %d\n", num, a);
	
	
	return 0;
}
*/

int main(){
	int left = 0, right = 0, num = 0, a = 0;
	int arr[20] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 
	scanf("%d", &num);
	right  = sizeof (arr)/sizeof(arr[0]);
	right -= 1;
	while(left <= right){
		a = (right+left) / 2;
		
		if(arr[a] < num){
			
			left = a + 1;
		}
		
		else if(arr[a] > num){	
			right = a - 1;
		}
		
		else{	
			printf("找到了下标为：%d", a);
			return 0;
		}

	}
	if(1){
		printf("找不到");
	}
	return 0;
}

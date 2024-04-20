#include <stdio.h>
/*判断闰年方法1
int main(){
	int year = 0;
	
	for(year= 1000;year <= 2000;year++){
		if(year %4 == 0){
			if(year % 100 != 0){
				printf("%d ", year);
			}
		}
		if(year % 400 == 0){
			printf("%d ", year);
		}
	}
	
	return 0;
}

//判断闰年方法2
int main(){
	
	int year = 0;
	for(year =1000;year<=2000;year++){
		if(year %4 == 0 && year % 100 != 0 || year % 400 == 0){
			printf("%d ", year);
		}
		
	}
		
	return 0;
}

//判断闰年方法3

int is_leap_year(int y){
	
	if(y %4 == 0 && y % 100 != 0 || y % 400 == 0){
		
		return 1;
	}
	return 0;
}

int main(){
	int year = 0;
	for(year = 1000;year<=2000;year++){
		if(is_leap_year(year)){
			printf("%d ", year);
		}
		
	}
		
	return 0;
}
*/

int price(int num, int arr[], int max){
	int left = 0;
	int right = max - 1;

	while(left <= right){
		int a = (left + right) / 2;
		
		if(num > arr[a]){
			
			left = a + 1;
		}
		else if(num < arr[a]){
			
			right = a - 1;
		}
		else
			return a;
		}
	if(left > right){
		return -1;
	}
	
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int max1 = sizeof(arr)/sizeof(arr[0]);
	int num = 0;
	scanf("%d", &num);
	
	int ret = price(num, arr, max1);
	
	if(ret == -1){
		printf("找不到，或输入有误");
			
	}
	else{
		printf("这个数下标为：%d", ret);
	}
	return 0;
}


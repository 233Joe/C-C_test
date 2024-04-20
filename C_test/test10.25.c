#include <stdio.h>
/*
int main() {
	long a = 0;
	scanf("%ld", &a);
	for (int i = 1; i<a; i++) {
		a = a * a;
		printf("%ld\n", a);
	}
	printf("%ld", a);
	return 0;
}
  
int main (){
	
	int num[] = {1, 2, 3, 4, 5};

	char arr[] = "abcd";
	char* arr1 = arr;
	printf("%p\n", arr);
	printf("%p\n", arr1);
	printf("%p\n", num);
	
	return 0;
}
int my_strlen(char* arr){
	
	if(*arr != '\0'){
		
		return 1 + my_strlen(arr + 1);
	}
	else
	return 0;
	
}

#include <string.h>
int main(){
	char arr[] = "abcd";
	
	int num1 = my_strlen(arr);
	int num2 = strlen(arr);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return 0;
}*/

int factorial(int x){
	
	if(x <= 1){
		return  1;
	}
	else
		return x* factorial(x-1);
	
}

int main(){
	int num1 = 0;
	int num2;
	scanf("%d", &num1);
	num2 = factorial(num1);

	printf("%d", num2);
	return 0;
}

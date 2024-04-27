#include <stdio.h>
/*
//方法1
int main (){
	int num1 = 15;
	int num2 = 100;
	int i = 0;
	int x = 0;
	for( i=0;i< 32;i++){
		if(((num1 >> i) & 1) != ((num2 >> i) & 1)){
			x++;
		}
	}
	printf("%d", x);
	
	return 0;
}*/


//方法2
int main(){
	
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int x = num1 ^ num2;
	int n = 0;
	while(x){
		x = x & (x-1);
		n++;
	}
	printf("%d", n);
	
	return 0;
}


#include <stdio.h>
/*
void max(int* px, int* py){
	int num = 0;
	num = *px;
	*px = *py;
	*py = num;	
}
int main(){
	int a = 0, b = 0, c = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a < b){
		max(&a, &b);
	}
	if(a < c){
		max(&a, &c);
	}
	if(b < c){
		max(&b, &c);
	}
	
	printf("%d %d %d", a, b, c);
	return 0;
}
  


int main(){
	int i = 0;
	for(i=3;i<=100;i+=3){
		printf("%d ", i);
		
	}
	
	
	return 0;
}
 


//最大公约数
int main(){
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int max1 = a < b ? a : b;
	int max2 = 0;
	
	for(int i=max1;i>=1;i--){
		if(a % i == 0 && b % i == 0){
			max2 = i;
			break;
		}
	}
	printf("%d\n", max2);
	return 0;
}*/

int main(){
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int max1 = 0;

	while(max1 = a % b){
		a = b;
		b = max1;
	}
	printf("%d\n", b);
	return 0;
}

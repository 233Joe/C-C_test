
#include <stdio.h>
/*
int main (){
	int a = 0, b = 0;
	scanf("%d %d",&a, &b);
	printf("%d %d\n", a/b,a%b);
	
	
	return 0;
}

int main(){

	char arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
	int num = 1, i = sizeof(arr);
	printf("%d\n", i);
	while(num <= i){
		printf("%c", arr[num]);
		num++;
		
	}
	
	return 0;
} 
*/
int main(){
	int y = 0, m = 0, d = 0;
	 
	scanf("%4d%2d%2d", &y, &m, &d);
	
	printf("year=%4d\n", y);//4d的意思是打印4位
	printf("month=%02d\n", m);//02d的意思是打印两位不足两位以0补足
	printf("date=%02d\n", d);
	return 0;
}

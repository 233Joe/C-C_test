/*
  //打印整数的个数
#include <stdio.h>
void num(int i){
	
	if(i <= 9){
		printf("%d ", i);
	}
	else{
		num(i / 10);
		printf("%d ", i%10);
	}	
}

int main(){
	int i = 0;
	scanf("%d", &i);
	
	num(i);
	return 0;
}

//计算阶乘方法一
#include<stdio.h>
int main(){
	int y = 0, num = 0;
	long long l = 1;
	scanf("%d", &num);	
	for(y = 1; y <= num; y++){
		l *= y;
	}
	printf("%lld", l);

	return 0;
}

int num2(int n){
	if(n <= 1){
		return 1;
	}
	else{
	//printf("%d \n",n);
	return n * num2(n - 1);
	}
}
#include <stdio.h>
int main(){
	int i = 0;
	int y = 1;
	scanf("%d", &i);
	y = num2(i);
	printf("%d \n", y);
	return 0;
}


void num1(int x, int y){
	if(x>1){
		num1(x-1, y*= x); 
		//printf("%d %d \n",x, y);
	}
	else
		printf("%d \n", y);
}

#include <stdio.h>
int main(){
	int i = 0;
	int y = 1;
	scanf("%d", &i);
	y = num1(i);
	printf("%d \n", y);
	return 0;
}

  
  
  递归
int my_strlen(char* i){
	int x = 0;
	while(*i != '\0'){
		i++;
		x++;
	}	
	return x;
}

  

void reverse_string(char* str){
	char tmp = *str;		//把字符串首字符赋值给tmp
	int len = my_strlen(str);	//计算str数组长度赋值给len
	*str = *(str+len-1);	//把字符串末尾字符赋值给首字符
	*(str+len-1) = '\0';	//把字符串末尾字符赋值为\0
	if(my_strlen(str+1) >= 2){	//判断字符串长度是否大于2
		reverse_string(str+1);//用str+1来改变首字符
	}
	*(str+len-1) = tmp;		//递归全部走完后把\0替换为之前赋值的字符
	
}

#include <string.h>
#include<stdio.h>
int main(){
	char arr[] = "abcdefg";
	
	reverse_string(arr);
	printf("%s", arr);
	
	return 0;
}

int DigitSum(unsigned int n){
	
	if(n>9){
	return	DigitSum(n/10)+n%10;
	}
	else
		return n;
}

#include <stdio.h>
	
int main(){
	unsigned int num = 0;
	scanf("%d", &num);
	int i = DigitSum(num);

	printf("%d \n", i);
  return 0;
}
  */


//计算n的k次方
int Pow(int n, int k){
	
	if(k > 1){
	return	n*Pow(n , k-1);
	}
	return n;
}

#include<stdio.h>
int main(){
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	
	int ret = Pow(n, k);
	printf("%d", ret);
	
	
	return 0;
}


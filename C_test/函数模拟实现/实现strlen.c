#include<stdio.h>
//实现strlen功能
//递归方法二
int size(char* arr)
{
	if(*arr)
		return 1+size(arr+1);
	return 0;
}
int main()
{
//循环方法一
	char arr[] = "qiaogenb"; 
	int i = 0;
	while(arr[i] != '\0')
		i++;
	
	printf("方法一循环:%d \n方法二递归:%d", i, size(arr));
	return 0;
}

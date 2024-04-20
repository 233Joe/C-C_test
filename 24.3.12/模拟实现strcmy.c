#include<stdio.h>
#include <assert.h>
int my_strcmy(char* str1, char* str2)
{
	assert(str1 && str2);
	while((*str1++ == *str2++) && *str1 != '\0');
	return (*str1 - *str2);
}

int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abcd";
	int a = my_strcmy(arr1, arr2);
	if(a > 0)
		printf(">");
	else if(a < 0)
		printf("<");
	else 
		printf("=");
	return 0;
}

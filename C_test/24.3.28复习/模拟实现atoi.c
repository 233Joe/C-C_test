#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int my_atoi(const char* str)
{
	int x = 0;
	int judge = 0;
	
	while(*str == ' ')	str++;

	if(*str == '-' || *str == '+')
	{
		if(*str == '-') judge = 1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		x = x * 10 + (*str - '0');
		str++;
	}
	return x * (judge? -1 : 1);
}
int main()
{
//	char ch[] = "1234abcd";
//	int a = 0;
//	a = my_atoi(ch);
//	printf("%d\n", a);
//	
//	a = atoi(ch);
//	printf("%d\n", a);
	
	int* x = NULL;
	x = calloc(3, 12);
	if(x == NULL)
	{
		printf("增容失败\n");
	}
	return 0;
}

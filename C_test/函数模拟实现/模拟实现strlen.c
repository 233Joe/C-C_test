#include<stdio.h>

size_t my_strlen(const char* c)
{
	size_t a = 0;
	while(*c != '\0')
	{
		a++;
		c++;
	}
	return a;
}

int main()
{
	char arr[] = "abcdefasdf";
	int a = my_strlen(arr);
	printf("%d", a);
	return 0;
}

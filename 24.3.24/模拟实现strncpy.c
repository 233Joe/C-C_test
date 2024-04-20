#include<stdio.h>

char* my_strcpy(char* dest,const char* src, size_t n)
{
	char* c1 = dest;
	while(n--)
	{
		*c1++ = *src++;
	}
	*c1 = '\0';
	return dest;
}

int main()
{
	char c1[50] = "0";
	char* c2 = "asdgdfg";
	my_strcpy(c1, c2, sizeof(c2));
	printf(c1);
	return 0;
}

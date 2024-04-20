#include<stdio.h>
#include<assert.h>
char *my_strncat(char *dest, const char *src, size_t n)
{
	assert(dest && src);
	char* c1 = dest;
	const char* c2 = src;
	while(*c1 != '\0')
	{
		c1++;
	}
	while(n--)
	{
		*c1++ = *c2++;
	}	
	return dest;	
}

int main()
{
	char ch1[50] = "abcdef";
	char* ch2 = "cccc";
	my_strncat(ch1, ch2, sizeof(ch2));
	printf(ch1);
	return 0;
}

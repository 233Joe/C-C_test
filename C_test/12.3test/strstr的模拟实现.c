#include<stdio.h>
#include <assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	const char* p = str1;
	const char* s1 = str1;
	const char* s2 = str2;

	while(*s1)
	{
		s1 = p;
		s2 = str2;
			while(*s1++ == *s2++)
			{
				if(*s2 == '\0')
				{
					return (char*)p;
				}
			}
		p++;
	}
	return NULL;
}

int main()
{
	char a[] = "dg";
	char b[] = "g";

	printf("%s", my_strstr(a, b));
	return 0;
}

#include<stdio.h>
#include <assert.h>
#include <string.h> 
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while(*p)
	{
		s2 = str2;
		s1 = p;
		while(*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
			return (char*) p;
		p++;
	}
	return NULL;
}
int main()
{
	char arr[] = "abcabcdabcddabcabcababcddcabcddabcddcabcccddcabcabcddcabcddhaa";
	char* c = "abcddcabcddhaa";
	printf("%s", my_strstr(arr, c));
	return 0;
}

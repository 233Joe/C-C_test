#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest,const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while(*dest++ = *src++);
	return ret;
}

int main()
{
	char arr[100] = {0};
	char *b = "abcdef";
	
	my_strcpy(arr, b);
	printf("%s", arr);
	return 0;
}

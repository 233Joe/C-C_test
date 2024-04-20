#include<stdio.h>
#include <assert.h>
char* my_strcat(char* dest, char* src)
{
	assert(dest && src);
	char* ret = dest;
	while(*dest != '\0')
		dest++;
	while(*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[30] = "hello ";
	char arr2[] = "word";
	
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}

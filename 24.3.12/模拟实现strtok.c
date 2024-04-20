#include<stdio.h>
#include <assert.h>
//my_strtok调用次数过多会越界访问暂未想到解决办法
char* my_strtok(char* str1,const char* str2)
{
	assert(str2);
	static char* s1 = NULL;
	const char* s2 = str2;
	if(str1 == NULL)
		s1++;
	else
		s1 = str1;	
	char* p = s1;
	
	while(*s1 != '\0')
	{
		s2 = str2;
		while(*s2 != '\0')
		{
			if(*s1 == *s2)
			{
				*s1 = '\0';
				return p;
			}
			s2++;
		}
		s1++;
	}
	if(*s1 == '\0')
		return p;
	return NULL;
}

int main()
{
	char arr[] = "qiao.ge@nb";
	const char* sep = ".@";
	
	printf("%s\n", my_strtok(arr, sep));
	printf("%s\n", my_strtok(NULL, sep));
	printf("%s\n", my_strtok(NULL, sep));
	printf("%s\n", my_strtok(NULL, sep));
	return 0;
}

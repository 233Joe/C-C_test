#include<stdio.h>
#include<string.h>

int left_rotate(char* str1, char* str2)
{
	char a = '0';
	int slen = strlen(str1);	
	int i = slen;
	while(i--)
	{
		a = str1[0];
		int j = 0;
		for(j=0;j<slen-1;j++)
		{
			str1[j] = str1[j+1];
		}
		str1[slen-1] = a;
		if(strcmp(str1, str2) == 0)	return 1;
	}
	return 0;
}

int main()
{
	char ch1[] = "ABCD";
	char ch2[] = "DABC";
	
	if(left_rotate(ch1, ch2))
		printf("是旋转之后的字符串");
	else
		printf("不是旋转之后的字符串");
	return 0;
}

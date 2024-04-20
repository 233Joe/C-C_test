#include<stdio.h>
int strlenth(char *p)
{
	int len=0;
	while(*p!='\0')
	{
		len=len+1;p++;
	}
	return len;
}
int main()
{
	char*pstr="computer";
	int len;
	len=strlenth(pstr);
	printf("\n字符串的长度是%d\n",len);
}

#include<stdio.h>
#include <assert.h>
#include <string.h> 

int* my_Nextval(const char* str, int* next)
{
	int i = 0, k = -1;
	int slen = strlen(str);
	next[0] = k;
	while(slen > i)//计算next
	{
		if(k == -1 || str[i] == str[k])
		{
			next[i+1] = k+1;
			i++;
			k++;
		}
		else 
		{
			k = next[k];
		}
	}
	return next;
}

int main()
{
	char* ch = "abcabcabacb";
	int next[200] = {0};
	my_Nextval(ch, next);
	for(int i=0;i<strlen(ch);i++)
		printf("%d", next[i]);
	return 0;
}

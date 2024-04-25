#include<stdio.h>
#include <string.h> 
int main()
{
	long long i = 0, c = 0, h = 0, n = 0;
	char s[10000] = {0};
	scanf("%s", &s[0]);
	int sz = strlen(s);
	for(i=0;i<sz;i++)
	{
		if(s[i] == 'C')	c++;

		else if(s[i] == 'H') h += c;

		else if(s[i] == 'N') n += h;
	}
	printf("%lld", n);
	return 0;
}

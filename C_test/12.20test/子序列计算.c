#include<stdio.h>
#include <string.h> 
int main()
{
	int i = 0, j = 0, k = 0, x = 0;
	char s[10000] = {0};
	scanf("%s", &s[0]);
	int sz = strlen(s);
	for(i=0;i<sz;i++)
	{
		j = i;
		k = i;
		while(s[i] == 'C')
		{
			j++;
			k++;
			if(s[j] == '\0') break;
			
			while(s[j] == 'H')
			{
				k++;
				if(s[k] == '\0')
				{
					k = j;
					break;
				}
				if(s[k] == 'N')	 x++;
			}
		}
	}
	printf("%d", x);
	return 0;
}

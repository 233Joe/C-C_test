#include<stdio.h>
int main()
{
	int i = 0;
	for(i=0;i <= 9;i++)
	{
		printf("%s %d %s %s\n", __FILE__, __LINE__, __DATE__,__TIME__);
		printf("%d\n",__STDC__);
	}	
	
	return 0;
}

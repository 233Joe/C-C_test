#include <stdio.h>
int main()
{
	int l=0;
	printf("sr:");
	while(getchar()!='\n')/*getchar为读入函数*/
	{
		l++;
	}
	printf("l=%d\n",l);
	return 0;
}

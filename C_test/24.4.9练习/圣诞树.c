#include<stdio.h>
#include <string.h>
//方法一:用二维数组的方法
int main()
{
	int x = 0, i = 0, j = 0;
	scanf("%d", &x);
	char ch[x*3+x][(x*3)*2-1] ;
	memset(ch, ' ', sizeof(ch));	//初始化数组

	for(i=0;i<x*3+x;i++)
	{
		for(j=0;j<(x*3)*2-1;j++)
		{
			if( (i >= x*3 && j == x*3-1) || (i < x*3 && ((i == 0 && j == x*3-1) || 
				((ch[i-1][j-1] == '*' || ch[i-1][j+1] == '*') && i%3 != 0) ||
				((ch[i-3][j-3] == '*' || ch[i-3][j+3] == '*') && i%3 == 0))))
			{
				ch[i][j] = '*';
			}			
			printf("%c", ch[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	
//方法二: 拼装打印的方法
	int a = 0;
	for(i=0; i<x*3+x; i++)
	{	
		for(j=0;j< x*3-i-1;j++)
		{
			printf(" ");
		}
		
		int n = a;
		if((i == 0 || i % 3 == 0) && i < x*3)
		{
			a = i/3;
			n = a;
			while(n-- >= 0)
			{
				printf("*     ");
			}
		}
		else if(i < x*3)
		{
			while(n-- >= 0)
			{
				if((i-1) % 3 == 0)
				{
					printf("* *   ");
				}
				else if((i-2) % 3 == 0)
				{
					printf("* * * ");
				}
			}
		}
		
		if(i >= x*3)
		{
			n = x*3-1;
			while(n-->=0)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
		
	return 0;
}

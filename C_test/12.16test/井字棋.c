#include<stdio.h>
#include <string.h> 

//玩家输入棋盘
void chess(char(* pch)[10])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf(" %c", &pch[i][j]);
			
		}
	}	
}

int main()
{
	char ch [10][10] = {0};
	//初始化数组为O
	memset(ch, 'O', sizeof(ch));
	int a = 0, b = 0;

	chess(ch);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c ", ch[i][j]);
		}
		printf("\n");
	}	
	for(int i=0;i<3;i++)
	{
		//判断行
		if(ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2] && ch[i][2] != 'O')
		{
			if(ch[i][0] == 'B')
			{
				a = 1;
				break;
			}	
			else
			{
				b = 1;
				break;
			}
		}
		//判断列
		if(ch[0][i] == ch[1][i]&& ch[1][i] == ch[2][i] && ch[2][i] != 'O')
		{
			if(ch[0][i] == 'B')
			{
				a = 1;
				break;
			}	
			else
			{
				b = 1;
				break;
			}
		}
	}
	//判断对角
	if((a == 0 && b == 0) &&ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2] && ch[2][2] != 'O')
	{
		if(ch[0][0] == 'B')
		{
			a = 1;
		}	
		else
		{
			b = 1;
		}
	}
	else if((a == 0 && b == 0) &&ch[0][2] == ch[1][1] && ch[1][1] == ch[2][0] && ch[2][0] != 'O'){
		if(ch[0][2] == 'B')
		{
			a = 1;
		}	
		else
		{
			b = 1;
		}
	}
	
	if(a == 1)
	printf("BoBo wins!");
		
	else if(b == 1)
	printf("KiKi wins!");
		
	else
	printf("No winner!");
	
	return 0;
}


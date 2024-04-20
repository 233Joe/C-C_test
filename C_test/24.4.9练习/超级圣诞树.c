#include<stdio.h>
#include<string.h>

int main()
{
	int x = 0, i = 0, j = 0, w = 1;
	scanf("%d", &x);
	w <<= x-1;
	w *= 3;

	char ch[w+x][w*2];
	memset(ch, ' ', sizeof(ch));	//初始化数组
	
	ch[0][w-1] = '*';/*判断树的顶点*/
	int limit = w-1;
	for(i=0; i<w+x; i++)
	{
		for(j=0; j<=limit; j++)
		{
			if((i >= w && j == w-1) /*判断是否位于树根*/|| (i < w &&  
				(((ch[i-1][j-1] == '*' || ch[i-1][j+1] == '*') && i%3 != 0) || /*判断除小三角顶部像素格的位置放入 * 符号*/
				(((ch[i-3][j-3] == '*' || ch[i-3][j+3] == '*') && i%3 == 0) && /* 判断各个小三角顶部位置 */
				(ch[i-1][j-1] != '*' || ch[i-1][j+1] != '*'))))) 	/* 判断各个小三角顶部位置是否符合放入 * 条件 */
			{
				ch[i][j] = '*';
			}			
			printf("%c", ch[i][j]);
		}
		if(i >= w-1)
		{
			limit = w-1;
		}
		else
		{
			limit++;
		}
		printf("\n");
	}
	return 0;
}


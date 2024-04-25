#include <stdio.h>

void exchange(int*p1, int*p2)
{
	int h = 0;
	h = *p1;
	*p1 = *p2;
	*p2 = h;
}
	
int main()
{
	int x = 0, y = 0, k = 0, i = 0, j = 0, n = 0, m = 0;
	char t = '0';
	int arr[30][30] = {0};
	scanf("%d %d", &x, &y);
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	while(k)
	{
		scanf(" %c ", &t);
		scanf("%d %d", &n, &m);
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				
				if(t == 'r' && i == n-1)
					exchange(&arr[i][j], &arr[m-1][j]);
				
				else if(t == 'c' && j == n-1)
					exchange(&arr[i][j], &arr[i][m-1]);
			}	
		}
		k--;
		fflush (stdin);//清除缓存
	}	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

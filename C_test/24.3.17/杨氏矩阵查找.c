#include<stdio.h>

int seek(int arr[][3],int* px, int* py, int k)
{
	int x = 0;
	int y = *py-1;	
	while(x < *px)
	{
		while(y >= 0 && k <= arr[x][y])
		{
			if(k == arr[x][y])
			{
				*px = x;
				*py = y;
				return 1;
			}
			y--;
		}
		x++;
	}
	*px = -1;
	*py = -1;
	return 0;
}
int main()
{
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	int k = 0, x = 3, y = 3;
	scanf("%d", &k);
	int ret = seek(arr, &x, &y, k);
	if(ret)
	{
		printf("找到了%d %d", x, y);
	}
	else
	{
		printf("没找到%d %d", x, y);
	}
	return 0;
}

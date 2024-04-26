#include<stdio.h>
#include <string.h> 

int abc(int(*parr)[4], int num)
{
	int i = 0, j = 0;
	for(i=0;i<4;i++)
	{
		if(parr[i][4] >= num)
		{
			for(j=0;j<4;j++)
			{
				if(num == parr[i][j])
				{
					return parr[i][j];
				}
			}
		}
	}
	return 0;
}


int main()
{
	int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int num = 0, x = 0;
	scanf("%d", &num);
	x = abc(arr, num);
	
	if(x)
	{
		printf("有这个数:%d", x);
		
	}
	else
		printf("没有这个数:%d", num);
	return 0;	
} 

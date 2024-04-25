#include<stdio.h>

int main()
{
	int arr[20][20] = {0};
	int num  = 0, i = 0, j = 0, x = 1;
	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i][j] != 0){
				x = 0;
				goto end;
			}
		}
		for(j=0+i;j<num;j++)
		{
			if(arr[i][j] == 0){
				x = 0;
				goto end;
			}
		}
	}
	
	end:
	if(x == 1)
		printf("Yes");
	else
		printf("NO");
	
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0, arr[10] = {0}, max = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i] > max)
			max = arr[i];
	}
	printf("最大值是:%d", max);
	return 0;
}

#include<stdio.h>
int main()
{
	int n = 0, i = 0, x1 = 0, x2 = 0;
	int arr[100] = {0};
	
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		if(i>0)
		{
			if(arr[i] < arr[i-1])//5 5 2 1
				x1 = 1;
			
			else if(arr[i] > arr[i-1])
				x2 = 1;
			
			else;
				
			
		}
	}
	if(x1 + x2 <= 1)
		printf("是有序数组");
	else
		printf("不是有序数组");
	
	return 0;
}

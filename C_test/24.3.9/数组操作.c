#include<stdio.h>

//初始化数组
void init(int arr[], int si)
{
	while(si >= 0)
	{
		arr[si] = 0;
		si--;
	}
}

//打印数组函数
void print(int arr[], int si)
{
	int i = 0;
	for(i=0;i<=si;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

//实现数组逆序
void reverse(int arr[], int si)
{
	int i = 0, k = 0;
	for(i=0;i<=si;i++)
	{
		int j = 0;
		for(j=0;j<si-i;j++)
		{
			if(arr[j] < arr[j+1])
			{
				k = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = k;
			}
		}
		if(k == 0)
			break;
	}
}

int main()
{
	int arr[20], si = 0;
	si = sizeof(arr) / sizeof(arr[0]) - 1;
	
	init(arr, si);
	print(arr, si);
	
	int i = 0;
	for(i=0;i<=si;i++)
		arr[i] = i;
	
	reverse(arr, si);
	print(arr, si);
	return 0;
}

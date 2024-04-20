#include<stdio.h>

void seek(const int* arr,int* a, int* b, int sz)
{
	int l = 0;
	int i = 0;
	for(i=0;i<sz;i++)
	{
		l = 0;
		int j = 0;
		for(j=0;j<sz;j++)
		{
			if(arr[i] == arr[j] && i != j)
			{
				l = 1;
				break;
			}
		}
		if(l != 1 && *a == 0)
		{
			*a = arr[i];
		}
		else if(l != 1 && *a != 0)
		{
			*b = arr[i];
		}
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,1, 2, 3, 5, 6, 8, 7};
	int a = 0, b = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	seek(arr, &a, &b, sz);
	printf("%d %d\n", a, b);
	return 0;
}

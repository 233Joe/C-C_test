#include<stdio.h>
int main()
{
	int arr[] = {1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 2};
	int l = 0, i = 0;
	int val = 0;
	scanf("%d", &val);
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i< sz;i++)
	{
		if(arr[i] != val)
		{
			arr[l] = arr[i];
			l++;
		}
	}
	for(i=0;i<l;i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}

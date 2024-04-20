#include<stdio.h>
void sort(int arr[], int si)
{
	int i = 0, j = 0, k = 0;
	for(i=0;i<=si;i++)
	{
		for(j=0;j<si-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				k = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = k;
				k = 1;
			}
		}
		if(k == 0)
			break;
	}
	
}
int main()
{
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int si = 0;
	si = sizeof(arr)/sizeof(arr[0])-1;
	sort(arr, si);
	int i = 0;
	for(i = 0;i<=si;i++){
		printf("%d", arr[i]);
	}
	
	return 0;
}

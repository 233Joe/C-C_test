#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[] = {1, 3, 5, 6, 7, 8, 10};
	int arr2[] = {1, 2, 4, 6, 7, 9};
	int sub1 = 0, sub2 = 0;
	int sz1 = sizeof(arr1)/sizeof(arr1[0]);
	int sz2 = sizeof(arr2)/sizeof(arr2[0]);
	int* merge = (int*)malloc((sz1 + sz2) * 4);
	int m = 0;
	while(sub1 < sz1 || sub2 < sz2)
	{
		if(arr1[sub1] <= arr2[sub2])
		{
			merge[m] = arr1[sub1];
			sub1++;
		}
		else
		{
			merge[m] = arr2[sub2];
			sub2++;
		}
		m++;
	}
	
	for(int i=0;i<sz1+sz2;i++){
		printf("%d ", merge[i]);
	}
	return 0;
}

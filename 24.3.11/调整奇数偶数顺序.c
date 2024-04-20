#include <stdio.h>
void oddeven(int* arr, int si)
{
	int* left = arr;
	int* right = (arr+si);
	int n = 0;
	while(left < right)
	{
		while(*left % 2 != 0)
			left++;
		while(*right % 2 == 0)
			right--;
		
		if(left < right)
		{
			n = *left;
			*left = *right;
			*right = n;
		}
	}
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int si = sizeof(arr)/sizeof(arr[0]);
	oddeven(arr, si);
	int i = 0;
	for(i=0;i<si;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

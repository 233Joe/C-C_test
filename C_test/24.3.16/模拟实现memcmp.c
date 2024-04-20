#include<stdio.h>

int my_memcmp(void* dest,void* src, size_t n)
{
	while(n--)
	{
		if(*(char*)dest > *(char*)src)
		{
			return 1;
		}
		else if(*(char*)dest < *(char*)src)
		{
			return -1;
		}
		dest = (char*)dest+1;
		src = (char*)src+1;
	}
	return 0;
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[] = {1, 2, 3, 4};
	
	printf("%d", my_memcmp(arr1, arr2, 16));
	return 0;
}

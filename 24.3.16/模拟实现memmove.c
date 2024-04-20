#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, void* src, size_t n)
{
	assert(dest && src);
	void* ret = dest;
	if(dest > src)
	{
		while(n--)
		{
			*((char*)dest+n) = *((char*)src+n);
		}
	}
	else if(dest < src)
	{
		while(n--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest+1;
			src = (char*)src+1;
		}
	}
	return ret;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int si = sizeof(arr);
	my_memmove(arr+2, arr, 20);
	int i = 0;
	for(i=0;i<si/4;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

#include<stdio.h>
#include <assert.h>

void* my_memcpy(void* dest,const void* src, size_t n)
{
	assert(dest && src);
	void* ret = dest;
	while(n--)
	{
		//*(char*)dest++ = *(char*)src++;
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 5, 6};
	int arr2[20] = {0};
	int si = sizeof(arr1);
	my_memcpy(arr2, arr1, si);
	int i = 0;
	for(i=0;i<(si/4);i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}

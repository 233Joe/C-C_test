#include <stdio.h>

int TextRemoveElement(int* a, int size, int val)
{
	int src = 0;
	int dst = 0;
	while(src < size)
	{
		if(a[src] != val)
		{
			a[dst] = a[src];
			dst++;
		}
		src++;
	}
	return dst;
}

int main()
{
	int a[] = {1, 2, 3, 4, 4, 5, 4, 6};
	int val = 0;
	scanf("%d", &val);
	int sz = sizeof(a)/sizeof(a[0]);
	sz = TextRemoveElement(a, sz, val);
	
	int i = 0;
	for(i = 0;i < sz;i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}

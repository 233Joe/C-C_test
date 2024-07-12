#include <stdio.h>

int Removeduplicates(int* a, int sz)
{
	if(sz == 0)
		return 0;

	int prev = 0, cur = 1, dst = 0;
	while(prev < sz)
	{
		if(a[prev] != a[cur])
			a[dst++] = a[prev];
		
		prev++;
		cur++;
	}	
	return dst;
}

int main()
{
	int a[] = {1, 1, 2, 3, 4, 4, 5, 6, 6, 6, 6, 8};
	int sz = sizeof(a)/sizeof(a[0]);
	sz = Removeduplicates(a, sz);
	
	int i = 0;
	for(i = 0;i < sz;i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}

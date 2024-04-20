#include<stdio.h>
#include<stdlib.h>

typedef struct a
{
	int x;	
	int arr[];
}a;

int main()
{
	a* pn = (a*)malloc(sizeof(a)+40);
	pn->x = 66;
	int i =0;
	for(i = 0;i<10; i++)
	{
		pn->arr[i] = i;
		printf("%d ", pn->arr[i]);
	}
	
	free(pn);
	pn = NULL;
	return 0;
}

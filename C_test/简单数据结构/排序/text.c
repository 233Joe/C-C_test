#include"Sort.h"
#include"Sort.c"

void text()
{
	int a[] = {1, 4, 6, 5, 4, 6, 8, 1, 3};
	InsertSort(a, 9);
	for(int i=0;i<9;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	
	int b[] = {1, 4, 6, 5, 4, 6, 8, 1, 3};
	ShellSort(b, 9);

	
}

int main()
{
	text();
	
	return 0;
}

#include"Heap.h"
#include"Heap.c"

int main()
{
	int i=0;
	int arr[] = {5, 6, 7, 9, 1, 23, 4, 6, 7, 56};
	Heap hp;
	HeapInit(&hp, arr, 10);

	for(i=0;i<=2;i++)
		printf("%d ", hp._a[i]);
	printf("\n");
	HeapSort(hp._a,10);
	
	for(i=0;i<=9;i++)
		printf("%d ", hp._a[i]);
	printf("\n");
	
	HeapPush(&hp, 0);
	HeapSort(hp._a, 11);
	
	for(i=0;i<=10;i++)
		printf("%d ", hp._a[i]);
	
	return 0;
}

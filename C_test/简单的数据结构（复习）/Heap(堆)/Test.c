#include "Heap.h"
#include "Heap.c"

int main()
{
	int a[] = {27, 15, 19, 18 ,16, 11, 4, 8, 6};
	
	Heap hp;
	HeapInit(&hp, a, sizeof(a)/sizeof(HPDataType));
	HeapPush(&hp, 99);
	
	HeapSort(hp._a, 10);
	int i = 0;
	for(i = 0;i< hp._size;i++){
		printf("%d ", hp._a[i]);
	}
	HeapDestory(&hp);
	return 0;
}

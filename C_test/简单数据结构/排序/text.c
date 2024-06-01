#include"Sort.h"
#include"Sort.c"

void InsertSortText()
{
	int a[] = {1, 4, 6, 5, 4, 6, 8, 1, 3};
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArr(a, sizeof(a) / sizeof(int));
}

void ShellSortText()
{
	int a[] = {5, 2, 3, 1};//{1, 4, 6, 5, 4, 6, 8, 1, 3};
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintArr(a, sizeof(a) / sizeof(int));
}

void SelectSortText()
{
	int a[] = {1, 4, 6, 5, 4, 6, 8, 1, 3, 6};
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArr(a, sizeof(a) / sizeof(int));
}

void HeapSortText()
{
	int a[] = {1, 4, 6, 5, 4, 6, 8, 1, 3, 6};
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArr(a, sizeof(a) / sizeof(int));
}

void BubbleSortText()
{
	int a[] = {11 , 99, 1, 4, 6, 5, 4, 6, 8, 1, 3, 6};
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintArr(a, sizeof(a) / sizeof(int));
}

void QuickSortText()
{
	int a[] = {555, 11 , 99, 1, 4, 6, 5, 4, 6, 8, 1, 3, 6, 4, 66, 100};
	QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	PrintArr(a, sizeof(a) / sizeof(int));
}


int main()
{
//	InsertSortText();
//	
//	ShellSortText();
//	
//	SelectSortText();
//	
//	HeapSortText();
//	
//	BubbleSortText();
	
	QuickSortText();
	
	return 0;
}

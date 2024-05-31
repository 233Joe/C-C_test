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
	int b[] = {5, 2, 3, 1};//{1, 4, 6, 5, 4, 6, 8, 1, 3};
	ShellSort(b, sizeof(b) / sizeof(int));
	PrintArr(b, sizeof(b) / sizeof(int));
}

void SelectSortText()
{
	int c[] = {1, 4, 6, 5, 4, 6, 8, 1, 3, 6};
	SelectSort(c, sizeof(c) / sizeof(int));
	PrintArr(c, sizeof(c) / sizeof(int));
}

void HeapSortText()
{
	int d[] = {1, 4, 6, 5, 4, 6, 8, 1, 3, 6};
	HeapSort(d, sizeof(d) / sizeof(int));
	PrintArr(d, sizeof(d) / sizeof(int));
}

void BubbleSortText()
{
	int e[] = {11 , 99, 1, 4, 6, 5, 4, 6, 8, 1, 3, 6};
	BubbleSort(e, sizeof(e) / sizeof(int));
	PrintArr(e, sizeof(e) / sizeof(int));
}
int main()
{
	InsertSortText();
	ShellSortText();
	SelectSortText();
	HeapSortText();
	BubbleSortText();
	return 0;
}

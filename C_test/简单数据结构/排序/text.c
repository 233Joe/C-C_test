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

void MergeSortText()
{
	int a[] = {555, 11 , 99, 1, 4, 6, 5, 4, 6, 8, 1, 3, 6, 4, 66, 100};
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArr(a, sizeof(a) / sizeof(int));
}

void MergeSortNonRText()
{
	int a[] = {555, 11 , 99, 1, 4, 6, 5, 4, 6, 8, 1, 3, 6, 4, 66, 100};
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	PrintArr(a, sizeof(a) / sizeof(int));
}

void CountSortText()//计数排序
{
	int a[] = {11 , 9, 1, 4, 6, 5, 4, 6, 8, 1, 3, 6, 4, 6, 10};
	CountSort(a, sizeof(a) / sizeof(int));
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
	
//	QuickSortText();
	
//	MergeSortText();

//	MergeSortNonRText();
	
	CountSortText();//计数排序

	return 0;
}

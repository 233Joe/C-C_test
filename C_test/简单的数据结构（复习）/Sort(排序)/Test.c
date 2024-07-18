#include "Sort.h"
#include "Sort.c"

void TestOP()
{
	srand(time(0));
	const int N = 100000;
	int* a1 = (int*)malloc(sizeof(int)*N);
	int* a2 = (int*)malloc(sizeof(int)*N);
	int* a3 = (int*)malloc(sizeof(int)*N);
	int* a4 = (int*)malloc(sizeof(int)*N);
	int* a5 = (int*)malloc(sizeof(int)*N);
	int* a6 = (int*)malloc(sizeof(int)*N);

	for(int i = 0; i < N; i++)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
	}
	
	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();
	
	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();
	
	int begin3 = clock();
	SelectSort(a3, N);
	int end3 = clock();
	
	int begin4 = clock();
	HeapSort(a4, N);
	int end4 = clock();
	
//	int begin5 = clock();
//	BubbleSort(a5, N);
//	int end5 = clock();
	
	int begin6 = clock();
	QuickSort(a6, 0, N);
	int end6 = clock();
	
	printf("InsertSort: %d ms\n", end1-begin1);
	printf("ShellSort: %d ms\n", end2-begin2);
	printf("SelectSort: %d ms\n", end3-begin3);
	printf("HeapSort: %d ms\n", end4-begin4);
//	printf("BubbleSort: %d ms\n", end5-begin5);
	printf("QuickSort: %d ms\n", end6-begin6);

}

void TestSort()
{
	int a[] = {10, 6, 7, 1, 2, 3, 9, 8, 0, 4};
	int sz = sizeof(a)/sizeof(int);
	QuickSort(a, 0, sz-1);
	PrintArr(a, sz);

}


int main()
{
//	TestSort();
	TestOP();
	return 0;
}

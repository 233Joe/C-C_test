#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include <string.h> 

void PrintArr(int* a, int n);

void InsertSort(int* a, int n);//插入排序

void ShellSort(int *a, int n);//希尔排序

void SelectSort(int* a, int n);//选择排序

void HeapSort(int* a, int n);//堆排序

void  BubbleSort(int* a, int n);//冒泡排序

void QuickSort(int* a, int left, int right);	//快速排序

void MergeSort(int* a, int n);	//合并排序

void MergeSortNonR(int* a, int n);//非递归实现合并排序

void CountSort(int* a, int n);//计数排序



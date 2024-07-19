#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

//插入排序
void InsertSort(int* a, int sz);

//希尔排序
void ShellSort(int* a, int sz);

//选择排序
void SelectSort(int* a, int sz);

//堆排序
void AdjustDwon(int* a, int sz, int root);
void HeapSort(int* a, int sz);

//冒泡排序
void BubbleSort(int*a, int sz);


int PartSort1(int*a, int begin, int end);
int PartSort2(int*a, int begin, int end);
int PartSort3(int*a, int begin, int end);
//快速排序
void QuickSort(int*a, int left, int right);
//非递归快排排序
void QuickSortNonR(int* a, int left, int right);


//归并排序递归实现
void MergeSort(int* a, int sz);
//非归并排序递归实现
void MergeSortNonR(int* a, int sz);


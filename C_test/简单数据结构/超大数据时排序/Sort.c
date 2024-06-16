#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void Swap(int* a, int* b)
{
	int tmp = *a;//3, 1
	*a = *b;
	*b = tmp;//1,3
}

int PartSort3(int* a, int begin, int end)//进行左右区分 方法三:前后指针法
{
	int prev = begin-1;
	int cur = begin;
	int secondaryKey  = end;
	
	while(cur != end)
	{
		if(a[cur] < a[secondaryKey])
		{
			Swap(&a[++prev], &a[cur]);
		}
		++cur;
	}
	Swap(&a[++prev], &a[secondaryKey]);
	return prev;
}

void QuickSort(int* a, int left, int right)	//快速排序
{
	if(!*a) return ;
	
	if(left > right) return ;
	
//	int div = PartSort1(a, left, right);//进行左右区分 方法一:左右指针法
	
//	int div = PartSort2(a, left, right);//进行左右区分 方法二:挖坑法
	
	int div = PartSort3(a, left, right);//进行左右区分 方法三:前后指针法，最后一个数不能等于0
	
	QuickSort(a, left, div-1);
	QuickSort(a, left+1, right);
}

void _MergeFile(const char*mfile, const char*file1, const char*file2)
{
	FILE* fin = fopen(mfile, "w");
	if(fin == NULL)
		return ;
	
	FILE* fout1 = fopen(file1, "r");
	if(fout1 == NULL)
		return ;
	
	FILE* fout2 = fopen(file2, "r");
	if(fout2 == NULL)
		return ;
	
	int n1, n2;
	int ret1 = fscanf(fout1, "%d\n", &n1);
	int ret2 = fscanf(fout2, "%d\n", &n2);
	
	while(ret1 != EOF && ret2 != EOF)
	{
		if(n1 < n2)
		{
			fprintf(fin, "%d\n", n1);
			ret1 = fscanf(fout1, "%d\n", &n1);
		}
		else
		{
			fprintf(fin, "%d\n", n2);
			ret2 = fscanf(fout2, "%d\n", &n2);
		}
	}
	while(ret1 != EOF)
	{
		fprintf(fin, "%d\n", n1);
		ret1 = fscanf(fout1, "%d\n", &n1);
	}
	while(ret2 != EOF)
	{
		fprintf(fin, "%d\n", n2);
		ret2 = fscanf(fout2, "%d\n", &n2);
	}
	
	fclose(fout1);
	fclose(fout2);
	fclose(fin);	
}

void MergeSortFile(const char* file)
{
	FILE* fout = fopen(file, "r");
	if(fout == NULL)
		return ;
	
	int a[10] ;
	int n = 10;
	int num = 0;
	int i = 0;
	int x = 1;
	char subfile[20];
	
	while(fscanf(fout, "%d\n", &num) != EOF)
	{
		if(i < n)
		{
			a[i++] = num; 
		}
		if(i >= n)
		{
			QuickSort(a, 0, n-1);
			sprintf(subfile, "%d", x++);
			
			FILE* fin = fopen(subfile, "w");
			if(fin == NULL)
				return ;
			
			for(i = 0; i < n; i++)
				fprintf(fin, "%d\n", a[i]);
			
			fclose(fin);
			i = 0;
		}
	}

	char mfile[100] = "12";
	char file1[100] = "1";
	char file2[100] = "2";
	
	for(int i=2; i<=n; ++i)
	{
		_MergeFile(mfile, file1, file2);
		
		strcpy(file1, mfile);
		sprintf(file2, "%d", i+1);
		sprintf(mfile, "%s%d", mfile, i+1);
	}
	fclose(fout);	
}

int main()
{
	MergeSortFile("data.txt");
	
	return 0;
}

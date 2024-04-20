#include<stdio.h>
int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int sz = sizeof(arr1)/sizeof(*arr1);
	FILE* pf = fopen("text.txt", "wb");
	fwrite(arr1, sizeof(*arr1), sz, pf);
	fclose(pf);
	pf = NULL;
	
	int arr2[sz];
	pf = fopen("text.txt", "rb");
	size_t szfr = fread(arr2, sizeof(*arr2), sz, pf);
	if(szfr == sz)
	{
		for(int i=0;i<sz;i++) printf("%d ", arr2[i]);
	}
	else
	{
		if(feof(pf))
		{
			puts("文件到末尾结束");
		}
		else if(ferror(pf))
		{
			puts("文件出现错误");
		}
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int cmp(const void* e1,const void* e2)
{
	return *(int*)e1-*(int*)e2;
}

void my_strcpy(char* str1, char* str2,int len)
{
	while(len--)
	{
		char st = *str1;
		*str1 = *str2;
		*str2 = st;
		str1++;
		str2++;
	}
}

void my_qsort(void* base, size_t si, size_t width, int(* cmp)(const void* e1,const void* e2))
{
	int i = 0, j = 0;
	char* ba = (char*) base;
	int f = 0;
	for(i=0;i<si-1;i++)
	{
		for(j=0;j<si-i-1;j++)
		{
			if(cmp(ba+(j*width), ba+((j+1)*width)))
			{
				f = 1;
				my_strcpy(ba+j*width, ba + (j+1)*width,width);
			}
		}
		if(f == 0)
			return ;
	}
}

int main()
{
	int arr[] = {9, 8, 7, 7, 5, 4, 3, 2, 1};
	int si = sizeof(arr)/sizeof(arr[0]);
	my_qsort(arr, si, sizeof(arr[0]), cmp);
	for(int i=0;i<9;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

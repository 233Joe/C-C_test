#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 0, 0};
	int x = 900701;
			//1024101
	int xsz = 0;
	int xnum = x;
	while(xnum)
	{
		xsz++;
		xnum /= 10;
	}
	int asz = sizeof(arr) / sizeof(arr[0]);
	int len = asz > xsz ? asz+1 : xsz+1;
	int* merarr = (int*)malloc(len*4);
	int maxlen = len;
	
	int sub = 0;
	int carry = 0;
	while(len--)
	{
		int g = x % 10;
		x /= 10;
		if(asz < 1)
		{ 
			merarr[sub] = g + carry;
		}
		else
		{
			merarr[sub] = arr[asz-1] + g + carry;
			asz--;
		}
		carry = 0;
		if(merarr[sub] > 9)
		{
			merarr[sub] %= 10;
			carry = 1;
		}
		sub++;
	}
	if(merarr[maxlen-1] == 0)
	{
//		merarr = (int*)realloc(merarr, (maxlen-1) * 4);
		maxlen -= 1;
	}
	int l = 0;
	int r = maxlen-1;
	int tem = 0;
	while(l <= r)
	{
		tem = merarr[l];
		merarr[l] = merarr[r];
		merarr[r] = tem;
		l++;
		r--;
	}

	for(int i=0; i<maxlen; i++)
	{
		printf("%d ", merarr[i]);
	}
	
	return 0;
}

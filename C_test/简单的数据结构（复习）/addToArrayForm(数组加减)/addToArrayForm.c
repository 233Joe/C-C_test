#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* addToArrayForm(int* a, int asize, int k, int* returnsz)
{

	int anum = asize-1;
	int knum = k;
	int ksize = 0;
	while(knum != 0)
	{
		knum /= 10;
		ksize++;
	}
	knum = k;
	
	int len = asize > ksize ? asize : ksize;
	int* retArr = (int*)malloc(sizeof(int)*len+1);
	memset(retArr, 0, sizeof(int)*len+1);
	if(retArr == NULL)
	{
		printf("内存申请失败");
		exit(-1);
	}
	*returnsz = len;
	int i = 0;
	while(len--)
	{
		retArr[i] += (knum % 10);
		if(anum >= 0)
			retArr[i] += a[anum--];
		
		knum /= 10;
		
		if(retArr[i] > 9)
		{
			retArr[i++] %= 10;
			retArr[i] = 1;
		}
		else
		{
			i++;			
		}
	}
	if(retArr[*returnsz] == 1)
		*returnsz += 1;
	
	int left = 0, right = *returnsz-1;
	while(left < right)
	{
		int num = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = num;
		left++;
		right--;
	}
	return retArr;
}

int main()
{
	int a[] = {5, 5, 5, 5, 5, 5};
	int sz = sizeof(a)/sizeof(a[0]);
	int k = 5000005;
	int newsz = 0;
	int* newArr = addToArrayForm(a, sz, k, &newsz);

	int i = 0; 
	for(i = 0; i < newsz; i++)
		printf("%d ", newArr[i]);
	
	return 0;
}

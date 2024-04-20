#include<stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int l = 0, r = 0, i = 0;
	while(r < nums2Size && l < nums1Size)
	{
		if(nums1[l] == 0 && r < nums2Size)
		{
			while(l < nums1Size)
			{
				nums1[l++] = nums2[r++];
			}
		}
		if(nums1[l] > nums2[r])
		{
			for(i=m;i>l;i--)
			{
				nums1[i] = nums1[i-1];
			}
			nums1[l] = nums2[r++];
			m++;
		}
		l++;
	}
}

int main()
{
	int nums1[] = {1, 2, 5, 0, 0, 0};
	int nums1Size = sizeof(nums1)/sizeof(nums1[0]);
	int m = 3, n = 3;
	int nums2[] = {3, 4, 9};
	int nums2Size = sizeof(nums2)/sizeof(nums1[0]);

	merge(nums1, nums1Size, m, nums2, nums2Size, n);
	
	for(int i=0;i<nums1Size;i++)
	{
		printf("%d ", nums1[i]);
	}
	return 0;
}

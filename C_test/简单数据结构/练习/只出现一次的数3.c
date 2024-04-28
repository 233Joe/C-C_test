#include<stdio.h>

int main()
{
	int nums[] = {1,2,1,3,2,5};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	
	int pos = 0;
	int i = 0;
	for(i=0;i<numsSize;i++) //先异或数组，算出要找的两个数异或的值
	{
		pos ^= nums[i];
	}
	int m = 0;
	while(m < 32)	//再找出（两个数异或的值）任意位为1的位置
	{
		if(pos & (1u << m))
			break;
		++m;
	}
	int x1 = 0, x2 = 0;
	for(i=0; i<numsSize; i++)	//再让这两个答案进行分离， 因为异或为值为1, 那两个值必为 1 和 0 ,再按位与上这个1,就可以将两个答案分开
	{
		if(nums[i] & (1u << m))
		{
			x1 ^= nums[i];//再将分开的数进行异或剩下的就是答案
		}
		else
		{
			x2 ^= nums[i];
		}
	}
	printf("%d %d", x1, x2);
	return 0;
}

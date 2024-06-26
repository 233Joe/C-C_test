#include<stdio.h>
/*
  依次确定每一个二进制位
  思路与算法
  
  为了方便叙述，我们称「只出现了一次的元素」为「答案」。
  
  由于数组中的元素都在 int\texttt{int}int（即 323232 位整数）范围内，因此我们可以依次计算答案的每一个二进制位是 000 还是 111。
  
  具体地，考虑答案的第 iii 个二进制位（iii 从 000 开始编号），它可能为 000 或 111。对于数组中非答案的元素，每一个元素都出现了 333 次，对应着第 iii 个二进制位的 333 个 000 或 333 个 111，无论是哪一种情况，它们的和都是 333 的倍数（即和为 000 或 333）。因此：
  
  答案的第 iii 个二进制位就是数组中所有元素的第 iii 个二进制位之和除以 333 的余数。
  
  这样一来，对于数组中的每一个元素 xxx，我们使用位运算 (x >> i) & 1\texttt{(x >> i) \& 1}(x >> i) & 1 得到 xxx 的第 iii 个二进制位，并将它们相加再对 333 取余，得到的结果一定为 000 或 111，即为答案的第 iii 个二进制位。
  
  细节
  
  需要注意的是，如果使用的语言对「有符号整数类型」和「无符号整数类型」没有区分，那么可能会得到错误的答案。这是因为「有符号整数类型」（即 int\texttt{int}int 类型）的第 313131 个二进制位（即最高位）是补码意义下的符号位，对应着 −231-2^{31}−2 
  31
  ，而「无符号整数类型」由于没有符号，第 313131 个二进制位对应着 2312^{31}2 
  31
  。因此在某些语言（例如 Python\texttt{Python}Python）中需要对最高位进行特殊判断。
  
 */
int main()
{
	int arr[] = {121, 121, 3, 5, 121, 3, 5, 2, 3, 5};
	int sz = sizeof(arr)/sizeof(arr[0]);
	
	int ans = 0;
	int i = 0;
	for(i=0;i<32;i++)//11	101
	{
		int pos = 0;
		int j = 0;
		for(j=0;j<sz;j++)
		{
			pos += (arr[j] >> i) & 1;
		}
		printf("%d  %d\n", pos, i);
		if(pos % 3)
		{
			ans |= (1u << i);
		}
	}
	printf("%d", ans);
	return 0;
}

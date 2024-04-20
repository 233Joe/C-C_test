#include<stdio.h>
#include<string.h>
//方法一:自己想的方法
int lengthOfLongestSubstring(char* s)
{
	int r = 0, l = 0, j = 0, max = 0;
	int x = 0;
	for(r=0; s[r] != '\0'; r++)
	{
		x = 1;
		for(j=l; j < r;j++)
		{
			if(s[j] == s[r])
			{
				l++;
				r = l;
				break;
			}
			x++;
		}
		if(x > max)
		{
			max = x;
		}
	}
	return max;
} 

//方法二:学别人的方法
int lengthOfLongestSubstring1(char* s)
{
	int arr[127] = {0};
	int i = 0, l = 0, max = 0, count = 0;
	for(i=0; s[i]!='\0'; i++)
	{
		if(arr[(int)s[i]] > l)
		{
			count = i - l;
			if(count > max)
			{
				max = count;
			}
			l = arr[(int)s[i]];
		}
		arr[(int)s[i]] = 1+i;
	}
	count = i-l;
	return count>max?count:max;
}

int main()
{
	char ch[] = "cbadaaabbadbcdeeeedd";
//				     l  r
	printf("%d\n", lengthOfLongestSubstring(ch));
	printf("%d\n", lengthOfLongestSubstring1(ch));
	return 0;
}

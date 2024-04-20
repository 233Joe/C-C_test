#include<stdio.h>
#include<string.h>

//方法一 字符串左移
char* left_rotate(char* str, int k)
{
	char a = '0';
	int slen = strlen(str);	
	k %= slen;
	while(k--)
	{
		a = str[0];
		int i = 0;
		for(i=0;i<slen-1;i++)
		{
			str[i] = str[i+1];
		}
		str[slen-1] = a;
	}
	return str;
}


//方法二 字符串逆序
void reverse(char* left, char* right)
{
	char c = '0';
	while(left < right)
	{
		c = *left;
		*left = *right;
		*right = c;
		left++;
		right--;
	}
}

int main()
{
	char ch1[] = "ABCD";
	char ch2[] = "ABCD";
	int k = 0;
	scanf("%d", &k);
	printf("%s", left_rotate(ch1, k));
	
	int len = strlen(ch2)-1;
	k %= len+1;
	reverse(ch2, ch2+k-1);
	reverse(ch2+k, ch2+len);
	reverse(ch2, ch2+len);
	printf("%s", ch2);
	return 0;
}

#include<stdio.h>
#include <assert.h>
#include <string.h>

void Nextval(char* Sub, int* next)
{
	int i = 0, k = -1;	
	next[0] = k;		//在 next 数组中首元素始终为-1
	while(Sub[i])
	{
		if(k == -1 || Sub[i] == Sub[k])	//匹配是否相等，若相等则 i 和 k 都++,继续匹配下一对
		{
			i++;
			k++;
			if(Sub[k] != Sub[i])	//若匹配失败，将k的值赋给 next[i] 因为他们不相等所以 nextval 数组中 next[i] 的数为他之前匹配成功的次数
			{
				next[i] = k;
			}
			else if(Sub[k] == Sub[i]) 		//若匹配成功，将 next[k] 的值赋给 next[i] 因为他们相等所以 nextval 数组中他们下标数一样
			{
				next[i] = next[k];
			}
		}
		else
		{
			k = next[k];	//匹配失败后将k赋值为上一跳,最终赋值为-1
		}
	}
}

char* my_Strstr(char* Mainc,char* Subc)
{
	int i = 0, k = 0;
	int Mainlen = strlen(Mainc);
	int Sublen = strlen(Subc);
	int nextval[100] = {0};
	Nextval(Subc, nextval);
	while(Mainlen > i && Sublen > k)
	{
		if(k == -1 || Mainc[i] == Subc[k])		//匹配是否相等，若相等则 i 和 k 都++,继续匹配下一对,直到匹配完成
		{
			i++;
			k++;
		}
		else
		{
			k = nextval[k];		//匹配失败后将k赋值为上一跳,最终赋值为-1
		}
	}
	if(Sublen == k)
	{
		printf("找到了\n");
		return Mainc+(i-k);
	}
	else
	{
		printf("没找到\n");
		return NULL;
	}
}

int main()
{
	char arr[] = "abcabcdabcddaasdbcabcabaasdbcddcabcddabcddcabcccddcasdabcabcababdhaa";
	char* ch = "abcabcabab";
	printf("%s", my_Strstr(arr, ch));
	return 0;
}

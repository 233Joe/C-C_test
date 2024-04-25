#include<stdio.h>
#include <string.h> 

int is_left_ove(char* a1, char* a2){
	int i = 0, j = 0;	
	while(a1[j] != '\0')
	{
		if(a1[i] == a2[0])
		{
			while(a2[j] != '\0' && a1[i++] == a2[j++])
			{
				if(a1[i] == '\0')
				{
					i = 0;
				}
			}
			if(a2[j] == '\0')
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		i++;
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdef"; 
	char arr2[] = "fabcde"; 
	int sz1 = 0, sz2 = 0, ch = 0;
	sz1 = sizeof(arr1)/sizeof(arr1[0]);
	sz2 = sizeof(arr2)/sizeof(arr2[0]);
	
 	if(sz1 == sz2)
		ch = is_left_ove(arr1, arr2);
	
	if(ch == 0)
		printf("这两个字符串无法由旋转得来");
	
	else
		printf("这两个字符串可以由旋转得来");
	
	return 0;
}

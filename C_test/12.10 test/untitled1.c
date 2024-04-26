#include<stdio.h>
#include <string.h> 
int main()
{
	int i = 0, num = 0, x = 0;
	int j = 1;
	int arr[1000] = {0};
	char ch[1000] = {0};
	
	for(int i=0;i<1000;i++){
		arr[i] = -1-i;
		ch[i] = i;
	}
	
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(ch));
	
	
	
	return 0;
}

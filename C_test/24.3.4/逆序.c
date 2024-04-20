#include<stdio.h>
void contrary(char* arr, int si)
{
	char ch = 0;
	int i = 0;
	while(i < si)
	{
		if(arr[i] != arr[si])
		{
			ch = arr[i];
			arr[i] = arr[si];
			arr[si] = ch;
 		}
		i++;
		si--;
	}
}

int main()
{
	char arr[] = "qiaogenb";
	int si = 0;
	si = sizeof(arr)/sizeof(arr[0]);
	contrary(arr, si-2);
	printf("%s", arr);
	return 0;
}

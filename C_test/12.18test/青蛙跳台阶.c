#include<stdio.h>
/*
int computer(int x, int* p)
{
	if(x > 2){
		computer(x-1, p[x] = p[x-1]+p[x-2]);
	}

}*/
int main()
{
	int x = 0;
	int arr[100] = {0};
	arr[0] = 1, arr [1] = 2;
	while(scanf("%d", &x) != EOF)
	{
		for(int i=0;i<x;i++){
			
			if(i>1){
				arr[i] = arr[i-1] + arr[i-2];
			}
		}
		printf("%d\n", arr[x-1]);
	}
	return 0;
}

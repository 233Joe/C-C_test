#include<stdio.h>

int seek(int arr[], int* x)
{
	int l = arr[0], r = arr[100], d = 0;
	while(l <= r){
		d = l + (r-l)/2;
		if(*x > d)
			l = d+1;
		else if(*x < d)
			r = d-1;
		else
			return d;
	}
	return 101;
}

int main()
{
	int i = 0, x = 0, num = 0;
	int arr[100]= {0};
	
	scanf("%d", &x);
	for(i=0;i<=100;i++)
		arr[i] = i;
	
	num = seek(&arr[0], &x);
	if(num != 101)
		printf("找到数字了下标是：%d %d", num, arr[num]);
	else
		printf("找不到这个数%d", x);
	
	return 0;
}

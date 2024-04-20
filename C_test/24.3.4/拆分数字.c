#include<stdio.h>

//打印函数
void input(int num)
{
	if(num > 9)
		input(num/10);
	printf("%d ", num%10);
}

int main()
{

	int x = 1, num = 0, a = 0;
	scanf("%d", &a);
	/**/
	num = a;
	while(num)
	{
		x *= 10;
		x += num % 10;
		num /= 10;
	}
	while(x != 1)
	{
		printf("%d ", x%10);
		x/=10;
	}
	printf("\n");
	//方法二递归
	input(a);
	
	return 0;
} 




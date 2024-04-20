#include<stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int x = 0, i = 0;
	unsigned int  num = 0;
	srand(time(NULL));
	num = rand() % 100;	
	
	while(x != num){
		scanf("%d", &x);

		if(num > x) 
			printf("数字太小了\n");
		
		else if(num < x)	
			printf("数字太大了\n");
		
		else 
			printf("答对啦答案是:%d,你错猜了:%d次", num, i);
		i++;
	}
	return 0;
}

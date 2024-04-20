#include<stdio.h>
int main()
{
	int x = 0, i = 0 , y = 0;
	scanf("%d", &y);
	x = y;
	while(y != 0){
		if(y % 2 != 0)
			i++;
		if(i >= 2)
		{
			y++;
			i -= 2;
		}
		y /= 2;
		x += y;
	}
	printf("可以买%d汽水，剩余%d个空瓶", x, i);
	return 0;
}


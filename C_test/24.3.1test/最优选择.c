#include <stdio.h>
int main()
{
	double money1 = 0, money2 = 0;
	money1 = 24 + 8 + 3;
	money2 = 16 + 8 + 3;
	if(money1 > 30)
		money1 = money1 * 0.8;
	
	printf("这个小伙最少要花%.2lf元", (money1 < money2 ? money1:money2));
	return 0;
}

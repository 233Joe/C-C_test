#include <stdio.h>

int main()
{
	int ret = 0, blue = 0;
	ret = 25 * 2 + 10;
	blue  = 30 * 2;
	
	if(ret == blue)
		printf("他们的钱一样多");
	
	else printf("他们的钱数不一样");
	return 0;
}

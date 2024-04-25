#include <stdio.h>

int main()
{
	int i1 = 0, i2 = 0, i3 = 0;
	int num = 0;
	for(i1=1;i1<=4;i1++)
	{
		for(i2=1;i2<=4;i2++)
		{
			if(i1 != i2)
			{
				for(i3=1;i3<=4;i3++)
				{
					if(i2 != i3 && i1 != i3)
					{
						printf("%d,%d,%d\n", i1, i2, i3);
					}
					num++;
				}
			}
			
		}
	}
	printf("%d", num);
	return 0;
}

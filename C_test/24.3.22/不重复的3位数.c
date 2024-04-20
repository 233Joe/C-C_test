#include<stdio.h>
int main()
{
	int i = 0;
	for(i=1;i<=9;i++){
		int j = 0;
		for(j=1;j<=9;j++)
		{
			int k = 0;
			if(i != j)
			{
				for(k=1;k<=9;k++)
				{
					if(i != k && k != j && i != j)
					{
						printf("%d%d%d\n", i, j, k);
					}
				}
			}
		}
	}
	return 0;
}


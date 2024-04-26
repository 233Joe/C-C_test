#include <stdio.h>

int main()
{
	int n = 0;
	int arr[30][30] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (0 == j || i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

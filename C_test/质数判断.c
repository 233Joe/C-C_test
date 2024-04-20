#include <stdio.h>

int main() {
	int a = 0, prime = 0, i = 0, j = 0;
	for (i = 100; i < 1000; i++)
	{
		a = 1;
		for (j = 2; j< i/2; j++) {
			if (i % j == 0)
			{
				a = 0;
				break;
			}
		}
		if (a == 1) prime++;
	}
	printf("%d", prime);
	return 0;
}


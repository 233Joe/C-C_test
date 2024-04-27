#include <stdio.h>

int main() {
	int num  = 0;
	while (scanf("%d", &num) != EOF) {
		if (num > 0) {
			printf("1\n");
		}
		else if (num < 0) {
			printf("0\n");
		}
		else {
			printf("0.5\n");
		}
	}
	return 0;
}

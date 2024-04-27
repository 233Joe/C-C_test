#include <stdio.h>

int main() {
	char ch = 0;
	while (scanf("%c", &ch) && ch != 0) {
		getchar();
		if (ch >= 97 && ch <= 122) {
			printf("%c\n", ch-32);
		}
		else if (ch >=65 && ch <= 90) {
			printf("%c\n", ch+32);
		}
		ch = 0;
	}
	return 0;
}

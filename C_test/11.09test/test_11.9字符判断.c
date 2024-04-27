#include <stdio.h>

int main() {
	char ch = '0';
	scanf("%c", &ch);
	if (ch >= 65 && ch <= 90 ||ch >= 97 && ch <= 122) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}

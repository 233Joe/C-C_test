#include <stdio.h>

int main() {
	char ch = 0;
	
	while (scanf("%c", &ch)) {
		getchar();
		if (ch == 0) {
			break;
		}
		if (ch>=65 && ch<=99 || ch>=97 && ch<=122) {
			printf("%c is an alphabet.\n", ch);
		}
		else {
			printf("%c is not an alphabet.\n", ch);
		}
		
		ch = 0;
	}
	
	return 0;
}

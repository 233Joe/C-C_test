#include <stdio.h>

int main() {
	int a = 0;
	int i = 0;
	while(scanf("%d", &a)){
		if (i == a) {
			break; 
		}
		if (a%2 == 0) {
			printf("Even\n");
		}
		else {
			printf("Odd\n");
		}
		i = a;
	}
	return 0;
}

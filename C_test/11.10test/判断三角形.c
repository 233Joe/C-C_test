#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a+b>c && a+c>b && b+c>a ) {
			if (a == b && b == c) {
				printf("Equilateral triangle!\n");
			}
			else if (a == b || a == c || c == b) {
				printf("Isosceles triangle!\n");
			}
			else {
				printf("Ordinary triangle!\n");
			}
		}
		else {
			printf("Not a triangle!");
		}
	}
	return 0;
}

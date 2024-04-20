#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 0;
	printf("学习编程\n");
	printf("你要好好学习吗？（1/0）");
	scanf("%d", &input);
	if (input == 1) {
		printf("获得好offer");
	}
	else
		printf("进厂");
	return 0;
}

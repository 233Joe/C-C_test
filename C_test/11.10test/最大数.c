#include <stdio.h>

int main() {
	int chin = 0, mathe = 0, eng = 0;
	int max = 0;
	int num = 0;
	scanf("%d %d %d ", &chin, &mathe, &eng);
	for (int i = 1; i <= 3; i++) {
		switch (i) {
			case 1: {
				num = chin;
				break;
			}
			case 2:{
				num = mathe;
				break;
			}
			case 3:{
				num = eng;
				break;
			}
		}
		if (num > max) {
			max = num;
		}
	}
	printf("%d", max);
	return 0;
}

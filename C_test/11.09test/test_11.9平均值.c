#include <stdio.h>

//平均值
int main() {
	int num = 0;
	float mean = 0;
	scanf("%d", &num);
	float arr= 0.0f;
	for (int i = 0; i < num; i++) {
		scanf("%f", &arr);
		mean += arr;
	}
	printf("%.1f", mean/num);
	return 0;
}



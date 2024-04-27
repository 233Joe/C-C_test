#include <stdio.h>

int main() {
	float h = 0.0f;
	int w = 0;
	float BMI = 0;
	while (scanf("%d %f", &w, &h) != EOF) {
		BMI = w / (h/100*h/100);
		if (BMI < 18.5) {
			printf("Underweight\n");
		}
		else if(BMI >= 18.5 && BMI <= 23.9){
			printf("Normal\n");
		}
		else if(BMI > 23.9 && BMI <= 27.9){
			printf("Overweight\n");
		}
		else {
			printf("Obese\n");
		}
	}
	return 0;
}

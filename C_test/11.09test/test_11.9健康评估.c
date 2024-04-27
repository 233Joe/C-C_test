#include <stdio.h>

int main() {
	float h = 0.0f;
	int weight = 0;
	
	scanf("%d", &weight);
	scanf("%f", &h);
	
	float BMI = weight/(h*h);
	if(BMI >= 18.5 && BMI <=23.9){
		printf("Normal");
	}
	else {
		printf("Abnormal");
	}
	
	return 0;
}

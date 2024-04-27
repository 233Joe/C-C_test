#include <stdio.h>

int main() {
	int month = 0;
	int day = 0;
	float price = 0.0f;
	int x = 0;
	float money = 0.0f;
	
	scanf("%f %d %d %d", &price, &month, &day, &x);
	if (month == 11 && day == month) {
		if (x==1) {
			money = (price * 0.7) - 50.0f;
		}
		else {
			money = price * 0.7;
		}
	}
	if (month == 12 && day == month) {
		if (x==1) {
			money = (price * 0.8) - 50.0f;
		}
		else {
			money = price * 0.8;
		}
	}
	if(money < 0){
		money = 0;
	}
	printf("%.2f", money);
	return 0;
}

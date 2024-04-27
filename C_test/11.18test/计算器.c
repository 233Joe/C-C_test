#include<stdio.h>
int main(){
	double a = 0;
	double b = 0;
	char ch = 0;
	double x = 0;
new:
	while(scanf("%lf%c%lf", &a, &ch, &b) != EOF){
		switch (ch) {
			case '*':{
				x = a*b;
				break;
			}
			case '/':{
				if(b == 0){
					printf("Wrong!Division by zero!\n");
					goto new;
				}
				else
					x = a/b;
				break;
			}
			case '+':{
				x = a+b;
			break;
			}
			case '-':{
				x = a-b;
				break;
			}
			default:{
				printf("Invalid operation!\n");
				goto new;
			}
		}
		printf("%.4lf%c%.4lf=%.4lf\n", a, ch, b, x);
	}
	return 0;
}

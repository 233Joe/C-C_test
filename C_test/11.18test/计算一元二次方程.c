#include<stdio.h>
#include <math.h>
int main(){
	float a = 0;
	float b = 0;
	float c = 0;
	float x1 = 0;
	float x2 = 0;
	float root = 0;
	float i1 = 0;
	float i2 = 0;
	
	while(scanf("%f %f %f", &a, &b, &c)!= EOF){
		
		if(a != 0){
			root = (b*b)-(4*a*c);
			x1 = (-b - sqrt(root))/(2*a);
			x2 = (-b + sqrt(root))/(2*a);
			if(x1 == -0){
				x1 = 0;
			}
			if(x2 == -0){
				x1 = 0;
			}
			if(root > 0){
				if(x1 <= x2){
					printf("x1=%.2f;x2=%.2f\n", x1, x2);
				}	
			}
			else if(root < 0){
				i1 = -b / (2*a);
				i2 = sqrt(-root ) / (2*a);
				if(i1 == -0){
					i1 = 0;
				}
				if(i2 == -0){
					i2 = 0;
				}
				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", i1, i2, i1, i2);
			}
			else{
				printf("x1=x2=%.2f\n", x1);
			}	
		}
		else{
			printf("Not quadratic equation\n");
		}
	}
	
	return 0;
}

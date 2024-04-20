#include <stdio.h>

int max(int a, int b, int c)
{
	if (a > b) return a > c ? a:c; 
	else return b > c ? b:c;
}

int main() {
	double a, b, c, m;
	double max1, max2, max3;
	scanf("%lf %lf %lf", &a, &b, &c);
	max1 = max(a+b, b, c);
	max2 = max(a, b+c, c);
	max3 = max(a, b, b+c);
	m = max1/(max2+max3);
	printf("%.2lf", m);
	return 0;
}

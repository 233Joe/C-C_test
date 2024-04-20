//总成绩 = 实验成绩 * 20% + 课堂表现成绩 * 10% + 过程考核成绩 * 20% + 期末上机考试成绩 * 50%
//，现在输入KiKi的各项成绩，请计算KiKi的总成绩。
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	double x = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	x = (a * 0.2) + (b * 0.1) + (c * 0.2) + (d * 0.5);
	printf("%lf", x);
	return 0;
}

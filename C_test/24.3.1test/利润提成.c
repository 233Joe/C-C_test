#include<stdio.h>

int main()
{
	double l = 0, bonus = 0;
	double bonus1 = 0, bonus2 = 0, bonus4 = 0,
	bonus6 = 0,bonus10 = 0, bonus10s = 0;
	
	printf("你的净利润是：");
	scanf("%lf", &l);
	
	bonus1 = 100000 * 0.10;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 + 200000 * 0.05;
	bonus6 = bonus4 + 200000 * 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	
	if(l <= 100000)
	{
		bonus = l * 0.10;
	}
	else if(l <= 200000)
	{
		bonus = bonus1 + (l-100000) * 0.075;
	}
	else if(l <= 400000)
	{
		bonus = bonus4 + (l-200000) * 0.05;
	}
	else if(l <= 600000)
	{
		bonus = bonus6 + (l-400000) * 0.03;
	}
	else if(l <= 1000000)
	{
		bonus = bonus10 + (l-600000) * 0.015;
	}
	else if(l > 1000000)
	{
		bonus = bonus10s + (l-1000000) * 0.01;
	}
	
	printf("提成为:%lf元", bonus);
	return 0;
}

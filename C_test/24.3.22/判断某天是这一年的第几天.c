#include<stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int n = 0;
	scanf("%d %d %d", &year, &month, &day);

	switch (month-1){
	case 11:
		n += 30;
	case 10:
		n += 31;
	case 9:
		n += 30;
	case 8:
		n += 31;
	case 7:
		n += 31;
	case 6:
		n += 30;
	case 5:
		n += 31;	
	case 4:
		n += 30;
	case 3:
		n += 31;	
	case 2:
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			n += 29;
		else
			n += 28;
	case 1:
		n += 31;
	}
	
	if(month <= 0 && month > 12)
	{
		printf("输入有误");
		return 0;
	}
	printf("今天是%d的第%d天", year, n += day);
	
	return 0; 
}

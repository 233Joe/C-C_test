#include<stdio.h>
int main(){
	//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
	//世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
	//就是闰年，这一年的2月是29天；其余年份的2月是28天。
	//平年的2月是28天，闰年2月是29天。
	//4月、6月、9月、11月各是30天。
	//1月、3月、5月、7月、8月、10月、12月各是31天。
	int year = 0;
	int month = 0;
	while(scanf("%d %d", &year, &month) != EOF){
		if(month == 4||month == 6||month == 9||month == 11)
			printf("%d", 30);
		
		else if(month == 2){
			if(((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0 )&& month == 2)
				printf("%d", 29);
			
			else
				printf("%d", 28);
		}
		else if(month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)
			printf("%d", 31);
		
	}
	return 0;
}

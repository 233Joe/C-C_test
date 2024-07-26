#include <iostream>
using namespace std;

class Date
{
public:
	
	int GetMonthDay(int year, int month)
	{
		static int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		if(month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return monthDays[month];
	}
	
	Date(int year = 0, int month = 1, int day = 1)
	{
		if(year >= 0 && (month >= 1 && month <= 12) &&
		  (day >= 1 && day <= GetMonthDay(year, month)))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "日期非法" << endl;
		}
	}
	
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	
	
	 bool operator<(const Date& b)
	{
		if(_year < b._year ||
		  (_year == b._year) && ((_month < b._month) ||
		  (_month == b._month && _day < b._day)))
		{
			return true;
		}
		return false;
	}

	Date& operator=(const Date& b)
	{
		if(this != &b)
		{
			_year = b._year;
			_month = b._month;
			_day = b._day;
		}
		return *this;
	}
	
	bool operator==(const Date& b)
	{
		return (_year == b._year) && (_month == b._month) && (_day == b._day);
	}
	
	bool operator>(const Date& b)
	{
		return !(*this < b) && !(*this == b);
	}
	
	bool operator<=(const Date& b)
	{
		return !(*this > b);
	}
	
	bool operator>=(const Date& b)
	{
		return !(*this < b);
	}
	
	bool operator!=(const Date& b)
	{
		return !(*this == b);
	}
	
	
	
	Date operator+(int day)
	{
		Date ret(*this);
		ret._day += day;
		while(ret._day > GetMonthDay(ret._year, ret._month))
		{
			ret._day -= GetMonthDay(ret._year, ret._month);
			ret._month++;
			if(ret._month == 13)
			{
				ret._year++;
				ret._month = 1;
			}
		}
		return ret;
	}
	
	Date operator-(int day)
	{
		Date ret(*this);
		ret._day -= day;
		while(ret._day < 1)
		{
			ret._month--;
			if(ret._month == 0)
			{
				ret._year--;
				ret._month = 12;
			}
			ret._day += GetMonthDay(ret._year, ret._month) + ret._day;
		}
		return ret;
	}
	
	Date& operator+=(int day)
	{
		_day += day;
		while(_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month++;
			if(_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
	
	Date& operator-=(int day)
	{
		_day -= day;
		while(_day < 1)
		{
			_month--;
			if(_month == 0)
			{
				_year--;
				_month = 12;
			}
			_day += GetMonthDay(_year, _month) + _day;
		}
		return *this;
	}
	
	Date& operator--()
	{
		return *this -= 1;
	}
	
	Date operator--(int)
	{
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}
	
	Date& operator++()
	{
		return *this += 1;
	}
	
	Date operator++(int)
	{
		Date tmp(*this);
		*this += 1;
		return tmp;
	}
	
	int operator-(const Date& b)
	{
		unsigned y = _year - b._year;
		unsigned m = _month - b._month;
		unsigned d = _day - b._day;
		y *= 365;
		m *= 30;
	}
	
private:
	int _year;
	int _month;
	int _day;
};



int main()
{
	Date a(2024, 7, 25);
	Date b(2024, 7, 25);
	cout << "a < b :" << (a < b) << endl;
	
	cout <<  "a > b :" << (a > b) << endl;
	
	Date d;
	d = a = b;
	d.Print();
	
	cout <<  "a == b :" << (a == b) << endl;

	cout <<  "a <= b :" << (a <= b) << endl;

	cout <<  "a >= b :" << (a >= b) << endl;

	cout <<  "a != b :" << (a != b) << endl;
	
	a.Print();
	b.Print();
	
	Date c = a + 10;
	c.Print();
	
	c = a - 365;
	c.Print();
	
	a += 20;
	a.Print();
	
	a -= 20;
	a.Print();
	
//	a--;
//	c.Print();
//	
//	a++;
//	a.Print();
//
	c = a - b;
	c.Print();

//	cout <<  "a += 10 :" << (a += 10) << endl;
//	
//	cout <<  "a -= 10 :" << (a -= 10) << endl;
//	
//	cout <<  "a - b :" << (a - b) << endl;

	
	
	return 0;
}

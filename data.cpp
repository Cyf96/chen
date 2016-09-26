#include<iostream>
using namespace std;
class Time
{
	public:
		Time()
		{}
		Time (int hour, int minute, int seconds)
			: _hour(hour),
			_minute(minute),
			_seconds(seconds)			  
		{}
		void printTime()
		{
			cout << _hour << "-" << _minute << "-" << _seconds << endl;
		}
	private:
		int _hour;
		int _minute;
		int _seconds;


};


class Data
{
	public:
		//Data()
		//{}
		//Data( double year=2016,int month = 9,int day=26)
		//{
		//	_year = year;
		//_month = month;
		//	_day = day;
		//}
		Data(int year)
			:_year(year)
			, t(11,11,11)
		{}
		Data(int year,int month,int day)
			: _year(year),
			_month(month),
			_day(day),
			t(0,1,0)
			 {
			 
			 }
		void dataInFo(int year, int month, int day)
		{
			_year = year;
			_month = month;
			_day = day;

		}
		
		void printdata()
		{
			cout << _year << "-" << _month << "-" << _day<< endl;
			t.printTime();
		}
	private:
		int _year;
		int _month;
		int _day;
		Time t;
};
void funtest()
{
	Data d1(2016,9,25);
	Data d2(2016);
	//Data d3;

	d1.printdata();
	d2.printdata();
	//d3.printdata();
}


int main()
{
	funtest();
	return 0;
}
#include<iostream>
using namespace std;
class Time
{   public :
		Time()
		{
		cout << "Gouzao" << this << endl;
	    }
		Time(int hour, int minute,int second)
			: _hour(hour)
			, _minute(minute)
			, _second(second)
		{
			cout << "GouzaoF" << this << endl;
	    }
		Time(const Time & t)
			: _hour(t._hour)
			, _minute(t._minute)
			, _second(t._second)
			

		{
			cout << "Kaobei" << this << endl;
		}
		~Time()
		{
			//cout << "Xigou" << this << endl;
		}
		void printInFo()
		{
			cout << _hour << "-" << _minute << "-" << _second << endl;

		}
    private :
		int _hour;
		int _minute;
		int _second;

};
class Data
{
	public :
		Data()
	
		{
			cout <<"gouzao"<< this << endl;
		}
		Data(int year, int month, int day)
			//:_year(year)
			//, _month(month)
			//, _day(day)
			//, t(0,0,0)
		{
		
		}
		Data( const Data& d)
			//:_year(d._year)
		//	, _month(d._month)
			//, _day(d._day)
		//	, t(d.t)

	    {
			cout << "kaobei"<<this << endl;
		}
		~Data()
		{
		 // cout << "xigou"<<this << endl;
		}
		void printInFo()
		{
			cout << _year << "-" << _month << "-" << _day<< endl;
			t.printInFo();
		}

	private :
		int _year;
		int _month;
		int _day;
		Time t;
};
void funtest()
{
	Data d;
	Data d1(d);
	//d.printInFo();
	//d1.printInFo();
}
int main()
{
	funtest();
	return 0;
}
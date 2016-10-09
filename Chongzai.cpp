#include <iostream>
using namespace std;


class CInt
{
	friend ostream& operator<<(ostream& _cout, const CInt& I);
    friend istream& operator>>(istream& _cin, CInt& I);
public:
	CInt()
	{
	
	}
	CInt(int b)
		:_value(b)
	{
	
	}
public:
	CInt& operator=(const CInt& I)
	{
		if (this != &I)
		{
			_value = I._value;
		}
		return *this;
	}
	CInt operator+(const CInt& I)
	{
		CInt t;
		t._value = _value + I._value;
		return t;
	}
	CInt operator-(const CInt& I)
	{
		CInt t;
		t._value = _value - I._value;
		return t;
	}
	CInt operator*(const CInt& I)
	{
		CInt t;
		t._value = _value*I._value;
		return t;
	}
	CInt operator/(const CInt& I)
	{
		CInt t;
		if (I._value != 0)
		{
			t._value = _value / I._value;
			return t;
		}
		exit(0);
		
	}
	bool operator==(const CInt& I)
	{
		if (_value == I._value)
		{
			return 1;
		}
		return 0;
	}
	bool operator!=(const CInt& I)
	{
		if (_value != I._value)
		{
			return 1;
		}
		return 0;
	}
	bool operator>(const CInt& I)
	{
		if (_value> I._value)
		{
			return 1;
		}
		return 0;
	}
	bool operator<(const CInt& I)
	{
		if (_value < I._value)
		{
			return 1;
		}
		return 0;
	}
	bool operator>=(const CInt& I)
	{
		if (_value >= I._value)
		{
			return 1;
		}
		return 0;
	}
	bool operator<=(const CInt& I)
	{
		if (_value <= I._value)
		{
			return 1;
		}
		return 0;
	}
	bool operator||(const CInt& I)
	{
		if (_value != 0)
		{
			return 1;
		}
		if (_value != 0)
		{
			return 1;
		}
		return 0;
	}
	bool operator&&(const CInt& I)
	{
		if (_value == 0)
		{
			return 0;
		}
		if (I._value == 0)
		{
			return 0;
		}
		return 1;
	}
	CInt& operator++()
	{
		_value = _value + 1;
		return *this;

	}
	CInt operator++(int)
	{
		CInt t;
		t._value = _value;
		_value = _value + 1;
		return t;
	}
	CInt& operator--()
	{

		_value = _value - 1;
		return *this;
	}
	CInt operator--(int)
	{
		CInt t;
		t._value = _value;
		_value = _value - 1;
		return t;
	}
private:
int _value;
};
ostream& operator<<(ostream& _cout, const CInt& I)
{
	_cout << I._value  ;
	return _cout;
}
istream& operator>>(istream& _cin, CInt& I)
{
	_cin >> I._value;
	return _cin;
}

int main()
{
	CInt c1(4);
	CInt c2(0);
	CInt c3;
	//if (c1 == c2)
	//{
	//	cout << "相等" << endl;
	//}
	//if (c1 != c2)
	//{
	//	cout << "不等" << endl;
	//}
	//if (c1 < c2)
	//{
	//	cout << "小于" << endl;
	//}
	//if (c1 > c2)
	//{
	//	cout << "大于" << endl;
	//}
	//if (c1<= c2)
	//{
	//	cout << "小于等于" << endl;
	//}
	//if (c1>= c2)
	//{
	//	cout << "大于等于" << endl;
	//}
	//c3 = c2 - c1;
	//c3 = c1 / c2;
	//--c1;
	//cout << c1 << endl;
	int i = c1 && c2;
	cout << i << endl;

	return 0;
}

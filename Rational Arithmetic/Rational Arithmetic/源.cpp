#include<iostream>
using namespace std;
class Rational{
public:
	Rational(int a,int b)
	:Son(a)
	, Mother(b)
	{}
	Rational& operator+(Rational r)
	{
		
	}

	Rational& operator-(Rational r)
	{

	}

	Rational& operator*(Rational r)
	{

	}
	Rational& operator/(Rational r)
	{

	}
	ostream& operator<<(ostream out)
	{
		if (Son == 0)
			cout << 0;
		else if (Mother == 0)
			cout << "Inf";
		else
			cout << Son << '/' << Mother;
	}
	void Simply(int a1, int b1)//»¯¼ò·ÖÊý
	{

	}

private:
	int Son;
	int Mother;
};
int main()
{
	int a1, b1,a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	Rational num1(a1, b1), num2(a2, b2);
	cout << "a1/b1 + a2/b2=" <<num1+num2<< endl;
	cout << "a1/b1 - a2/b2="<< endl;
	cout << "a1/b1 * a2/b2=" << endl;
	cout << "a1/b1 / a2/b2="<< endl;
}
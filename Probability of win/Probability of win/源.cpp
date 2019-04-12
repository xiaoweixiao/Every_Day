#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		double ret = 100;
		ret *= 1.0 / n;
		printf("%2.2fl\n", ret);
	}
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int from = 1;
		int second = 2;
		if (n == 1)
			cout << from << endl;
		else if (n==2)
			cout << second << endl;
		else
		{
			int next = from + second;
			for (int i = 3; i < n; i++)
			{
				next = from + second;
				from = second;
				second = next;
			}
			cout << next << endl;
		}
	}
	return 0;
}
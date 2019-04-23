#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int ret = 1;
		for (int i = 1; i < n; i++)
			ret *= i;
		cout << ret << endl;
	}
	system("pause");
	return 0;
}

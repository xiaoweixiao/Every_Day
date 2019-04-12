#include<iostream>
using namespace std;
int CountPath(int n, int m)
{
	if (n > 1 && m > 1)
		return CountPath(n - 1, m) + CountPath(n, m - 1);
	else if ((n == 1 && m >= 1) || (n >= 1 && m == 1))
		return m + n;
	else
		return 0;
}
int main()
{
	int n, m;
	cin >> n >> m;
	cout << CountPath(n, m) << endl;
	return 0;
}
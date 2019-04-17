#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int m, n, k;
	cin >> m >> n >> k;
	vector<vector<int> > in(m);
	for (int i = 0; i < m; i++)
		in[i].resize(n,0);

	int x, y;
	for (int i = 0; i < k; i++)
	{
		cin >> x >> y;
		in[x - 1][y - 1] = 1;
	}


}
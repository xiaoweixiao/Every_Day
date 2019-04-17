//9 6
//....#.
//.....#
//......
//......
//......
//......
//......
//#@...#
//.#..#.
#include<iostream>
#include<vector>
using namespace std;
int m, n;
int Count(int x, int y, vector<vector<char>>& in)
{
	int i = x, j = y;
	int ret = 0;
	while (i < m&&i>=0&&j < n&&j>=0)
	{
		if (i - 1 >= 0 && in[i - 1][j] == '.')
		{
			Count(--i, j, in);
			ret++;
		}
		else if (i + 1 < m&&in[i + 1][j] == '.')
		{
			Count(++i, j, in);
			ret++;
		}
		else if (j - 1 >= 0 && in[i][j - 1] == '.')
		{
			Count(i, --j, in);
			ret++;
		}
		else if (j + 1 < m&&in[i][j + 1] == '.')
		{
			Count(i, ++j, in);
			ret++;
		}
		else
			return ret;
	}
}
int main()
{
	while (cin >> m >> n)
	{
		int x = 0, y = 0;//×ßµÄÎ»ÖÃ
		vector<vector<char>> in(m);
		for (int i = 0; i < m; i++)
		{
			in[i].resize(n);
			for (int j = 0; j < n; j++)
			{
				cin >> in[i][j];
				if (in[i][j] == '@')
					x = i, y = j;
			}
		}
		cout << Count(x, y,in) << endl;
	}
	return 0;
}
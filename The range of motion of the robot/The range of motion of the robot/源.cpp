#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
	int movingCount(int threshold, int rows, int cols)
	{
		vector<vector<bool>> map(rows + 1);
		for (int i = 0; i<rows + 1; i++)
			map[i].resize(cols + 1, 0);
		return GetCount(threshold, 0, 0, rows, cols, map);
	}
	int GetCount(int key, int x, int y, int rows, int cols, vector<vector<bool>>& map)
	{
		if (x<0 || x >= rows || y<0 || y >= cols || AddSum(x) + AddSum(y)>key || map[x][y] == 1)
			return 0;
		map[x][y] = 1;
		return 1 + \
			GetCount(key, x - 1, y, rows, cols, map) + \
			GetCount(key, x + 1, y, rows, cols, map) + \
			GetCount(key, x, y - 1, rows, cols, map) + \
			GetCount(key, x, y + 1, rows, cols, map);
	}
	int AddSum(int x)
	{
		int sum = 0;
		while (x)
		{
			sum += x % 10;
			x = x / 10;
		}
		return sum;
	}
};

int main()
{
	Solution s;
	cout << s.movingCount(10, 1, 100);
	system("pause");
}
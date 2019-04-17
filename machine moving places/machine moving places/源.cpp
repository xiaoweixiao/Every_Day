#include<iostream>
#include<set>
using namespace std;

class Solution {
public:
	int CheckNum(int x,int y)
	{
		int sum = 0;
		while (x>0)
		{
			sum += x % 10;
			x /= 10;
		}
		while (y>0)
		{
			sum += y % 10;
			y /= 10;
		}
		return sum;
	}

	bool CheckIsable(int threshold, int rows, int cols, int x, int y, bool *visit)
	{
		if (x >= 0 && x < rows&&y >= 0 && y <= cols&& CheckNum(x,y) <= threshold && !visit[x*cols + y])
			return true;
		return false;
	}

	int GetCount(int threshold, int rows, int cols, int x, int y, bool *visit)
	{
		int count = 0;
		if (CheckIsable(threshold, rows, cols, x, y, visit))
		{
			visit[x*cols + y] = true;
			count = 1 + GetCount(threshold, rows, cols, x - 1, y, visit) + GetCount(threshold, rows, cols, x + 1, y, visit) +
				GetCount(threshold, rows, cols, x, y + 1, visit) + GetCount(threshold, rows, cols, x, y - 1, visit);
		}
		return count;
	}
	int movingCount(int threshold, int rows, int cols)
	{
		bool *visit = new bool[rows*cols];
		for (int i = 0; i<rows*cols; i++)
			visit[i] = false;
		int count = GetCount(threshold, rows, cols, 0, 0, visit);
		delete[] visit;
		return count;
	}
};
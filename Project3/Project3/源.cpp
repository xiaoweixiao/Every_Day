#include<iostream>
#include<vector>
using namespace std;

int GetCount(int x, int y, vector<vector<int>>& in,int m,int n,bool* map)
{
	int count = 0;
	int index = x*m + y;
	if (x < 0 || x >= m || y < 0 || y >= n || map[index] == 1)
		return 0;

	int pp = in[x - 1][y] + in[x + 1][y] + in[x][y - 1] + in[x][y + 1];
	count += pp - in[x - 1][y];
	count += pp - in[x + 1][y];
	count += pp - in[x][y - 1];
	count += pp - in[x][y + 1];
	return count + GetCount(x - 1, y, in, m, n, map) + GetCount(x+1,)
}
int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<int>> in(m);
	for (int i = 0; i < m; i++)
		in[i].resize(n);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			cin >> in[i][j];
	}
	bool* map = new bool[m*n];
	for (int i = 0; i < m*n; i++)
		map[i] = 0;
	cout << GetCount(1, 1, in,m,n,map);
	
	system("pause");
	return 0;
}

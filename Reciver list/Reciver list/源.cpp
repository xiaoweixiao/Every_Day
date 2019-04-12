//Reciver list
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n;

	while(cin >> n)
	{
		getchar();
		vector<string> in(n);
		for (int i = 0; i < n; i++)
			getline(cin, in[i]);

		for (int i = 0; i < n; i++)
		{
			for (size_t j = 0; j < in[i].size(); j++)
			{
				if (in[i][j] == ',' || in[i][j] == ' ')
				{
					in[i].push_back('"');
					in[i].insert(0, 1, '"');//string的insert字符需要三个参数
					break;
				}
			}
			if (i != n - 1)
			{
				in[i].push_back(',');
				in[i].push_back(' ');
			}
			cout << in[i];
		}
		cout << endl;
	}
	return 0;
}

//3
//Joe
//Quan, William
//Letendre, Bruce
//2
//Leon
//Kewell
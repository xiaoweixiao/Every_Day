//6
//A connect
//A disconnect
//B connect
//C connect
//B disconnect
//C disconnect
#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		getchar();
		string temp;
		vector<string> in(2 * n);
		for (int i = 0; i < 2 * n; i++)
			cin >> in[i];

		int ret = 0;
		int max = 0;
		for (int i = 0; i < 2 * n; i++)
		{
			if (strcmp(in[i].c_str(), "connect") == 0)
			{
				ret++;
				if (ret>max)max = ret;
			}
			else if (strcmp(in[i].c_str(), "disconnect") == 0)
				ret--;
		}
		cout << max << endl;
	}
	system("pause");
	return 0;
}
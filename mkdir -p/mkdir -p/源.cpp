//3
// a
// a / b
// a / b / c
//3
// usr / local / bin
// usr / bin
// usr / local / share / bin
//
//mkdir - p / a / b / c
//
//mkdir - p / usr / bin
//mkdir - p / usr / local / bin
//mkdir - p / usr / local / share / bin

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> in;
		vector<string> out;
		string temp;
		getchar();
		for (int i = 0; i < n; i++)
		{
			getline(cin, temp);
			in.push_back(temp);
		}

		for (int i = 0; i < n; i++)
		{
			int j = 0;
			for (; j < n; j++)
			{
				if (i != j&&in[j].find_first_of(in[i]) != string::npos)
					break;
			}
			if (j == n)
				out.push_back(in[i]);
		}
	}
}
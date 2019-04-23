#include<iostream>
#include<string>
using namespace std;

int main()
{
	string in;
	while (cin >> in)
	{
		string ret;
		for (size_t i = 0; i < in.size(); i++)
		{
			if (in[i] != '_')
				ret.push_back(in[i]);
			else
			{
				ret.push_back(toupper(in[i + 1]));
				i++;
			}
		}
		cout << ret << endl;
	}
	return 0;
}

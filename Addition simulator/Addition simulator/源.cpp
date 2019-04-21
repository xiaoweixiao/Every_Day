#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int add = a + b;
	cout << a << '+' << b << '=' << add << endl;
	vector<string> out;
	for (int i = 0; i<4; i++)
	{
		string temp;
		size_t blank = 0;
		temp.clear();
		switch (i)
		{
		case 0:
			temp += to_string(a);
			blank = 7 - temp.size();
			for (size_t i = 0; i < blank; i++)
				temp = ' ' + temp;
			break;
		case 1:
			temp += to_string(b);
			blank = 6 - temp.size();
			for (size_t i = 0; i < blank; i++)
				temp = ' ' + temp;
			temp = '+' + temp;
			break;
		case 2:
			temp += "-------";
			break;
		case 3:
			temp += to_string(add);
			blank = 7 - temp.size();
			for (size_t i = 0; i < blank; i++)
				temp = ' ' + temp;
			break;
		}
		out.push_back(temp);
	}
	for (int i = 0; i<4; i++)
		cout << out[i] << endl;
	system("pause");
	return 0;
}
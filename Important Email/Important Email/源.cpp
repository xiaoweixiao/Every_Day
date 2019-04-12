#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	string s1, s2;
	while (getline(cin, s1))
	{
		getline(cin, s2);
		size_t begin = 0, end = 0;
		string temp;
		while (begin < s1.size())
		{
			if (s1[begin] == '"')
			{
				end = s1.find_first_of('"', begin + 1);
				temp = s1.substr(begin, end-begin + 2);
				temp.erase(0, 1);
				temp.pop_back();
				if (end != s1.size() - 1)
					temp.pop_back();

				if (strcmp(temp.c_str(), s2.c_str())==0)
					cout << "Ignore" << endl;
				end++;
			}
			else
			{
				end = s1.find_first_of(',', begin + 1);
				temp = s1.substr(begin, end-begin + 1);
				temp.pop_back();
				if (strcmp(temp.c_str(), s2.c_str()) == 0)
					cout << "Ignore" << endl;
			}
			begin = end + 1;
		}
		cout << "Important" << endl;
	}
	return 0;
}

//Joe, Kewell, Leon
//Joe
//"Letendre, Bruce", Joe, "Quan, William"
//William
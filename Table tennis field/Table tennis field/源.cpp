#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


bool Func(string& s1, string& s2)
{
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	size_t index1 = 0, index2 = 0;
	while (index2 < s2.size()){
		if (s1[index1] == s2[index2])
			index1++, index2++;
		else if (index1 < s1.size())
			index1++;
		else
			return false;
	}
	return true;
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (Func(s1, s2))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

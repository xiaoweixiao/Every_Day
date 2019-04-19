#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Solution {
public:
	bool isNumeric(char* string)
	{
		if (string == nullptr)return false;
		if (*string == '+' || *string == '-')
			string++;
		if (*string == '\0')return false;

		bool point = false, num = false, e = false;
		while (*string != '\0')
		{
			if (*string >= '0'&&*string <= '9')
			{
				num = true;
				string++;
			}
			else if (*string == '.')
			{
				if (point || e)return false;
				string++;
				point = true;
			}
			else if (*string == 'e' || *string == 'E')
			{
				if (e || !num)return false;
				string++;
				e = true;
				if (*string == '+' || *string == '-')
					string++;
				if (*string == '\0')return false;
			}
			else
				return false;
		}
		return true;
	}

};
int main()
{
	Solution s;
	s.isNumeric("-.123");
	system("pause");
	return 0;
}

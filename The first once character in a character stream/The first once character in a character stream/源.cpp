#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Solution
{
public:
	Solution()
	{
		for (int i = 0; i<256; i++)
			arr[i] = -1;
	}
	//Insert one char from stringstream
	void Insert(char ch)
	{
		if (arr[ch] == -1)
			arr[ch] = ch;
		else
			arr[ch] = '/3';
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		for (int i = 0; i<256; i++)
		{
			if (arr[i] == i)
				return i;
		}
		return '#';
	}
private:
	int arr[256];
};
int main()
{
	Solution s;
	s.Insert('g');
	s.Insert('o');
	s.Insert('o');
	s.Insert('l');
	s.Insert('e');
	s.FirstAppearingOnce();
	system("pause");
	return 0;
}

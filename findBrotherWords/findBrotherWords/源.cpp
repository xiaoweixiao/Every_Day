//#include<iostream> 
//#include<string> 
//#include<vector> 
//#include<algorithm> 
//using namespace std;
//
//int judge(string findString, string v)
//{
//	sort(findString.begin(), findString.end());
//	sort(v.begin(), v.end());
//	if (findString == v)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int n, i, index;
//	vector<string> words;
//	vector<string> bother;
//	string findWord;
//	string temp;
//
//	while (cin >> n)
//	{
//		words.clear();
//		bother.clear();
//		for (i = 0; i<n; i++)
//		{
//			cin >> temp;
//			words.push_back(temp);
//		}
//		cin >> findWord;
//		cin >> index;
//
//		for (i = 0; i<n; i++)
//		{
//			if (findWord != words[i] && judge(findWord, words[i]))
//				bother.push_back(words[i]);
//		}
//
//		sort(bother.begin(), bother.end());
//		cout << bother.size() << endl;
//		if (index <= bother.size())
//			cout << bother[index - 1] << endl;
//	}
//	return 0;
//}

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isBrother(string findWord, string words)
{
	sort(findWord.begin(), findWord.end());
	sort(words.begin(), words.end());
	if (findWord == words)
		return true;
	else
		return false;
}
int main()
{
	vector<string> words;
	vector<string> brothers;
	int n;
	string temp;
	string findWord;
	size_t index;
	while (cin >> n){
		words.clear();
		brothers.clear();
		for (int i = 0; i<n; i++){
			cin >> temp;
			words.push_back(temp);
		}
		cin >> findWord;
		cin >> index;
		for (int i = 0; i<n; i++)
		{
			if (findWord != words[i] && isBrother(findWord, words[i]))
				brothers.push_back(words[i]);
		}
		sort(brothers.begin(), brothers.end());
		cout << brothers.size() << endl;
		if (index <= brothers.size())
			cout << brothers[index - 1] << endl;
	}
	return 0;
}
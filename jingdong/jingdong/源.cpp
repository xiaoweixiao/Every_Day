//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	vector<string>  S(n);
//	map<int, int> out;
//
//	string T;
//	for (int i = 0; i < n; i++)
//		getline(cin, S[i]);
//	getline(cin,T);
//	for (int i = 0; i < n; i++)
//	{
//		size_t begin = 0, end = 0;
//		while (begin < T.size())
//		{
//			begin = T.find_first_of(S[i], begin);
//			if (begin < T.size())
//			{
//				end = begin + S[i].size() - 1;
//				out.insert({ begin, end });
//				begin = end + 1;
//			}
//		}
//	}
//
//	map<int, int>::iterator it = out.begin();
//	while (it != out.end())
//	{
//		if ((*it).second > (*++it).first)
//		{
//			out.erase(it);
//			it = out.begin();
//		}
//	}
//	cout << out.size() << endl;
//	return 0;
//}


#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> in;
	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		in.insert({ a, b });
	}

	kv.push_back({0,in[0]});
	for (size_t i = 0;)
}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int Func(int x)
//{
//	int ret = 1;
//	for (int i = 0; i<x; i++)
//		ret *= 2;
//	return ret;
//}
//int  NumberOf1(int n) {
//	int m = n, count = 0;
//	while (m)
//	{
//		m = m&(m - 1);
//		count++;
//	}
//	return count;
//}
//int add_2(int num1, int num2){
//	int sum = 0;
//	int num3 = 0;
//	int num4 = 0;
//	while (num1&num2){
//		num3 = num1^num2;
//		num4 = (num1&num2) << 1;
//		num1 = num3;
//		num2 = num4;
//	}
//	sum = num1^num2;
//	return sum;
//}
//int main()
//{
//	int a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		int ret = pow(2,a);
//
//		cout << NumberOf1(ret) << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//bool IsPalindrome(string& add)
//{
//	int front = 0;
//	int last = add.size() - 1;
//	while (front <= last)
//	{
//		if (add[front] != add[last])
//			return false;
//		else
//			front++, last--;
//	}
//	return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 1;
//	string mode = "0123456789ABCDEF";
//	for (int i = 1; i <= n; i++){
//		string s;
//		int temp = i;
//		while (temp){
//			s = mode[temp % 2] + s;
//			temp = temp / 2;
//		}
//		if(IsPalindrome(s))
//			count++;
//	}
//	cout << count << endl;
//	return 0;
//}


#include<iostream>
#include<string>
using namespace std;
bool IsPalindrome(string& add)
{
	int front = 0;
	int last = add.size() - 1;
	while (front <= last)
	{
		if (add[front] != add[last])
			return false;
		else
			front++, last--;
	}
	return true;
}
int main()
{
	long long n;
	cin >> n;
	int count = 0;
	string mode = "0123456789ABCDEF";
	for (long long i = 0; i <= n; i++){
		string s;
		long long temp = i;
		while (temp){
			s = mode[temp % 2] + s;
			temp = temp / 2;
		}
		if(IsPalindrome(s))
			count++;
	}
	cout << count << endl;
	return 0;
}
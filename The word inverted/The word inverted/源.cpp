#include <string>
#include <iostream>
#include <stack>
using namespace std;
int main(){
	string str;
	while (getline(cin, str)){
		string temp;
		stack<string> stackString;
		bool flag = false;

		int len = str.size();

		for (int i = 0; i <= len; ++i){
			if (isalpha(str[i])){
				temp += str[i];
				flag = true;
			}
			else if (!isalpha(str[i]) && flag == true){
				flag = false;
				stackString.push(temp);
				temp.clear();
			}
		}

		while (!stackString.empty()){
			cout << stackString.top();
			stackString.pop();
			if (!stackString.empty())
				cout << ' ';
			else
				cout << endl;
		}
	}
	return 0;
}
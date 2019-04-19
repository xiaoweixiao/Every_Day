#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int getcount(char str[], int strLen, int len1, int len2){
	int count = 0;
	for (int len = len1; len <= len2; len++){
		for (int i = 0; i < strLen && i < len; i++)
			count += (26 - (str[i] - 'a' + 1)) * pow(26, strLen - i - 1);
		if (len > strLen)
			count += pow(26, len - strLen);
	}
	return count;
}
int main(){
	char str1[120];
	char str2[120];
	memset(str1, 0, sizeof(str1));
	memset(str2, 0, sizeof(str2));
	int len1, len2;
	while (cin >> str1 >> str2 >> len1 >> len2){
		int strlen1 = strlen(str1);
		int strlen2 = strlen(str2);
		int count1 = getcount(str1, strlen1, len1, len2);
		int count2 = getcount(str2, strlen2, len1, len2);
		int count = count1 - count2 - 1;
		cout << count << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;


class Solution{
public:
	bool hasPath(char* matrix, int rows, int cols, char* str)
	{
		int *map = new int[rows*cols];
		for (int i = 0; i < cols*rows; i++) 
			map[i] = 0;
		for (int i = 0; i < rows; i++){
			for (int j = 0; j < cols; j++){
				if (hasPathOne(matrix, i, j, rows, cols, str, map)){
					delete[] map;
					map = nullptr;
					return true;
				}
			}
		}
		return false;
	}
public:
	bool hasPathOne(char* matrix, int i, int j, int rows, int cols, char* str, int *map){
		int index = i*cols + j;
		if (i < 0 || j < 0 || i >= rows || j >= cols || map[index] == 1 || matrix[index] != *str) return false;
		if (*(str+1)==0) return true;else str++;
		map[index] = 1;
		if (hasPathOne(matrix, i - 1, j, rows, cols, str,  map) ||
			hasPathOne(matrix, i + 1, j, rows, cols, str, map) ||
			hasPathOne(matrix, i, j - 1, rows, cols, str,  map) ||
			hasPathOne(matrix, i, j + 1, rows, cols, str,  map))
			return true;
		map[index] = 0;
		return false;
	}
};

int main()
{
	Solution s;
	char* matrix = "abcesfcsadee";
	char* str1 = "bcced";
	char* str2 = "abcb";
	cout<<s.hasPath(matrix,3,4,str1)<<endl;
	cout << s.hasPath(matrix, 3, 4, str2) << endl;
	system("pause");
	return 0;
}

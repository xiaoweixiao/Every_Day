#include<iostream>
int main()
{
	int h1, m1, h2, m2;
	std::cin >> h1 >> m1 >> h2 >> m2;
	int subhour = h2 - h1;
	int submin = subhour * 60 + m2 - m1;
	std::cout << submin;
	return 0;
}
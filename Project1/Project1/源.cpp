#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(40);
	free(p);
	free(p);
	free(p);
	return 0;
}



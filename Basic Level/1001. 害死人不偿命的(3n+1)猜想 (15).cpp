// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, count = 0;
	scanf_s("%d", &n);
	while (n != 1){
		if (n % 2 == 0){
			n /= 2;
		}
		else{
			n = (3 * n + 1) / 2;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}

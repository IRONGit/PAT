// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	char c;
	cin >> n >> c;
	int r = round(double(n) / 2);
	for (int i = 0; i < r; i++){
		if (i == 0 || i == r - 1){
			for (int j = 0; j < n; j++){
				cout << c;
			}
		}
		else{
			for (int j = 0; j < n; j++){
				if (j == 0 || j == n - 1){
					cout << c;
				}
				else{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
/*
10 a

aaaaaaaaaa
a        a
a        a
a        a
aaaaaaaaaa

*/
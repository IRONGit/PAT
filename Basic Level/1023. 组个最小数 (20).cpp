// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;

//2 2 0 0 0 3 0 0 1 0
int num[51];
int _tmain(int argc, _TCHAR* argv[])
{
	int locat = 0;
	for (int i = 0; i < 10; i++){
		int t;
		cin >> t;
		for (int j = 0; j < t; locat++, j++){
			num[locat] = i;
		}
	}
	sort(num, num + locat);
	if (num[0] == 0){
		for (int i = 1; i < locat; i++){
			if (num[i] != 0){
				num[0] = num[i];
				num[i] = 0;
				break;
			}
		}
	}
	for (int i = 0; i < locat; i++){
		cout << num[i];
	}
	return 0;
}

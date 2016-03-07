// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int ct[11];

int _tmain(int argc, _TCHAR* argv[])
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++){
		ct[s[i] - 48]++;
	}
	for (int i = 0; i < 11; i++){
		if (ct[i] != 0){
			cout << i << ":" << ct[i] << endl;
		}
	}
	return 0;
}

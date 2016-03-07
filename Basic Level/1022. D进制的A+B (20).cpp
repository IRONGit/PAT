// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<char> vec;
//123 456  579
//1103
void toRadix(int num, int d){

	while (num != 0){
		int t = num%d;
		num = num / d;
		vec.push_back(char(t + 48));
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, d;
	cin >> a >> b >> d;
	int sum = a + b;
	if (sum == 0){
		cout << 0 << endl;
		return 0;
	}
	toRadix(sum, d);
	for (vector<char>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++){
		cout << (*it);
	}
	return 0;
}

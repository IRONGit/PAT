// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string s, ans;
	getline(cin, s);
	if (s[0] == '-'){
		ans += s[0];
	}
	int indexE = s.find('E');
	string num = s.substr(1, indexE - 1);
	char x = s[indexE + 1];
	string exp = s.substr(indexE + 2);
	stringstream ss;
	int e;
	ss << exp;
	ss >> e;
	if (e == 0){
		cout << ans << num << endl;
		return 0;
	}
	if (x == '+'){
		if (e < num.size() - 2){
			ans = ans + num[0] + num.substr(2, e) + "." + num.substr(e + 2);
		}
		else{
			ans = ans + num[0] + num.substr(2, num.size());
			for (int i = 0; i < e - num.size() + 2; i++){
				ans += '0';
			}
		}
	}
	else{
		ans += "0.";
		while (e-- != 1){
			ans += "0";
		}
		ans = ans + num[0] + num.substr(2);
	}
	cout << ans << endl;
	return 0;
}
/*+1.23400E-03
0.00123400
*/
/*
-1.2E+10
-12000000000
*/
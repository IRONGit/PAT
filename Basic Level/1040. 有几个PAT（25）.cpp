// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

/*这一题自己写的没有通过,看了别人的方法后写的*/
int _tmain(int argc, _TCHAR* argv[])
{
	string s;
	cin >> s;
	int count = 0;
	int tcount = 0, atcount = 0, patcount = 0;
	int a = 0, b = 0, c = 0;
	int l = 0, m = 0, n = 0;
	for (int i = s.length() - 1; i >= 0; i--){
		if (s[i] == 'T'){
			tcount++;
		}
		else if (s[i] == 'A'){
			atcount = (atcount + tcount) % 1000000007;
		}
		else{
			patcount = (patcount + atcount) % 1000000007;
		}
	}
	cout << patcount << endl;
	return 0;
}

// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
string s;
string arr[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int _tmain(int argc, _TCHAR* argv[])
{
	long sum = 0;
	getline(cin, s);
	stringstream stream;
	for (int i = 0; i < s.length(); i++){
		int x;
		stream << s[i];
		stream >> x;
		sum += x;
		stream.clear();
	}
	vector<string> vec;
	while (sum != 0){
		int t = sum % 10;
		vec.push_back(arr[t]);
		sum /= 10;
	}
	//reverse_iteratorÄæÏòµü´úÆ÷
	for (vector<string>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++){
		if (it == vec.rbegin()){
			cout << (*it);
		}
		else{
			cout << " " << (*it);
		}

	}
	return 0;
}

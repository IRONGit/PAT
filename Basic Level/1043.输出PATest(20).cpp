// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

string s;

int a[6];
int _tmain(int argc, _TCHAR* argv[])
{
	getline(cin, s);
	for (int i = 0; i<s.length(); i++){
		char c = s[i];
		if (c == 'P'){
			a[0]++;
		}
		else if (c == 'A'){
			a[1]++;
		}
		else if (c == 'T'){
			a[2]++;
		}
		else if (c == 'e'){
			a[3]++;
		}
		else if (c == 's'){
			a[4]++;
		}
		else if (c == 't'){
			a[5]++;
		}
	}
	while (a[0]>0 || a[1]>0 || a[2]>0 || a[3]>0 || a[4]>0 || a[5]>0){
		if (a[0]>0){
			cout << "P";
			a[0]--;
		}
		if (a[1]>0){
			cout << "A";
			a[1]--;
		}
		if (a[2]>0){
			cout << "T";
			a[2]--;
		}
		if (a[3]>0){
			cout << "e";
			a[3]--;
		}
		if (a[4]>0){
			cout << "s";
			a[4]--;
		}
		if (a[5]>0){
			cout << "t";
			a[5]--;
		}
	}
	return 0;
}
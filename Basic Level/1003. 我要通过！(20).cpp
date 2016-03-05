// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		int indexP = s.find('P');
		int indexA = s.find('A');
		int indexT = s.find('T');
		if (indexP == -1 || indexT == -1 || indexA == -1 || indexP > indexT){
			cout << "NO" << endl;
			continue;
		}
		int ctA = 0;
		int ctB = 0;
		int ctC = 0;
		bool over = false;
		for (int j = 0; j < s.length(); j++){
			if (s[j] != 'P'&&s[j] != 'A'&&s[j] != 'T'){
				cout << "NO" << endl;
				over = true;
				break;
			}
			if (j < indexP&&s[j] == 'A'){
				ctA++;
			}
			if (j > indexP&&j<indexT&&s[j] == 'A'){
				ctB++;
			}
			if (j>indexT&&s[j] == 'A'){
				ctC++;
			}
		}
		if (!over){
			if (ctA*ctB != ctC){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}

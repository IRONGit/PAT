// b31,cpp : Defines the entry point for the console application,
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
/*
	4
	320124198808240056
	12010X198901011234
	110108196711301866
	37070419881216001X

	12010X198901011234
	110108196711301866
	37070419881216001X

	2
	320124198808240056
	110108196711301862


	All passed



*/
int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char fM[] = { '1' ,'0' ,'X','9' ,'8' ,'7' ,'6' ,'5' ,'4' ,'3' ,'2' };
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	int sum = 0;
	getchar();
	string s;
	bool ok = true;
	for (int i=0;i<n;i++){
		getline(cin, s);
		for (int i=0;i<17;i++){
			int t = s[i] - '0';
			sum += weight[i] * t;
		}
		int z = sum % 11;
		char fixNumber = fM[z];
		if (fixNumber!=s[17]){
			ok = false;
			cout<<s<< endl;
		}
		sum = 0;
		//cin.clear();
	}
	if (ok){
		cout << "All passed" << endl;
	}
	return 0;
}


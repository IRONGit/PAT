// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int ct[100];
int _tmain(int argc, _TCHAR* argv[])
{
	string h, w;
	cin >> h;
	cin >> w;
	for (int i = 0; i < h.length(); i++){
		ct[h[i] - 48]++;
	}
	int sum = 0;
	int remain = h.length();
	for (int i = 0; i < w.length(); i++){
		if (ct[w[i] - 48] > 0){
			ct[w[i] - 48]--;
			remain--;
		}
		else{
			sum++;
		}
	}
	if (sum != 0){
		cout << "No " << sum << endl;
	}
	else{
		cout << "Yes " << remain << endl;
	}
	return 0;
}

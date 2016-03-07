// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
using namespace std;

bool a[101];
int b[101];
int _tmain(int argc, _TCHAR* argv[])
{
	int k;
	cin >> k;
	for (int i = 0; i < k; i++){
		int t;
		cin >> t;
		b[t] = 1;
		while (t != 1){
			if (t % 2 == 0){
				t = t / 2;
			}
			else{
				t = (t * 3 + 1) / 2;
			}
			if (t <= 100){
				a[t] = true;
			}
		}
	}
	bool begin = false;
	for (int i = 100; i >= 0; i--){
		if (b[i] == 1 && a[i] == false){
			if (begin == false){
				cout << i;
				begin = true;
			}
			else{
				cout << " " << i;
			}
		}
	}
	return 0;
}

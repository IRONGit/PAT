// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a1, b1, c1, a2, b2, c2;
	int a3, b3, c3;
	scanf_s("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	int ma = c1 + b1 * 29 + a1 * 17 * 29;
	int mb = c2 + b2 * 29 + a2 * 17 * 29;
	if (ma<mb){
		int t = mb - ma;
		cout << (t / 29 / 17) << "." << (t / 29) % 17 << "." << t % 29 << endl;
	}
	else if (ma>mb){
		int t = ma - mb;
		cout << "-"<<(t / 29 / 17) << "." << (t / 29) % 17 << "." << t % 29 << endl;
	}
	else{
		cout << "0.0.0" << endl;
	}
	return 0;
}

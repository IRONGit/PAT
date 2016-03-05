// b41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

char id[1001][15];
int a[1001];

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		char x[15];
		int y;
		int z;
		cin >> x >> y >> z;
		strcpy_s(id[y], x);
		a[y] = z;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++){
		int t;
		cin >> t;
		cout << id[t] << " " << a[t] << endl;
	}
	return 0;
}

	return 0;
}


// b11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		long a, b, c;
		cin >> a >> b >> c;
		long sum = a + b;
		if (sum>c){
			cout << "Case #" << (i + 1) << ": true" << endl;
		}
		else{
			cout << "Case #" << (i + 1) << ": false" << endl;
		}
	}
	return 0;
}


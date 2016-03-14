// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

double a[100001];

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	scanf_s("%d", &n);
	double sum = 0;
	double temp;
	for (int i = 0; i < n; i++){
		scanf_s("%lf", &temp);
		sum += temp * (i + 1)*(n - i);
	}

	// 	for (int i=0;i<n;i++){
	// 		int end = 1;
	// 		for (int j=0;j<n;j++){
	// 			for (int k=i;k<end;k++){
	// 				sum += a[k];
	// 				cout << a[k] << " ";
	// 			}
	// 			cout << endl;
	// 			end++;
	// 		}
	// 	}
	printf("%.2lf", sum);
	return 0;
}

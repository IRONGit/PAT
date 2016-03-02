// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;

int number[100001];
int cpnumber[100001];
int ans[100001];


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++){
		scanf_s("%d", &number[i]);
		cpnumber[i] = number[i];
	}
	sort(cpnumber, cpnumber + n);
	int count = 0;
	int max = 0;
	for (int i = 0; i<n; i++){
		if (number[i]>max){
			max = number[i];
		}
		if (number[i] == cpnumber[i] && max == cpnumber[i]){
			ans[count] = number[i];
			count++;
		}
	}
	printf("%d\n", count);
	for (int i = 0; i < count; i++){
		printf("%d", ans[i]);
		if (i != count - 1){
			printf(" ");
		}
	}
	return 0;
}
/*
5
1 3 2 4 5

3
1 4 5

*/
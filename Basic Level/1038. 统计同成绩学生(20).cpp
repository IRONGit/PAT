// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
using namespace std;

int score[101];
int _tmain(int argc, _TCHAR* argv[])
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		int t;
		cin >> t;
		score[t]++;
	}
	int K;
	cin >> K;
	for (int i = 0; i < K; i++){
		int t;
		cin >> t;
		if (i == 0){
			cout << score[t];
		}
		else{
			cout << " " << score[t];
		}

	}
	return 0;
}

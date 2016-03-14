// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
using namespace std;

int teamN[10001];
int memberN[10001];
int score[10001];
int sum[1001];

int _tmain(int argc, _TCHAR* argv[])
{
	int N, maxScore = 0, maxIndex = -1;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++){
		scanf_s("%d-%d %d", &teamN[i], &memberN[i], &score[i]);
		sum[teamN[i]] += score[i];
		if (sum[teamN[i]] > maxScore){
			maxScore = sum[teamN[i]];
			maxIndex = teamN[i];
		}
	}
	cout << maxIndex << " " << maxScore << endl;
	return 0;
}

/*
4
10120150912233 2 4
10120150912119 4 1
10120150912126 1 3
10120150912002 3 2
2
3 4
*/
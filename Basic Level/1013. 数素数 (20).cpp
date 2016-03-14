// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int number){
	for (int i = 2; i <= sqrt(number); i++){
		if (number != i&&number%i == 0){
			return false;
		}
	}
	return true;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int M, N;
	cin >> M >> N;
	int ct = 0;
	int count = 0;
	for (int i = 2;; i++){
		bool is = false;
		if (isPrime(i)){
			ct++;
			is = true;
		}
		if (is&&ct >= M&&ct < N){
			cout << i;
			count++;
			if (count % 10 != 0){
				cout << " ";
			}
			else{
				cout << endl;
			}
		}
		if (ct == N){
			cout << i << endl;
			break;
		}
	}
	return 0;
}

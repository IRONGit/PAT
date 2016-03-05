// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char nameMax[11], idMax[11], nameMin[11], idMin[11], name[11], id[11];
	int scoreMax = -1, scoreMin = 101, score;


	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> name >> id >> score;
		if (scoreMax < score){
			scoreMax = score;
			strcpy_s(nameMax, name);
			strcpy_s(idMax, id);
		}
		if (scoreMin > score){
			scoreMin = score;
			strcpy_s(nameMin, name);
			strcpy_s(idMin, id);
		}
	}
	cout << nameMax << " " << idMax << endl;
	cout << nameMin << " " << idMin << endl;
	return 0;
}

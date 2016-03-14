// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

string s1, s2;
char a[100], b[100], c[100], d[100], temp[100];

char getAns(int n){
	char ch;
	switch (n)
	{
	case 10:
		ch = 'J';
		break;

	case 11:
		ch = 'Q';
		break;

	case 12:
		ch = 'K';
		break;
	default:
		ch = (char)(n + '0');
		break;
	}
	return ch;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cin >> a >> b;
	int j = 0;
	for (int i = strlen(a) - 1; i >= 0; i--){
		c[j++] = a[i];
	}
	j = 0;
	for (int i = strlen(b) - 1; i >= 0; i--){
		d[j++] = b[i];
	}
	int end = strlen(c) > strlen(d) ? strlen(d) : strlen(c);
	int length = strlen(c) < strlen(d) ? strlen(d) : strlen(c);
	int count = 0;
	strlen(c) > strlen(d) ? strcpy_s(temp, c) : strcpy_s(temp, d);

	if (strlen(d) < strlen(c)){
		int t = strlen(d);
		for (int i = t; i < strlen(c); i++){
			d[i] = '0';
		}
	}
	else{
		int t = strlen(c);
		for (int i = t; i < strlen(d); i++){
			c[i] = '0';
		}

	}


	for (int i = length - 1; i >= 0; i--){
		if (i % 2 == 0){
			//ÆæÊý
			int r = (c[i] - '0' + d[i] - '0') % 13;
			printf("%c", getAns(r));
			count++;
		}
		else{
			int r = (d[i] - '0') - (c[i] - '0');
			if (r < 0){
				r += 10;
			}
			if (r == 0 && count == 0){
				count++;
				continue;
			}
			printf("%d", r);
			count++;
		}
	}
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
// b33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
/*
	输入样例：
	7+IE.
	7_This_is_a_test.
	输出样例：
	_hs_s_a_tst
	//有一个点未通过
*/
int flag[100];
int _tmain(int argc, _TCHAR* argv[])
{
	cout << int('a') << " " << int('A') << endl;
	cout << int('.') << " " << int(',') << " " << int('_') << "  " << int('-') << " " << int('+') << endl;
	string a, b;
	cin >> a >> b;
	int ct = 0;
	int upindex = a.find('+');
	for (int i=0;i<a.length();i++){
		if (a[i]<='Z'&&a[i]>='A'){
			flag[a[i] + 32 - 43]++;
		}
		flag[a[i] - '+']++;
	}
	for (int i=0;i<b.length();i++){
		if (upindex!=-1&&b[i]<='Z'&&b[i]>='A'){
			continue;
		}
		if (flag[b[i]-'+']==0){
			ct++;
			cout << b[i];
		}
	}
	if (ct==0){
		cout << "";
	}
	return 0;
}


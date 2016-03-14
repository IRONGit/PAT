// b32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
/*
	输入样例：
	6
	3 65
	2 80
	1 100
	2 70
	3 40
	3 0
	输出样例：
	2 150
*/
int score[100001];

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int maxId = 0;
	cin >> n;
	map<int, int> idmap;
	for (int i=0;i<n;i++){
		int id,t;
		cin >> id>>t;
		score[id] +=t;
		idmap[score[id]] = id;
		if (id>maxId){
			maxId = id;
		}
	}
	sort(score+1,score+maxId+1,cmp);
	cout << score[1] << endl;
	cout <<idmap[score[maxId]]<<" "<<score[maxId] << endl;
	return 0;
}


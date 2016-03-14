// b50t.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
	important
	利用while 循环
	输入样例：
	12
	37 76 20 98 76 42 53 95 60 81 58 93
	输出样例：
	98 95 93
	42 37 81
	53 20 76
	58 60 76
*/
bool cmp(int a,int b){
	return a > b;
}
int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> v;
	int n;
	cin >> n;
	v.resize(n);
	for (int i=0;i<n;i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end(),cmp);
	//找到行和列
	int row = 1, col = 1;
	int minDiff = 10005;
	for (int i = 1; i < n / 2 + 1; i++) {
		if (n % i == 0 && abs(n / i - i) < minDiff) {
			minDiff = abs(n / i - i);
			row = n / i;
			col = i;
		}
	}
	vector<vector<int>> mat(row);
	for (auto &r:mat){
		r.resize(col);
	}
	int t = 0;
	int i = 0, j = 0;
	/*
			98 95 93
			42 37 81
			53 20 76
			58 60 76
	*/
	while (t<n){
		while (j<col&&t<n&&mat[i][j]==0){
			mat[i][j]=v[t];
			t++;
			j++;
		}
		i++;
		j--;
		while (i<row&&t<n&&mat[i][j]==0){
			mat[i][j] = v[t];
			i++;
			t++;
		}
		j--;
		i--;
		while (j>=0&&t<n&&mat[i][j]==0){
			mat[i][j] = v[t];
			j--;
			t++;
		}
		j++;
		i--;
		while (i>=0&&t<n&&mat[i][j]==0){
			mat[i][j] = v[t];
			i--;
			t++;
		}
		i++;
		j++;
	}
	
// 	for (int i=0;i<row;i++){
// 		for (int j=0;j<col;j++){
// 			cout << mat[i][j];
// 			if (j!=col-1){
// 				cout << " ";
// 			}
// 		}
// 		cout << endl;
// 	}

	for (vector<vector<int>>::iterator it=mat.begin();it!=mat.end();it++){
		for (vector<int>::iterator its=it->begin();its!=it->end();its++){
			cout << (*its);
			if (its != it->end() - 1){
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}


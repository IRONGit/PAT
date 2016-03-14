// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

/*这题其实以前做过......但是这次做的时候总是感觉不好下手......想了挺长时间......这里的代码非原创,参考了一位博主的代码*/

struct node{
	int add;
	int data;
	int next;
};

int _tmain(int argc, _TCHAR* argv[])
{
	int first, n, k;
	vector<node> v1(100000);
	vector<node> v2;
	vector<node> v3;
	node temp;
	cin >> first >> n >> k;
	//读入,将节点的地址存储在vector中
	for (int i = 0; i < n; i++){
		cin >> temp.add >> temp.data >> temp.next;
		v1[temp.add] = temp;
	}

	if (first == -1){
		cout << "-1" << endl;
	}
	else{
		int nextadd = first;
		//将链表排序
		while (nextadd != -1){
			v2.push_back(v1[nextadd]);
			nextadd = v1[nextadd].next;
		}
		int vsize = v2.size();
		int right = k;
		int idx = right;
		int times = vsize / right;
		int ct = 0;
		while (ct < times){
			for (int i = idx - 1; i >= idx - right; i--){
				v3.push_back(v2[i]);
			}
			ct++;
			idx = idx + right;
		}
		idx = times*right;
		for (int i = idx; i < vsize; i++){
			v3.push_back(v2[i]);
		}
		for (int i = 0; i < vsize - 1; i++){
			v3[i].next = v3[i + 1].add;
			cout << setw(5) << setfill('0') << v3[i].add << " " << v3[i].data << " " << setw(5) << setfill('0') << v3[i].next << endl;
		}
		cout << setw(5) << setfill('0') << v3[vsize - 1].add << " " << v3[vsize - 1].data << " -1" << endl;

// 		for (auto it = v3.begin(); it != v3.end()-1; it++){
// 			cout << setw(5) << setfill('0') << it->add << " " << it->data << " " << it->next << endl;
// 			cout << it->add << " " << it->data << " " << it->next << endl;
// 		}

	}
	return 0;
}

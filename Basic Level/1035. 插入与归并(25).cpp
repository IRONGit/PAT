// test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int origin[101];
int originm[101];
int givsort[101];
int nextsort[101];
int nextsorta[101];

/*
输入样例1：
10
3 1 2 8 7 5 9 4 6 0
1 2 3 7 8 5 9 4 6 0
输出样例1：
Insertion Sort
1 2 3 5 7 8 9 4 6 0


输入样例2：
10
3 1 2 8 7 5 9 4 0 6
1 3 2 8 5 7 4 9 0 6
输出样例2：
Merge Sort
1 2 3 8 4 5 7 9 0 6
*/

bool insertionSort(int *num, int size){
	bool over = false;
	for (int i = 1; i < size; i++){
		int j = i - 1;
		int temp = num[i];
		while (num[j] > temp){
			num[j + 1] = num[j];
			j--;
		}
		num[j + 1] = temp;

		bool same = true;
		for (int i = 0; i < size; i++){
			//cout << num[i] << " ";
			if (num[i] != givsort[i]){
				same = false;
				break;
			}
		}
		if (over){
			for (int i = 0; i < size; i++){
				nextsort[i] = num[i];
			}
			return true;
		}
		if (same){
			//cout << endl;
			//cout << "same" << endl;
			over = true;
		}
		//cout << endl;

	}
	return false;
}

void mergeSort(int a[],int temp[],int sorted[],int n){
	int lbegin, lend, rbegin, rend;
	for (int step=1;step<n;step*=2){
		for (lbegin = 0;lbegin<n-step;lbegin=rend+1){
			rbegin = lbegin + step;
			lend = rbegin - 1;
			rend = lend + step;
			if (n-step<rend){
				rend = n - 1;
			}
			int k = 0;
			while (lbegin<=lend&&rbegin<=rend){
				if (a[lbegin]<a[rbegin]){
					temp[k++] = a[lbegin++];
				}
				else{
					temp[k++]=a[rbegin++];
				}
			}

			while (lbegin<=lend){
				temp[k++] = a[lbegin++];
			}
			while (rbegin<=rend){
				temp[k++] = a[rbegin++];
			}
			while (k>0){
				a[--rbegin]=temp[--k];
			}
		}

		int i;
		for (i=0;i<n;i++){
			if (givsort[i]!=a[i]){
				break;
			}
		}
		if (i==n){
			step *= 2;
		

			for (lbegin = 0; lbegin<n - step; lbegin = rend + 1){
				rbegin = lbegin + step;
				lend = rbegin - 1;
				rend = lend + step;
				if (rend>n - 1){
					rend = n - 1;
				}

				int k = 0;
				while (lbegin <= lend&&rbegin <= rend){
					if (a[lbegin] < a[rbegin]){
						temp[k++] = a[lbegin++];
					}
					else{
						temp[k++] = a[rbegin++];
					}
				}
				while (lbegin <= lend){
					temp[k++] = a[lbegin++];
				}
				while (rbegin <= rend){
					temp[k++] = a[rbegin++];
				}

				while (k > 0){
					a[--rbegin] = temp[--k];
				}
			}

			for (int i = 0; i < n; i++){
				if (i==0){
					cout << originm[i];
				}
				else{
					cout << " "<< originm[i];
				}
			}

			return;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> origin[i];
		originm[i] = origin[i];
	}
	for (int i = 0; i < n; i++){
		cin >> givsort[i];
	}

	bool isinsert = insertionSort(origin, n);
	if (isinsert){
		cout << "Insertion Sort" << endl;
		for (int i = 0; i < n; i++){
			if (i != 0){
				cout << " " << nextsort[i];
			}
			else{
				cout << nextsort[i];
			}

		}
	}
	else{
		//merge sort
		cout << "Merge Sort" << endl;
		int temp[100];
		mergeSort(originm, nextsorta,givsort,n);


	}

	return 0;
}

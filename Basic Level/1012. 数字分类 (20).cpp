// b12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
/*最后一个点未过 19分*/
int a, b, c, d, e;
int ctb,ctd;
double ansd;
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		int t;
		cin >> t;
		if (t%5==0&&t%2==0){
			a += t;
		}
		if (t%5==1){
			if (ctb%2==0){
				b += t;
			}
			else{
				b -= t;
			}
			ctb++;
		}
		if (t%5==2){
			c++;
		}
		if (t%5==3){
			d += t;
			ctd++;
		}
		if (t%5==4){
			if (t>e){
				e = t;
			}
		}
	}
	ansd = double(d)/ctd;
	int ans[3] = {a,b,c};
	for (int i=0;i<3;i++){
		if (ans[i]==0){
			printf("N ");
		}
		else{
			printf("%d ",ans[i]);
		}
	}
	if (abs(ansd)>1e-15){
		printf("%.1lf ",ansd);
	}
	else{
		printf("N ");
	}
	if (e!=0){
		printf("%d",e);
	}
	else{
		printf("N");
	}
	return 0;
}


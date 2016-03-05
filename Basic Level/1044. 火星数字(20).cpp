#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;

string a[25] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };


int main()
{
	int N;
	cin >> N;
	getchar();
	stringstream sstream;
	for (int i=0;i<N;i++){
		string s;
		getline(cin,s);
		if (s[0]<='9'&&s[0]>='0'){
			sstream << s;
			int number;
			sstream >> number;
			int x = number / 13;
			int y = number % 13;

			if (x==0){
				cout << a[y] << endl;
			}
			else if(y==0){
				cout << a[x + 12] << endl;
			}
			else{
				cout << a[x + 12] << " " << a[y] << endl;
			}
			
			sstream.clear();
		}
		else{
			int indexSpace = s.find(" ");
			if (indexSpace==-1){
				for (int j = 0; j < 25; j++){
					if (a[j] == s){
						cout << j << endl;
						break;
					}
				}
			}
			else{
				string x = s.substr(0,indexSpace);
				string y = s.substr(indexSpace+1);
				int m, n;

				for (int j = 0; j < 25; j++){
					if (a[j] == x){
						m = j;
					}
					if (a[j]==y){
						n = j;
					}
				}
				int k = m>n ? m : n;
				int sum = 0;
				sum += (k-12) * 13;
				k = m > n ? n : m;
				sum += k;
				cout << sum << endl;
			}
		}
	}

	return 0;
}

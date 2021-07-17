#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	string s;
	int mstart=0, sstart=0, count=0;
	cin >> s;
	int ml=0, ms=0, sl=0, sm=0;
	for(char& c:s) {
		if(c=='L') {
			mstart++;
			sstart++;
		} else if(c=='M') 
			sstart++;
	}
	for(int i=mstart; i<sstart; i++) {
		if(s[i]=='L') {
			ml++;
		} else if(s[i]=='S') {
			ms++;
		}
	}
	int len=s.size();
	for(int i=sstart; i<len; i++) {
		if(s[i]=='L') {
			sl++;
		} else if(s[i]=='M') {
			sm++;
		}
	}
	for(int i=0; i<mstart; i++) {
		if(s[i]=='M') {
			if(ml>0) {
				ml--;
				count++;
			} else {
				ms--;
				sl--;
				count+=2;
			}
		} else if(s[i]=='S') {
			if(sl>0) {
				sl--;
				count++;
			} else {
				sm--;
				l--;
				count+=2;
			}
		}
	}
	cout << count+sm << endl;
}
m

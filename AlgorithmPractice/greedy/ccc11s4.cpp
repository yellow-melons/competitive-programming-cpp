#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	ll extra[4]={0};
	ll ans=0;
	ll hasp[4]={0};
	ll hasn[4]={0};
	ll needp[4]={0};
	ll needn[4]={0};
	for(int i=0; i<8; i++) {
		if(i%2==0)
			cin >> hasn[i/2];
		else
			cin >> hasp[(i-1)/2];
	}
	for(int i=0; i<8; i++) {
		if(i%2==0)
			cin >> needn[i/2];
		else
			cin >> needp[(i-1)/2];
	}
	for(int i=0; i<4; i++) {
		if(hasn[i]>=needn[i]) {
			ans+=needn[i];
			extra[i]=hasn[i]-needn[i];
		} else {
			ans+=hasn[i];
			ll need=needn[i]-hasn[i];
			for(int j=i; j>=0; j--) {
				if(i==2 && j==1) {
					continue;
				}
				if(extra[j]>=need) {
					ans+=need;
					extra[j]-=need;
					break;
				} else {
					need-=extra[j];
					ans+=extra[j];
					extra[j]=0;
				}
			}
		}
	}
	for(int i=0; i<4; i++) {
		if(hasp[i]>=needp[i]) {
			ans+=needp[i];
			extra[i]+=hasp[i]-needp[i];
		} else {
			ans+=hasp[i];
			ll need=needp[i]-hasp[i];
			for(int j=i; j>=0; j--) {
				if(i==2 && j==1) {
					continue;
				}
				if(extra[j]>=need) {
					ans+=need;
					extra[j]-=need;
					break;
				} else {
					need-=extra[j];
					ans+=extra[j];
					extra[j]=0;
				}
			}
		}
	}
	cout << ans << endl;
}

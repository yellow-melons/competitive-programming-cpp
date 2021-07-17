#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long
#define endl '\n'

int n,k,q,a[1000005],psa_a[1000005];

int main() {
	scanf("%d%d", &n, &k);
	while(k--) {
		int s;
		scanf("%d", &s);
		a[s]++;
	}
	for(int i=1; i<n; i++) {
		a[i]+=a[i-1];
	}
	scanf("%d", &q);
	for(int i=0; i<q; i++) {
		int x,y;
		scanf("%d%d", &x, &y);
		if(x==0) {
			cout << a[y] << endl;
		} else {
			cout << a[y]-a[x-1] << endl;
		}
	}
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	int n,k,q;
	scanf("%d%d", &n, &k);
	vector<int> psa(n+1);
	while(k--) {
		int s;
		scanf("%d", &s);
		psa[s]++;
	}
	for(int i=1; i<=n; i++)
		psa[i]+=psa[i-1];
	scanf("%d", &q);
	while(q--) {
		int a,b;
		scanf("%d%d", &a, &b);
		cout << psa[b]-psa[a-1] << endl;
	}
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

int main() {
	int n;
	scanf("%d", &n);
	vector<int> a;
	for(int i=0; i<n; ++i) {
		int min, sec;
		scanf("%d%d", &min, &sec);
		int total=min*60+sec;
		a.push_back(total);
	}
	sort(a.begin(), a.end());
	int min, sec;
	scanf("%d%d", &min, &sec);
	int total=min*60+sec;
	int itt=0;
	for(int i=0; i<n; ++i) {
		itt+=a[i];
		if(itt>total) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << n << '\n';
}

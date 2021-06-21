#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
	int n, d;
	scanf("%d%d", &n, &d);
	vector<int> houses;
	for(int i=0; i<n; ++i) {
		int time;
		scanf("%d", &time);
		houses.push_back(++time);
	}
	sort(houses.begin(), houses.end());
	int counter=-1;
	for(int i=0; i<n; i++) {
		counter+=houses[i];
		if(counter>d) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << n << '\n';
}

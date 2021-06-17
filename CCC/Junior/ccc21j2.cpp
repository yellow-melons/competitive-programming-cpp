#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define endl '\n'

struct bid {
	string name;
	int amount;
};

int main() {
	int n;
	cin >> n;
	vector<bid> a;
	for(int i=0; i<n; ++i) {
		bid next;
		cin >> next.name >> next.amount;
		a.push_back(next);
	}
	int min=-1;
	string ans="";
	for(bid i : a) {
		if(i.amount>min) {
			min=i.amount;
			ans=i.name;
		}
	}
	cout << ans << endl;
}

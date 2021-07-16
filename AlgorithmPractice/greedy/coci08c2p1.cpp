#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	int a[4];
	scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
	sort(a, a+4);
	cout << a[0] * a[2] << endl;
}

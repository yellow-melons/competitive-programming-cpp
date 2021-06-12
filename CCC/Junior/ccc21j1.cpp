#include<iostream>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	int n;
	cin >> n;
	int p=(5*n)-400;
	cout << p << endl;
	int b=p>100?-1:p<100?1:0;
	cout << b << endl;
}


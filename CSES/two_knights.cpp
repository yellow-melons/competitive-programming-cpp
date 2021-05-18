#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  for(int c=1; c<=n; c++) {
    ll a=c*c, b=a*(a-1)/2;
    if(c>2) {
      b-=4*(c-1)*(c-2);
    }
    cout << b << endl;
  }
}

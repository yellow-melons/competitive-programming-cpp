#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() {
  ll n;
  cin >> n;
  ll sum = n*(n+1)/2;
  vector<int> a, b;
  if (sum%2==1) {
    cout << "NO" << endl;
    return 0;
  }
  ll ans = sum / 2;
  for (int i=n; i>=1; i--) {
    if (i<=ans) {
      a.push_back(i);
      ans-=i;
    } else {
      b.push_back(i);
    }
  }
  cout << "YES" << endl;
  cout << a.size() << endl;
  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
  cout << b.size() << endl;
  for (auto i : b) {
    cout << i << " ";
  }
  cout << endl;
}
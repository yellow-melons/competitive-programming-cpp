// a = 2x + y
// b = 2y + x
// x = b - 2y
// a = 2b - 3y
// 3y = 2b - a

// y = a - 2x
// b = 2a - 3x
// 3x = 2a - b

#include <iostream>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  while(n--) {
    ll a, b;
    cin >> a >> b;
    ll x = 2*a-b;
    ll y = 2*b-a;
    cout << ((x%3==0&&y%3==0&&a<=2*b&&b<=2*a)?"YES":"NO") << endl;
  }
}

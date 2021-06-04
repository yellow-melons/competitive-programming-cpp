#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

void build_tower(int n, int start, int end, int aux) {
  if(n==1) {
    cout << start << " " << end << endl;
    return;
  }
  build_tower(n-1, start, aux, end);
  cout << start << " " << end << endl;
  build_tower(n-1, aux, end, start);
}

int main() {
  int n;
  cin >> n;
  cout << pow(2,n)-1 << endl;
  build_tower(n, 1, 3, 2);
}

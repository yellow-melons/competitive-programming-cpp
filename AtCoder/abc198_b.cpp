#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s;
  cin >> s;
  int end = s.length() - 1;
  while(end >= 0 && s[end] == '0') {
    s[end] = 0;
    end--;
  }
  int start = 0;
  while(end > start) {
    if(s[start] != s[end]) {
      cout << "No" << endl;
      return 0;
    }
    end--;
    start++;
  }
  cout << "Yes" << endl;
}


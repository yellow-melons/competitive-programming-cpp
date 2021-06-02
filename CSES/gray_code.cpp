#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<string> generateStrings(int n) {
  if(n==1) {
    return {"0", "1"};
  }
  vector<string> recAns = generateStrings(n-1);
  vector<string> mainAns;
  for(string &i:recAns) {
    mainAns.push_back("0"+i);
  }
  reverse(recAns.begin(), recAns.end());
  for(string &i:recAns) {
    mainAns.push_back("1"+i);
  }
  return mainAns;
}
int main() {
  int n;
  cin >> n;
  vector<string> output = generateStrings(n);
  for(string &i:output) {
    cout << i << endl;
  }
}

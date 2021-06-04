#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

#define ll long long
#define ar array

int main() {
  string s;
  cin >> s;
  int n=s.length();
  int a[26] = {0};
  for(char &c: s) {
    a[c-'A']++;
  }
  int count=0;
  int odd=-1;
  for(int i=0; i<26; i++) {
    if(a[i]%2!=0) {
      odd = i;
      count++;
    }
  }
  if(count>1) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  int start=0;
  int end=n-1;
	vector<char> solution(n+1);
  if(odd>=0) {
    solution[n/2]=odd+'A';
    a[odd]--;
  }
  for(int i=0; i<26; i++) {
    for(int j=a[i]; j>0; j-=2) {
      solution[start]=i+'A';
      solution[end]=i+'A';
      start++;
      end--;
    }
  }
	string answer(solution.begin(), solution.end());
  cout << answer << endl;
}

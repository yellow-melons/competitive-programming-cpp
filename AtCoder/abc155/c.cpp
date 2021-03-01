#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include <cmath>
#include <algorithm>
#include <string>
#include <array>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll count = 1;
    ll mx = 1;
    vector< pair<string, ll>> s(n);
    for (int i=0; i<n; i++) {
        cin >> s[i].first;
        s[i].second = 1;
    }
    sort(s.begin(), s.end());
    for (int i=1; i<n; i++) {
        if (s[i].first == s[i-1].first) {
            count++;
            s[i].second = count;
            mx = max(mx, count);
        } else {
            count = 1;
        } 
    }
    for (int i=0; i<n; i++) {
        if (s[i].second == mx) {
            cout << s[i].first << endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    string dna;
    cin >> dna;
    int mx = 1, counter = 0;
    char prev = 'A';
    for (char d : dna) {
        if (d == prev) {
            counter++;
            mx = max(mx, counter);
        } else {
            counter = 1;
            prev = d;
        }
    }
    cout << mx;
}



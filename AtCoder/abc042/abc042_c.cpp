#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int restricted[K];
    for (int i=0; i<K; i++) {
        cin >> restricted[i];
    }
    while (true) {
        bool flag = true;
        string str = to_string(N);
        for (int i=0; i<str.length(); i++) {
            for (int j=0; j<K; j++) {
                int value = str[i]-'0';
                if (value==restricted[j]) {
                    flag = false;
                }
            }
        }
        if (flag) {
            cout << N << endl;
            return 0;
        } else {
            N++;
        }
    }
}
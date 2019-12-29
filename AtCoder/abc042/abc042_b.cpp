#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    string a[N];
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }
    sort(a,a+N);
    for (int i=0; i<N; i++) {
        cout << a[i];
    }
}
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int out = 0;
    for (int i=1; i<=N; i++) {
        out += i;
    }
    cout << out << endl;
}
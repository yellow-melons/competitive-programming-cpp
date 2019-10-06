#include <iostream>

using namespace std;

bool isOdd(int x) {
    if (x%2==0) {
        return false;
    }
    return true;
}

int main() {
    double counter = 0.0;
    int N;
    cin >> N;
    for (int i=0; i<=N; i++) {
        if (isOdd(i)) {
            counter++;
        }
    }
    double out;
    out = counter/N;
    cout << out << endl;
    return 0;
}
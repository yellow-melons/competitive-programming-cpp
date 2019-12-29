#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> classroom;
    for (int i=1; i<=N; i++) {
        int n;
        cin >> n;
        classroom[n] = i;
    }
    for (int i=1; i<=N; i++) {
        cout << classroom[i] << " ";
    }
}
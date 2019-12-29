#include <iostream>
#include <stdio.h>  
#include <stdlib.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=0; i<=9; i++) {
        for (int j=0; j<=9; j++) {
            if (i*j==N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include <cmath>
#include <algorithm>
#include <string>
#include <array>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        if (temp % 2 == 0 && (temp % 3 != 0 && temp % 5 != 0)) {
            printf("DENIED");
            return 0;
        }
    }
    printf("APPROVED");
    return 0;
}


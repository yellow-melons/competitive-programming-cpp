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
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if (a == b && a != c) {
        printf("Yes");
    } else if (a == c && a != b) {
        printf("Yes");
    } else if (b == c && b != a) {
        printf("Yes");
    } else {
        printf("No");
    }
}


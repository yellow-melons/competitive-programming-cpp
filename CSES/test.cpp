#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	bool a[10];
	for(int i=0; i<10; i++) {
		a[i] = 1;
	}
	for(int i=0; i<20; i++) {
		cout << a[i] << endl;
	}
}

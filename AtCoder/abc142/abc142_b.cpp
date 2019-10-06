#include <iostream> 

using namespace std;

int main() {
    int N, H;
    cin >> N >> H;
    int counter = 0;
    for (int i=0; i<N; i++) {
        int temp;
        cin >> temp;
        if (temp>=H) counter++;
    }
    cout << counter << endl;
    return 0;
}
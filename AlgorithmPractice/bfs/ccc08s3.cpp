#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		char map[21][21];
		int step[21][21];
		int R, C;
		cin >> R >> C;
		for (int i=0; i<R; i++) {
			for (int j=0; j<C; j++) {
				cin >> map[i][j];
				step[i][j] = 0x3f3f3f3f;
			}
		}
		queue<int> rowq;
		queue<int> colq;
		step[0][0] = 1;
		rowq.push(0);
		colq.push(0);
		while (!rowq.empty()) {
			int row = rowq.front();
			rowq.pop();
			int col = colq.front();
			colq.pop();
			cout << row << endl << col << endl;
		}
	}
}

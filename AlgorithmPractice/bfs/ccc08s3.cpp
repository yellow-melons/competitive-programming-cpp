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
			int r = rowq.front();
			rowq.pop();
			int c = colq.front();
			colq.pop();
			if (r-1 >= 0 && step[r-1][c] > step[r][c]+1 && map[r-1][c] != '*' && map[r][c] != '-') {
				rowq.push(r-1);
				colq.push(c);
				step[r-1][col] = step[r][c]+1;
			}
			if (r+1 < R && step[r+1][c] > step[r][c]+1 && map[r+1][c] != '*' && map[r][c] != '-') {
				rowq.push(r+1);
				colq.push(c);
				step[r+1][c] = step[r][c]+1;
			}
			if (c-1 >= 0 && step[r][c-1] > step[r][c]+1 && map[r][c-1] != '*' && map[r][c] != '|') {
				rowq.push(r);
				colq.push(c-1);
				step[r][c-1] = step[r][c]+1;
			}
			if (c+1 < C && step[r][c+1] > step[r][c]+1 && map[r][c+1] != '*' && map[r][c] != '|') {
				rowq.push(r);
				colq.push(c+1);
				step[r][c+1] = step[r][c]+1;
			} 
		}
		if (step[R-1][C-1] == 0x3f3f3f3f) {
			cout << -1 << endl;
		} else {
			cout << step[R-1][C-1] << endl;
		}
	}
}

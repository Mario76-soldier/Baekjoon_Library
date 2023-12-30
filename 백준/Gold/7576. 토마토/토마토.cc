#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int mapp[1001][1001];

int m,n;

queue<pair<int, int>> que;

int ro[4] = { 0,0,1,-1 };
int co[4] = { 1,-1,0,0 };

void search() {
	int row, col;
	while (!que.empty()) {
		row = que.front().first;
		col = que.front().second;
		que.pop();
		for (int i = 0; i < 4; i++) {
			int nr = row + ro[i];
			int nc = col + co[i];
			if (nr >= 0 && nc >= 0 && nr < n && nc < m && mapp[nr][nc] == 0) {
				mapp[nr][nc] = mapp[row][col]+1;
				que.push({ nr,nc });
			}
		}
	}
}

int main() {
	cin >> m >>n;
	int count = 0;
	for (int i = 0; i <n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mapp[i][j];
			if (mapp[i][j] == 1) {
				que.push({ i,j });
			}
		}
	}
	search();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mapp[i][j] == 0) {
				cout << -1 << endl;
				return 0;
			}
			if (count < mapp[i][j]) {
				count = mapp[i][j];
			}
		}
	}
	cout << count-1 << endl;
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int mapp[101][101][101];

int m,n,o;

queue<pair<pair<int, int>,int>> que;

int ro[6] = { 0,0,1,-1,0,0 };
int co[6] = { 1,-1,0,0 ,0,0};
int hi[6] = { 0,0,0,0,1,-1 };

void search() {
	int row, col,hig;
	while (!que.empty()) {
		row = que.front().first.first;
		col = que.front().first.second;
		hig = que.front().second;
		que.pop();
		for (int i = 0; i < 6; i++) {
			int nr = row + ro[i];
			int nc = col + co[i];
			int nh = hig + hi[i];
			if (nr >= 0 && nc >= 0 && nh>=0 &&  nr < n && nc < m && nh<o && mapp[nr][nc][nh] == 0) {
				mapp[nr][nc][nh] = mapp[row][col][hig] + 1;
				que.push({ { nr,nc},nh });
			}
		}
	}
}

int main() {
	cin >> m >>n>>o;
	int count = 0;
	for (int k = 0; k < o; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {

				cin >> mapp[i][j][k];
				if (mapp[i][j][k] == 1) {
					que.push({ { i,j }, k });

				}
			}
		}
	}
	search();

	for (int k = 0; k < o; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (mapp[i][j][k] == 0) {
					cout << -1 << endl;
					return 0;
				}
				if (count < mapp[i][j][k]) {
					count = mapp[i][j][k];
				}
			}
		}
	}
	cout << count-1 << endl;
	return 0;
}
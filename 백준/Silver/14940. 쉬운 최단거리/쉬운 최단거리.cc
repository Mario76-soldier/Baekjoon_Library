#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
int mapp[1001][1001], dist[1001][1001];
queue<pair<int, int>> que;
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};

void bfs(int row, int col) {
	que.push({ row, col });
	dist[row][col] = 0;
	pair<int, int> poin;
	int nx, ny;
	while (!que.empty()) {
		poin = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			nx = poin.first + dx[i];
			ny = poin.second + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m || dist[nx][ny] != -1 ) continue;
			if (mapp[nx][ny] == 0) {
				continue;
			}
			dist[nx][ny] = dist[poin.first][poin.second] + 1;
			que.push({ nx, ny });
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j < 1001; j++) {
			dist[i][j] = -1;
		}
	}
	
	cin >> n >> m;
	int krow, kcol;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mapp[i][j];
			if (mapp[i][j] == 2) {
				krow = i;
				kcol = j;
			}
		}
	}
	bfs(krow, kcol);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mapp[i][j] == 0) {
				cout << 0 << ' ';
			}
			else {
				cout << dist[i][j] << ' ';
			}
		}
		cout << '\n';
	}
}
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
queue<pair<int, int>> q;
char map[601][601];
int ro[4] = { 0,0,1,-1 };
int co[4] = { 1,-1,0,0 };
int counter = 0;

void bfs(int r, int c) {
	q.push({ r,c });
	pair<int, int> point;
	while (!q.empty()) {
		point = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nr = point.first + ro[i];
			int nc = point.second + co[i];
			if (nr >= 0 && nc >= 0 && nr < n && nc < m) {
				if (map[nr][nc] == 'P' || map[nr][nc] == 'O') {
					q.push({ nr, nc });
					if (map[nr][nc] == 'P') {
						counter++;
					}
					map[nr][nc] = 'N';
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	int r, c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'I') {
				r = i;
				c = j;
			}
		}
	}
	bfs(r, c);
	if (counter == 0) {
		cout << "TT";
	}
	else {
		cout << counter;
	}
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int mapp[51][51]={0, };

int checker[51][51]={0, };

int m, n, k;

vector<int> vec;

queue<pair<int, int>> que;

void search(int i, int j) {
	que.push({i,j});
	int row, col;
	int counter = 0;
	while (!que.empty()) {
		row = que.front().first;
		col = que.front().second;
		
		que.pop();
		if (mapp[row][col] == 1 && checker[row][col] != 1) {
			checker[row][col] = 1;
			counter++;
			if (row - 1 < 0) {
				if (col - 1 < 0) {
					que.push({ row + 1,col });
					que.push({ row ,col + 1 });
				}
				else if (col + 1 >= n) {
					que.push({ row + 1,col });
					que.push({ row ,col - 1 });
				}
				else {
					que.push({ row + 1,col });
					que.push({ row ,col + 1 });
					que.push({ row ,col - 1 });
				}
			}
			else if (row + 1 >=m) {
				if (col - 1 < 0) {
					que.push({ row - 1,col });
					que.push({ row ,col + 1 });
				}
				else if (col + 1 >= n) {
					que.push({ row - 1,col });
					que.push({ row ,col - 1 });
				}
				else {
					que.push({ row - 1,col });
					que.push({ row ,col + 1 });
					que.push({ row ,col - 1 });
				}
			}
			else {
				if (col - 1 < 0) {
					que.push({ row - 1,col });
					que.push({ row + 1,col });
					que.push({ row ,col + 1 });
				}
				else if (col + 1 >= n) {
					que.push({ row - 1,col });
					que.push({ row + 1,col });
					que.push({ row ,col - 1 });
				}
				else {
					que.push({ row + 1,col });
					que.push({ row - 1,col });
					que.push({ row ,col + 1 });
					que.push({ row ,col - 1 });
				}
			}
		}
	}
	if (counter != 0) {
		vec.push_back(counter);
		counter = 0;
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		int a, b;
		for (int i = 0; i < k; i++) {
			cin >> a >> b;
			mapp[a][b] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (checker[i][j] != 1 && mapp[i][j] == 1) {
					search(i, j);
				}
			}
		}

		cout << vec.size() << '\n';
		vec.clear();

		for (int i = 0; i < 51; i++) {
			for (int j = 0; j < 51; j++) {
				checker[i][j] = 0;
				mapp[i][j] = 0;
			}
		}
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

string mapp[26];

int checker[26][26];

vector<int> vec;

int n;

queue<pair<int, int>> que;

void search(int i, int j) {
	que.push({i,j});
	int row, col;
	int counter = 0;
	while (!que.empty()) {
		row = que.front().first;
		col = que.front().second;
		
		que.pop();
		if (mapp[row][col] == '1' && checker[row][col] != 1) {
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
			else if (row + 1 >=n) {
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
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> mapp[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (checker[i][j] != 1 && mapp[i][j] == '1') {
				search(i,j);
			}
		}
	}

	sort(vec.begin(), vec.end());

	cout << vec.size() << '\n';

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}

	return 0;
}
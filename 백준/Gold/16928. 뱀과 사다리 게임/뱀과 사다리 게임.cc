#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int n,m;

queue<int> que;

int lad[101];
int sna[101];

int dist[101];

void search() {
	int start = 1;
	dist[start] = 1;
	que.push(start);
	while (!que.empty()) {
		int temp = que.front();
		que.pop();
		for (int i = 1; i <= 6; i++) {
			int next = temp + i;
			if (next <= 100) {
				if (lad[next] != 0) {
					next = lad[next];
				}
				if (sna[next] != 0) {
					next = sna[next];
				}
				if (dist[next] > dist[temp] + 1) {
					dist[next] = dist[temp] + 1;
					que.push(next);
				}
			}
		}
	}
}

int main() {
	int a;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> lad[a];
	}
	for (int i = 0; i < m; i++) {
		cin >> a;
		cin >> sna[a];
	}
	for (int i = 0; i < 101; i++) {
		dist[i] = 100001;
	}

	search();

	cout << dist[100]-1 << endl;

	return 0;
}
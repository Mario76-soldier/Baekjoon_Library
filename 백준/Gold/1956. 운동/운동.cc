#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#define INF 2e7
using namespace std;

int dist[402][402];

void floyd(int n) {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) {
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			dist[i][j] = INF;
		}
	}
	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (dist[a][b] > c) {
			dist[a][b] = c;
		}
	}

	floyd(n);

	int count = INF;

	for (int i = 1; i <= n; i++) {
		if (count > dist[i][i]) {
			count = dist[i][i];
		}
	}

	if (count >= INF) {
		cout << -1;
	}
	else {
		cout << count;
	}

}
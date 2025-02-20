#include <iostream>
#include <algorithm>
using namespace std;

char s[2001][2001];
int p1[2001][2001], p2[2001][2001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> s[i][j];
		}
	}
	int value1, value2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i + j) % 2 == 0) {
				value1 = s[i][j] != 'B';
				value2 = s[i][j] != 'W';
			}
			else {
				value1 = s[i][j] == 'B';
				value2 = s[i][j] == 'W';
			}
			p1[i + 1][j + 1] = p1[i][j + 1] + p1[i + 1][j] - p1[i][j] + value1;
			p2[i + 1][j + 1] = p2[i][j + 1] + p2[i + 1][j] - p2[i][j] + value2;
		}
	}
	int result1 = 4000001, result2=4000001;
	for (int i = 0; i <= n - k; i++) {
		for (int j = 0; j <= m - k; j++) {
			result1 = min(result1, p1[i + k][j + k] - p1[i][j + k] - p1[i + k][j] + p1[i][j]);
			result2 = min(result2, p2[i + k][j + k] - p2[i][j + k] - p2[i + k][j] + p2[i][j]);
		}
	}
	cout << min(result1, result2);
}
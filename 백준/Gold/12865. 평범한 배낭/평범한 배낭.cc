#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][100001];
int item[101][2];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> item[i][0] >> item[i][1];
	}
	for (int i = 1; i <= n; i++) {
		dp[i][0] = 0;
		for (int j = 1; j <= k; j++) {
			if (item[i][0] <= j) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - item[i][0]] + item[i][1]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[n][k];
}
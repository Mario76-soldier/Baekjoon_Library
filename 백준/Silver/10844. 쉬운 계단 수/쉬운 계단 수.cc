#include <iostream>
#include <algorithm>
using namespace std;

long long dp[101][11];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j + 1] % 1000000000;
			}
			else if (j == 9) {
				dp[i][j] = dp[i - 1][j - 1] % 1000000000;
			}
			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
			}
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 9; i++) {
		ans += dp[n][i];
	}
	cout << ans%1000000000;
}
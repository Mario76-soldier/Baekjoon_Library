#include <iostream>
#include <algorithm>
using namespace std;

int zero = 0, one = 0;

int dp[41][2];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a;
	cin >> n;
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	for (int i = 2; i <= 40; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
		dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
	}
	for (int i = 0; i < n; i++) {
		cin >> a;
		cout << dp[a][0] << ' ' << dp[a][1] << '\n';
	}
}
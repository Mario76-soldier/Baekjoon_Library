#include <iostream>
#include <algorithm>
using namespace std;

int dp[12];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i < 12; i++) {
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cout << dp[a] << '\n';
	}
}
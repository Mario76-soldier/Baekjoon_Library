#include <iostream>
#include <algorithm>
using namespace std;

int inp[10001];
int dp[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> inp[i];
	}
	dp[1] = inp[1];
	dp[2] = inp[1] + inp[2];
	for (int i = 3; i <= n; i++) {
		dp[i] =max(dp[i-1], max(inp[i - 1] + dp[i - 3], dp[i - 2]) + inp[i]);
	}
	cout << dp[n];
}
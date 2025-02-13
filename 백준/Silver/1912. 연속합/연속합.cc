#include <iostream>
#include <algorithm>
using namespace std;

int a[100001], dp[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ans = a[0];
	dp[0] = a[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i-1] + a[i], a[i]);
		ans = max(ans, dp[i]);
	}
	cout << ans;
}
#include <iostream>
#include <algorithm>
using namespace std;

int a[301], dp[301];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dp[1] = a[1];
	dp[2] = a[1] + a[2];
	dp[3] = max(a[1], a[2]) + a[3];
	for (int i = 4; i <=n; i++) {
		dp[i] = max(a[i - 1] + dp[i - 3], dp[i - 2]) + a[i];
	}
	cout << dp[n];
}
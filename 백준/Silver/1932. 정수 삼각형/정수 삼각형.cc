#include <iostream>
#include <algorithm>
using namespace std;

int a[501][501], dp[501][501];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> a[i][j];
			dp[i][j] = a[i][j];
		}
	}
	for (int i = n; i >= 1; i--) {
		for (int j = i-1; j >=1; j--) {
			dp[i - 1][j] += max(dp[i][j], dp[i][j + 1]);
		}
	}
	cout << dp[1][1];
}
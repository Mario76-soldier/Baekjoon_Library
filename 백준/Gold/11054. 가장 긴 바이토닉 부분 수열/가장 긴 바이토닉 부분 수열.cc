#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[1001], dp2[1001], a[1001], ar[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, ans=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ar[n - i + 1] = a[i];
	}
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		dp2[i] = 1;
		for (int j = i - 1; j >= 1; j--) {
			if (a[i] > a[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
			if (ar[i] > ar[j]) {
				dp2[i] = max(dp2[i], dp2[j] + 1);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		ans=max(ans, dp[i]+dp2[n-i+1]-1);
	}
	cout << ans;
}
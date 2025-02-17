#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[1001];
vector<pair<int, int>>v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int a, b, ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		dp[i + 1] = 1;
		for (int j = i; j >= 0; j--) {
			if (v[i].second > v[j].second) {
				dp[i + 1] = max(dp[i + 1], dp[j + 1] + 1);
			}
		}
		ans = max(ans, dp[i + 1]);
	}
	cout << n-ans;
}
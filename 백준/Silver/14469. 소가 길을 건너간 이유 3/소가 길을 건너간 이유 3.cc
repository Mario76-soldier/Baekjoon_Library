#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a, b;
	int d1=0;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back({ a, b });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (d1 < v[i].first) {
			d1 = v[i].first + v[i].second;
		}
		else {
			d1 += v[i].second;
		}
	}
	cout << d1 << '\n';
}
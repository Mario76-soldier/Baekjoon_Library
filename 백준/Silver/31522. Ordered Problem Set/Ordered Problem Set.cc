#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool flag = true;
	int n, a, c2 = 0, c3 = 0, d = 0;
	vector<int> b, v;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			b.push_back(i);
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < b.size(); i++) {
		for (int j = 0; j < b[i]; j++) {
			for (int k = 0; k < n / b[i]; k++) {
				if (c2 < v[j * (n / b[i]) + k]) {
					if (c3 < v[j * (n / b[i]) + k]) {
						c3 = v[j * (n / b[i]) + k];
					}
				}
				else {
					flag = false;
					break;
				}
			}
			if (flag == false) {
				break;
			}
			c2 = c3;
			c3 = 0;
		}
		if (flag == true) {
			cout << b[i] << '\n';
			d++;
		}
		c2 = 0;
		c3 = 0;
		flag = true;
	}
	if (d == 0) {
		cout << -1 << '\n';
	}
}
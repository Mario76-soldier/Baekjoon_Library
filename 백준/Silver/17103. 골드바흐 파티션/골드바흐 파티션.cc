#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set<int> s;
	int n, b, c=0;
	int a[1000001];
	for (int i = 2; i < 1000001; i++) {
		a[i] = i;
	}
	for (int i = 2; i < 1000; i++) {
		if (a[i] != 0) {
			for (int j = i * i; j < 1000000; j += i) {
				a[j] = 0;
			}
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b;
		for (int j = 2; j <= b / 2; j++) {
			if (a[j] + a[b - j] == b) {
				c++;
			}
		}
		cout << c << '\n';
		c = 0;
	}
	return 0;
}
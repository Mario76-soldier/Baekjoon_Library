#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, s, a, i, j, k, leng;
	int sum = 0;
	int minlen = 100001;
	cin >> n >> s;
	vector<int> vec;
	for (i = 0; i < n; i++) {
		cin >> a;
		vec.push_back(a);
	}
	j = 0;
	k = 0;
	sum += vec[0];
	while (k<=n-1 && j<=n-1) {
		if (sum >= s) {
			leng = k - j + 1;
			if (leng < minlen) {
				minlen = leng;
			}
			if (j == n - 1) {
				break;
			}
			sum -= vec[j++];
		}
		else {
			if (k == n - 1) {
				break;
			}
			sum += vec[++k];
		}
	}
	if (minlen >= 100001) {
		minlen = 0;
	}
	cout << minlen << '\n';
	return 0;
}
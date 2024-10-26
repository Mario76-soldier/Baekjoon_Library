#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n,i,j,a,x,sum;
	int ans = 0;
	cin >> n;
	vector<int> vec;
	for (i = 0; i < n; i++) {
		cin >> a;
		vec.push_back(a);
	}
	cin >> x;
	sort(vec.begin(), vec.end());
	i = 0;
	j = n - 1;
	while (i != j) {
		sum = vec[i] + vec[j];
		if (sum == x) {
			ans++;
			i++;
		}
		else if (sum > x) {
			j--;
		}
		else if (sum < x) {
			i++;
		}
	}
	cout << ans << '\n';
	return 0;
}
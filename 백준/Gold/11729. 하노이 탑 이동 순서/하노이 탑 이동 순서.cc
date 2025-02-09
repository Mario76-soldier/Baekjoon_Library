#include <iostream>
#include <cmath>
using namespace std;

void func(int n, int start, int end, int mid) {
	if (n == 1) {
		cout << start << " " << end << '\n';
	}
	else {
		func(n - 1, start, mid, end);
		cout << start << " " << end << '\n';
		func(n - 1, mid, end, start);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << (int)pow(2, n) - 1 << '\n';
	func(n, 1, 3, 2);
}
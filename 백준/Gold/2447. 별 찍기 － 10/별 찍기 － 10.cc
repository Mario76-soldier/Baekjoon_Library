#include <iostream>
#include <cmath>
using namespace std;

void func(int i, int j, int n) {
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		cout << " ";
	}
	else if (n <= 1) {
		cout << "*";
	}
	else {
		func(i, j, n / 3);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			func(i, j, n);
		}
		cout << "\n";
	}
	return 0;
}
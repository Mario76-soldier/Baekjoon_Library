#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int r, b;
	cin >> r >> b;
	int sum = r + b;
	int divi = sum;
	while (divi >= sqrt(sum)) {
		if (sum % divi == 0) {
			if (divi * 2 + (sum / divi) * 2 - 4 == r) {
				cout << divi << " " << sum / divi;
				return 0;
			}
		}
		divi--;
	}
}
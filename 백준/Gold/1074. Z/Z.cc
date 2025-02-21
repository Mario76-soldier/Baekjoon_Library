#include <iostream>
#include <cmath>
using namespace std;

void divi(long long row, long long col, long long rowc, long long colc, int a, long long min, long long max) {
	if (a == -1) {
		cout << min << '\n';
		return;
	}
	if (rowc+pow(2, a) <= row) {
		if (colc+pow(2, a) <= col) {
			divi(row, col, rowc+pow(2, a), colc+pow(2, a), a - 1, min+((max - min + 1) * 3) / 4, max);
		}
		else {
			divi(row, col, rowc + pow(2, a), colc, a - 1, min+(max - min + 1)/ 4, max-(max - min + 1) / 2);
		}
	}
	else {
		if (colc+pow(2, a) <= col) {
			divi(row, col, rowc, colc + pow(2, a), a - 1, min + (max - min + 1)/ 2, max - (max - min + 1) / 4);
		}
		else {
			divi(row, col, rowc, colc, a - 1, min, max - ((max - min + 1) * 3) / 4);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, r, c;
	cin >> n >> r >> c;
	divi(c, r, 0, 0, n-1, 0, pow(2, 2*n)-1);
}
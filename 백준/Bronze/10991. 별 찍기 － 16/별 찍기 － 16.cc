#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; 
	cin >> n;
	int m;
	for (int i = 0; i < n; i++) {
		m = n - i - 1;
		while (m--) {
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			if (j % 2 == 1) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		if(i!=n-1)
			cout << '\n';
	}
}
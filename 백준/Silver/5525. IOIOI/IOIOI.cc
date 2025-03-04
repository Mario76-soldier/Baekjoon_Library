#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, count=0;
	cin >> n >> m;
	string s;
	cin >> s;
	for (int i = 0; i < m; i++) {
		int leng = 0;
		if (s[i] == 'O') {
			continue;
		}
		else {
			while (s[i + 1] == 'O' && s[i + 2] == 'I') {
				leng++;
				if (leng == n) {
					leng--;
					count++;
				}
				i += 2;
			}
			leng = 0;
		}
	}
	cout << count;
}
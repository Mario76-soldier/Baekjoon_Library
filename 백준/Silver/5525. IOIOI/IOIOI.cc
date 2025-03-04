#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, count=0;
	cin >> n >> m;
	string start = "I";
	string s;
	for (int i = 0; i < n; i++) {
		start += "OI";
	}
	cin >> s;
	for (int i = 0; i < m-(n*2); i++) {
		if (s.substr(i, 1 + (n * 2)) == start) {
			count++;
		}
	}
	cout << count;
}
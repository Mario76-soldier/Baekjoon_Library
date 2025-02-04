#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> s;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (s.find(a) != s.end()) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}
	return 0;
}
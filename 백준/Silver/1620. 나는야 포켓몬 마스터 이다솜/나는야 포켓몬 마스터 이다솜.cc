#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<string> map0;
	map<string, int> map;
	string a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		map0.push_back(a);
		map.insert(make_pair(a, i + 1));
	}
	for (int i = 0; i < m; i++) {
		cin >> a;
		if (a[0] >= '0' && a[0] <= '9') {
			cout << map0[stoi(a) - 1] << '\n';
		}
		else {
			cout << map[a] << '\n';
		}
	}
}
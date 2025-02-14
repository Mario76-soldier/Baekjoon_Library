#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	map<string, string> ma;
	cin >> n >> m;
	string site, pw;
	for (int i = 0; i < n; i++) {
		cin >> site >> pw;
		ma.insert({ site, pw });
	}
	for (int i = 0; i < m; i++) {
		cin >> site;
		cout << ma.find(site)->second << '\n';
	}
}
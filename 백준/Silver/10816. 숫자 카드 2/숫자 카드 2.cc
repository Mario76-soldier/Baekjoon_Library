#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
using namespace std;

unordered_map<int, int> s;
int n, m, a;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		s[a]++;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> a;
		cout<<s[a]<<' ';
	}
}
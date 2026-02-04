#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	int a;
	set<int> s;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}

	for (int i = 0; i < m; i++) {
		cin >> a;
		if (s.count(a) != 0){
			s.erase(a);
		}
		else {
			v.push_back(a);
		}
	}
	cout << v.size() + s.size() << endl;
}
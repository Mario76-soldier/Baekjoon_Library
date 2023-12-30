#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n,m;

int checker[20001];

vector<int> vec[20001];

void search(int r) {
	if (checker[r] == 0) {
		checker[r] = 1;
	}
	for (int i = 0; i < vec[r].size(); i++) {
		if (checker[vec[r][i]] == 0) {
			if (checker[r] == 1) {
				checker[vec[r][i]] = 2;
			}
			else if (checker[r] == 2) {
				checker[vec[r][i]] = 1;
			}
			search(vec[r][i]);
		}
	}
}

void test() {
	for(int i=1; i<=n; i++){
		for (int j = 0; j < vec[i].size(); j++) {
			if (checker[i] == checker[vec[i][j]]) {
				cout << "NO" << '\n';
				return;
			}
		}
	}
	cout << "YES" << '\n';
	return;
}

int main() {
	int k;
	int a, b;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n >> m;
		for (int j = 0; j < m; j++) {
			cin >> a >> b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		for (int j = 1; j <= n; j++) {
			if (checker[j] == 0) {
				search(j);
			}
		}
		test();
		for (int j = 0; j < 20001; j++) {
			checker[j] = 0;
			vec[j].clear();
		}
	}
}
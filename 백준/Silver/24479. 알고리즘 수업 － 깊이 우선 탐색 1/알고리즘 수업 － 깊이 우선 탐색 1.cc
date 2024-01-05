#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec[100001];

int visit[100002];

int cnt = 0;

int seq[100002]={0, };

void dfs(int r) {
	if (visit[r] == 1) {
		return;
	}
	visit[r] = 1;
	cnt++;
	seq[r] = cnt;

	for (int i = 0; i < vec[r].size(); i++) {
		dfs(vec[r][i]);
	}
}

int main() {
	int n, m, r;
	cin >> n >> m >> r;
	int a, b;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(vec[i].begin(), vec[i].end());
	}

	dfs(r);

	for (int i = 1; i <= n; i++) {
		cout << seq[i] << '\n';
	}

	return 0;
}
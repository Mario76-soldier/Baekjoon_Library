#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> vec[100001];

int visit[100002];

int visit2[100002];

int cnt = 0;

vector<int> seqd, seqb;

queue<int> que;

bool comp(int i, int j) {
	return i > j;
}

void dfs(int r) {
	if (visit[r] == 1) {
		return;
	}
	visit[r] = 1;
	seqd.push_back(r);

	for (int i = 0; i < vec[r].size(); i++) {
		dfs(vec[r][i]);
	}
}

void bfs(int r) {
	visit2[r] = 1;
	seqb.push_back(r);
	que.push(r);
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (int i = 0; i < vec[u].size(); i++) {
			if (visit2[vec[u][i]] != 1) {
				visit2[vec[u][i]] = 1;
				seqb.push_back(vec[u][i]);
				que.push(vec[u][i]);
			}
		}
	}

}

int main() {
	int n, m;
	cin >> n >> m;
	int a, b;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(vec[i].begin(), vec[i].end());
	}

	dfs(1);
	
	cout << seqd.size()-1;

	return 0;
}
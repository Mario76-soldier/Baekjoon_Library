#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> node[1001];
bool visited[1001] = { false, };

void dfs(int nod) {
	if (visited[nod] == true) {
		return;
	}
	visited[nod] = true;
	for (int i = 0; i < node[nod].size(); i++) {
		dfs(node[nod][i]);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, a, b, count=0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(node[i].begin(), node[i].end());
	}
	for (int i = 1; i <= n; i++) {
		if (visited[i] == false) {
			count++;
			dfs(i);
		}
	}
	cout << count;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;

int n;
int maxdist, maxnode;
int checker[100001];
vector<pair<int, int>> vec[100001];
int answer[100001];

queue<int> que;

//void bfs() {
//	while (!que.empty()) {
//		int root = que.front();
//		checker[root] = 1;
//		que.pop();
//		for (int i = 0; i < vec[root].size(); i++) {
//			int newroot=vec[root][i];
//			if (checker[newroot] == 0) {
//				answer[newroot] = root;
//				que.push(newroot);
//			}
//		}
//	}
//}

void dfs(int a, int dist) {
	if (checker[a]) {
		return;
	}
	if (maxdist < dist) {
		maxdist = dist;
		maxnode = a;
	}
	checker[a] = 1;

	for (int i = 0; i < vec[a].size(); i++) {
		int nnode = vec[a][i].first;
		int ndist = vec[a][i].second;
		dfs(nnode, ndist + dist);
	}
}

int main() {
	cin >> n;
	int a, b, c;
	for (int i = 0; i < n; i++) {
		cin >> a;
		while (true) {
			cin >> b;
			if (b == -1) {
				break;
			}
			cin>> c;
			vec[a].push_back({ b,c });
			vec[b].push_back({ a,c });
		}
	}
	maxdist = 0;
	dfs(1, 0);
	memset(checker, 0, sizeof(checker));
	maxdist = 0;
	dfs(maxnode, 0);
	cout << maxdist;
}
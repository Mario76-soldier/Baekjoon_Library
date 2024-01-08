#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int n;

int checker[100001];
vector<int> vec[100001];
int answer[100001];

queue<int> que;

void bfs() {
	while (!que.empty()) {
		int root = que.front();
		checker[root] = 1;
		que.pop();
		for (int i = 0; i < vec[root].size(); i++) {
			int newroot=vec[root][i];
			if (checker[newroot] == 0) {
				answer[newroot] = root;
				que.push(newroot);
			}
		}
	}
}


int main() {
	cin >> n;
	int a, b;
	for (int i = 1; i < n; i++) {
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	que.push(1);
	bfs();
	
	for (int i = 2; i <= n; i++) {
		cout << answer[i] << '\n';
	}
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#define INF 2e9
using namespace std;

int v, e,c;

int dist[20001];

priority_queue<pair<int,int>> pq;

vector<pair <int, int>> vec[20001];

int dijkstra(int start, int end) {
	if (start == end) {
		return 0;
	}
	for (int i = 1; i <= v; i++) {
		dist[i] = INF;
	}
	pq.push({ 0,start });
	dist[start] = 0;

	while (!pq.empty()) {
		int cost = -pq.top().first;//마이너스 붙이는 이유 : 우선순위 큐의 우선순위를 작은게 높게 하기 위함
		int cur = pq.top().second;
		pq.pop();

		for (int i = 0; i < vec[cur].size(); i++) {
			int next = vec[cur][i].first;
			int ncost = vec[cur][i].second;

			if (dist[next] > cost + ncost) {
				dist[next] = cost + ncost;
				pq.push({ -dist[next], next });
			}
		}
	}
	return dist[end];
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int midr;
		cin >> v >> e>>c;
		int s, g, h;
		cin >> s >> g >> h;
		int a, b, d;
		for (int i = 0; i < e; i++) {
			cin >> a >> b >> d;
			vec[a].push_back({ b,d });
			vec[b].push_back({ a,d });
			if ((a == g && b == h) || (a == h && b == g)) {
				midr = d;
			}
		}
		vector<int> vec2;
		int root1, root2, minroot;
		int end;
		for (int i = 0; i < c; i++) {
			cin >> end;
			
			root1=dijkstra(s, g) + midr + dijkstra(h, end);
			root2 = dijkstra(s, h) +midr+ dijkstra(g, end);
			minroot = dijkstra(s, end);
			if (root1==minroot || root2==minroot) {
				vec2.push_back(end);
			}
		}
		std::sort(vec2.begin(), vec2.end());
		for (int i = 0; i < vec2.size(); i++) {
			cout << vec2[i] << ' ';
		}
		cout << '\n';
		for (int i = 0; i <= v; i++) {
			vec[i].clear();
		}
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#define INF 7654321
using namespace std;

int v, e;

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
	cin >> v >> e;
	int a, b, c;
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		vec[a].push_back({ b,c });
		vec[b].push_back({ a,c });
	}
	int mid1, mid2;
	cin >> mid1 >> mid2;

	int r1, r2;
	r1 = dijkstra(1, mid1) + dijkstra(mid1, mid2) + dijkstra(mid2, v);
	r2 = dijkstra(1, mid2) + dijkstra(mid2, mid1) + dijkstra(mid1, v);

	if (min(r1, r2) >= INF) {
		cout << -1 << endl;
	}

	else {
		cout << min(r1, r2) << endl;
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#define INF 2e10
#define ll long long
using namespace std;

int n, m;

ll dist[502];
vector<pair<int, int>> vec[502];

int bell() {
	dist[1] = 0;
	for (int i = 1; i <= n; i++) {//v-1번의 순환을 통해 경로 찾기, 만약 v번 순환시 음수 순환 있는 것으로 간주.
		for (int j = 1; j <= n; j++) {//현재 탐색하고 있는 노드
			for (int k = 0; k < vec[j].size(); k++) {//현재 탐색 노드의 다음 노드 찾기
				ll next = vec[j][k].first;
				ll cost = vec[j][k].second;

				if (dist[j] != INF && dist[next] > dist[j] + cost) {
					dist[next] = dist[j] + cost;
					if (i == n) {
						return -1;
					}
				}
			}
		}
	}
	return 0;
}

int main() {
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		dist[i] = INF;
	}
	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		vec[a].push_back({ b,c });
	}

	if (bell() == -1) {
		cout << -1;
		return 0;
	};

	for (int i = 2; i <= n; i++) {
		if (dist[i] != INF)
			cout << dist[i] << '\n';
		else
			cout << -1 << '\n';
	}

	

}
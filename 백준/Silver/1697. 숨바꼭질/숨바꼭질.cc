#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int checker[100001];

int dist[100001];

int n,k;

queue<int> que;

void search(int n, int k) {
	que.push(n);
	int st;
	dist[n] = 1;
	while (!que.empty()) {
		st = que.front();
		checker[st] = 1;
		que.pop();
		if (st==k) {
			cout << dist[k]-1 << '\n';
			return;
		}

		if (st - 1 >= 0) {
			if (dist[st - 1] > dist[st] + 1) {
				que.push(st - 1);
				dist[st - 1] = dist[st] + 1;
			}
		}
		if (st + 1 < 100001) {
			if (dist[st + 1] > dist[st] + 1) {
				que.push(st + 1);
				dist[st + 1] = dist[st] + 1;
			}
		}
		if(st*2<100001){
			if (dist[st * 2] > dist[st] + 1) {
				que.push(st * 2);
				dist[st * 2] = dist[st] + 1;
			}
		}
	}
}

int main() {
	for (int i = 0; i < 100001; i++) {
		dist[i] = 1000001;
	}
	cin >> n >>k;
	search(n, k);
	return 0;
}
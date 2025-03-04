#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	queue<int> q;
	int a, diff=0, answer=0;
	int fruit[10] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> a;
		q.push(a);
		if (fruit[a]++ == 0) {
			diff++;
		}
		if (diff > 2) {
			if (--fruit[q.front()] == 0) {
				diff--;
			}
			q.pop();
		}
		answer = max(answer, (int)q.size());
	}
	cout << answer;
}

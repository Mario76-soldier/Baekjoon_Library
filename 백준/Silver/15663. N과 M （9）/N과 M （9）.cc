#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int check[10] = { 0, }, arr[10] = { 0, }, inp[10];

void dfs(int a) {
	if (a==m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		if (!check[i] && tmp!=inp[i]) {
			arr[a] = inp[i];
			tmp = inp[i];
			check[i] = 1;
			dfs(a + 1);
			check[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> inp[i];
	}
	sort(inp, inp + n);
	dfs(0);
}
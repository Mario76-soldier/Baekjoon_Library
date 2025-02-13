#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int check[10] = { 0, }, arr[10] = { 0, }, inp[10];

void dfs(int a, int len) {
	if (len==m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = a; i < n; i++) {
		arr[len] = inp[i];
		dfs(i, len + 1);
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
	dfs(0, 0);
}
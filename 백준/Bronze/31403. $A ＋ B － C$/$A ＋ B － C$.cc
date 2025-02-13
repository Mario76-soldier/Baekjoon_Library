#include <iostream>
using namespace std;

//void dfs(int n) {
//
//}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b - c << '\n';
	cout << a*(b/1000==1?10000:(b/100>=1?1000:(b/10>=1?100:10))) + b - c << '\n';
}
#include <iostream>
#include <string>
using namespace std;

//void dfs(int n) {
//
//}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, s,m,l,xl,xxl,xxxl,t,p;
	cin >> n >> s >> m >> l >> xl >> xxl>>xxxl>>t>>p;
	cout << (s % t == 0 ? s / t : s / t + 1) + (m % t == 0 ? m / t : m / t + 1) + (l % t == 0 ? l / t : l / t + 1) + (xl % t == 0 ? xl / t : xl / t + 1) + (xxl % t == 0 ? xxl / t : xxl / t + 1) + (xxxl % t == 0 ? xxxl / t : xxxl / t + 1)<<'\n';
	cout << n / p << ' ' << n % p;
}
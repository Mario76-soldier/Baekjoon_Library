#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long ans[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, a;
	long long sum=0, count=0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		sum += a;
		ans[sum % m]++;
	}
	for (int i = 0; i <= m; i++) {
		count += (ans[i] * (ans[i] - 1)) / 2;//모듈러가 같으면 나누어 둘을 뺐을때 나누어 떨어짐->이 가능한 조합들을 모두 찾는게 관건->조합 연산 사용
	}
	cout << ans[0] + count;//나머지가 0인 경우는 단독으로도 성립하므로 그대로 더해줄 것
}
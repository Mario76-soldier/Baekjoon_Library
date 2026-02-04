#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	int n;
	cin >> n;
	vector<int>vec1,vec2;
	for (int i = 0; i < n; i++) {
		cin >> a;
		vec1.push_back(a);
	}
	vec2 = vec1;
	sort(vec2.begin(), vec2.end());
	vec2.erase(unique(vec2.begin(), vec2.end()),vec2.end());
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(vec2.begin(), vec2.end(), vec1[i]);
		cout << it - vec2.begin() << ' ';
	}
}
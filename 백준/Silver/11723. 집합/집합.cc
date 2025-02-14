#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set<int> se, sd = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int m, a;
	cin >> m;
	string s;
	while (cin >> s) {
		if (s == "add") {
			cin >> a;
			se.insert(a);
		}
		else if (s == "remove") {
			cin >> a;
			se.erase(a);
		}
		else if (s == "check") {
			cin >> a;
			cout << se.count(a) << '\n';
		}
		else if (s == "toggle") {
			cin >> a;
			if (se.count(a) == 0) {
				se.insert(a);
			}
			else {
				se.erase(a);
			}
		}
		else if (s == "all") {
			se = sd;
		}
		else if (s == "empty") {
			se.clear();
		}
	}
}
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
	string s;
	getline(cin, s);
	switch (s.compare("1 2 3 4 5 6 7 8")) {
	case 0:
		cout << "ascending";
		break;
	default:
		switch (s.compare("8 7 6 5 4 3 2 1")) {
		case 0:
			cout << "descending";
			break;
		default:
			cout << "mixed";
			break;
		}
		break;
	}
}
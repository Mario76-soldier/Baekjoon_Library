#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin >> n>>m;
	string str;
	set<string> s;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> str;
		s.insert(str);
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		count += s.count(str);
	}
	cout << count << endl;
}
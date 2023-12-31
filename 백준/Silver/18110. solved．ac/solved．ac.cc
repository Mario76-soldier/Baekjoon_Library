#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
	int a;
	cin >> a;
	if (a == 0) {
		cout << 0 << endl;
		return 0;
	}
	int b = round(a * 0.15);
	vector<int> vec;
	float count = 0;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		vec.push_back(c);
	}
	sort(vec.begin(), vec.end());
	for (int i = b; i < a - b; i++) {
		count += vec[i];
	}
	cout << round(count / (a - b - b)) << '\n';
}
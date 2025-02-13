#include <iostream>
#include <cmath>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, a, b;
	float p1, p2, p3, c1, c2, c4;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		switch (a){
		case 1:
			cin >> p1;
			c1 = p1 * b + (1 - p1) * (2 * b + 1);
			c4 = b + 2;
			cout << "Case #" << i + 1 << ": "<<min(c1, c4) << '\n';
			break;
		case 2:
			cin >> p1 >> p2;
			c1 = p1 * p2 * (b - 1) + (1 - p1 * p2) * 2 * b;
			c2 = (p1 * p2 + p1 * (1-p2)) * (b + 1) + (1 - (p1 * p2 + p1 * (1 - p2))) * 2 * (b + 1);
			c4 = b + 2;
			cout << "Case #" << i + 1 << ": "<< min(c1, min(c2, c4)) << '\n';
			break;
		case 3:
			cin >> p1 >> p2>>p3;
			c1 = p1 * p2  *p3 * (b - 2) + (1 - p1 * p2 * p3) * (2 * b-1);
			c2 = (p1 * p2 * p3 + p1 *p2 * (1-p3)) * (b) + (1 - (p1 * p2 * p3 + p1 * p2 * (1 - p3))) * (2 * b + 1);
			c4 = b + 2;
			cout << "Case #" << i + 1 << ": " << min(c1, min(c2, c4)) << '\n';
			break;
		}
	}
}
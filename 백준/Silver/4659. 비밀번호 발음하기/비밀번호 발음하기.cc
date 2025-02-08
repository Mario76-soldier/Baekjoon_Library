#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	bool flag = true;;
	int a = 0, b = 0, i, a2 = 0;
	char c = 'e', d;
	while (cin >> s) {
		if (s == "end") {
			break;
		}
		for (i = 0; i < s.size(); i++) {
			d = s[i];
			if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u') {
				a++;
				b = 0;
				a2++;
			}
			else {
				b++;
				a = 0;
			}
			if (a >= 3 || b >= 3 || (c != 'e' && c != 'o' && c == d)) {
				flag = false;
				break;
			}
			c = d;
		}
		if (a2>0 && flag==true) {
			cout << "<" << s << ">" << " is acceptable." << '\n';
		}
		else if (a2 == 0 || flag==false) {
			cout << "<" << s << ">" << " is not acceptable." << '\n';
		}
		a = 0;
		b = 0;
		a2 = 0;
		c = 'e';
		flag = true;
	}
}
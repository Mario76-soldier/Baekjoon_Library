#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;

int tree[50][2];

void pre(int i) {
	if (i == -1) {
		return;
	}
	cout <<(char)(i + 'A');
	pre(tree[i][0]);
	pre(tree[i][1]);
}
void in(int i) {
	if (i == -1) {
		return;
	}
	in(tree[i][0]);
	cout << (char)(i + 'A');
	in(tree[i][1]);
}
void post(int i) {
	if (i == -1) {
		return;
	}
	post(tree[i][0]);
	post(tree[i][1]);
	cout << (char)(i + 'A');

}

int main() {
	int n;
	cin >> n;
	char a, b, c;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (b != '.')
			tree[a - 'A'][0] = b - 'A';
		else
			tree[a - 'A'][0] = -1;

		if(c!='.')
			tree[a - 'A'][1] = c-'A';
		else
			tree[a - 'A'][1] = -1;
	}
	pre(0);
	cout << endl;
	in(0);
	cout << endl;
	post(0);
}
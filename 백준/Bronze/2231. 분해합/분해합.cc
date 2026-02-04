#include <iostream>
#include <vector>
using namespace std;



int main(){
	int a;
	cin >> a;
	int b = 1;
	int c;
	int d = 0;
	while (b < a) {
		c = b / 1000000 + (b / 100000) % 10 + (b / 10000) % 10 + (b / 1000) % 10 + (b / 100) % 10 + (b / 10) % 10 + b % 10 + b;
		if (c == a) {
			d = b;
			break;
		}
		b++;
	}
	cout << d << endl;
}
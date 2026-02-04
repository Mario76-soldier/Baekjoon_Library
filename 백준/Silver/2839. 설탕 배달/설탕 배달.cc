#include <iostream>
using namespace std;

int main(){
	int n;
	int b;
	cin >> n;
	for (int i = n/5; i>=0; i--) {
		if ((n - 5 * i) % 3 == 0) {
			b = i + ((n-5*i) / 3);
			break;
		}
		else {
			b = -1;
		}
	}
	cout << b << endl;
	return 0;
}
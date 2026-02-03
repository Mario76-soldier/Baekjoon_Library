#include <iostream>
#include <vector>
using namespace std;



int main(){
	int a, b;
	cin >> a >> b;
	int sum = 0;
	vector<int>vec;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		vec.push_back(c);
	}
	for (int i = 0; i < a; i++) {
		for (int j = i+1; j < a; j++) {
			for (int k = j + 1; k < a; k++) {
				int imsi = vec[i] + vec[j] + vec[k];
				if (imsi <= b && imsi > sum) {
					sum = imsi;
				}
			}
		}
	}
	cout << sum << endl;
}
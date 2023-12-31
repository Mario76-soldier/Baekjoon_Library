#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
	int mapp[501][501];
	int n, m, b;
	cin >> n >> m >> b;
		int max = -1;
		int min = 257;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> mapp[i][j];
				if (mapp[i][j] > max) {
					max = mapp[i][j];
				}
				if (mapp[i][j] < min) {
					min = mapp[i][j];
				}
			}
		}
		int time = 100000001;
		int time2 = 0;
		int indexer = -1;
		int block = b;
		for (int k = min; k <= max; k++) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					int o = mapp[i][j] - k;
					if (o < 0) {
						time2 += (-1 * o);
						block += o;
					}
					else {
						time2 += (2 * o);
						block += o;
					}
				}
			}
			if (block >= 0 && time2 <= time) {
				if (indexer > k) {
					continue;
				}
				time = time2;
				indexer = k;
			}
			time2 = 0;
			block = b;
		}

		std::cout << time << ' ' << indexer << endl;
}
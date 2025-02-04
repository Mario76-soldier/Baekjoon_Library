#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void can(int a) {
    int s2 = pow(3,a-1);
    if (a == 0) {
        cout << '-';
        return;
    }

    can(a - 1);
    for (int i = 0; i < s2; i++) {
        cout << ' ';
    }
    can(a - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    while (cin >> a) {
        can(a);
        cout << endl;
    }
} 
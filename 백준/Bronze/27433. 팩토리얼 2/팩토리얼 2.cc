#include <iostream>
using namespace std;

long long fac(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }
    return a * fac(a - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    cout << fac(a) << endl;
}
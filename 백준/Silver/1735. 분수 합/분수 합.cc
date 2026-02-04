#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    long long r = a % b;
    if (r == 0) {
        return b;
    }
    return gcd(b, r);
}

int main() {
    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;
    int e = a * d + b * c;
    int f = b * d;
    int g = gcd(e, f);
    cout << e / g << ' ' << f / g << endl;
}
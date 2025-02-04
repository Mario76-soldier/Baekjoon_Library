#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int a, c;
map<string, int> s;
string b;
vector<string> vec;

bool compare(string a, string b) {
    if (a.size() == b.size() && s[a] == s[b]) {
        return a < b;
    }
    else if (s[a] == s[b]) {
        return a.size() > b.size();
    }
    return s[a] > s[b];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a>>c;
    for (int i = 0; i < a; i++) {
        cin >> b;
        if (b.size() >= c) {
            if (s.find(b) == s.end()) {
                s[b]=1;
                vec.push_back(b);
            }
            else {
                s[b]++;
            }
        }
    }
    sort(vec.begin(),vec.end(), compare);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << '\n';
    }
}
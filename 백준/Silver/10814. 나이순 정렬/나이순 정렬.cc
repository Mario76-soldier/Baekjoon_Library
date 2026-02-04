#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first<b.first;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<pair<int, string>> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i].first>>p[i].second;
    }
    stable_sort(p.begin(), p.end(), compare);
    for(int i=0; i<p.size(); i++){
        cout<<p[i].first<<' '<<p[i].second<<'\n';
    }
    
}
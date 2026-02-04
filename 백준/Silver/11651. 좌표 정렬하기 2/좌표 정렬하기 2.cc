#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<pair<int, int>> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(), p.end(), compare);
    for(int i=0; i<n; i++){
        cout<<p[i].first<<' '<<p[i].second<<'\n';
    }
}
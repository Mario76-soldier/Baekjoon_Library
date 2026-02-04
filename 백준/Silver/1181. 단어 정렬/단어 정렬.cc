#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
    if(a.size()==b.size()){
        return a<b;
    }
    return a.size()<b.size();
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<string> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    sort(p.begin(), p.end(), compare);
    p.erase(unique(p.begin(), p.end()), p.end());
    for(int i=0; i<p.size(); i++){
        cout<<p[i]<<'\n';
    }
    
}
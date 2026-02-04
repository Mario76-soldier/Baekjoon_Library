#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    set<string> s1, s2;
    string name;
    for(int i=0; i<n; i++){
        cin>>name;
        s1.insert(name);
    }
    for(int i=0; i<m; i++){
        cin>>name;
        if(s1.find(name)!=s1.end()){
            s2.insert(name);
        }
    }
    cout<<s2.size()<<'\n';
    for(auto it=s2.begin(); it!=s2.end(); it++){
        cout<<*it<<'\n';
    }
}
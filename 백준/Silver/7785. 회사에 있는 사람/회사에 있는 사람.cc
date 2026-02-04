#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;

    string name, message;
    set<string, greater<string>> s;

    for(int i=0; i<n; i++){
        cin>>name>>message;
        if(message=="enter"){
            s.insert(name);
        }
        else if(message=="leave"){
            s.erase(name);
        }
    }
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<'\n';
    }
}
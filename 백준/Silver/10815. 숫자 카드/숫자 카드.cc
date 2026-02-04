#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    set<int> s;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        s.insert(a);
    }
    int m;
    cin>>m;
    int b;
    for(int i=0; i<m; i++){
        cin>>b;
        if(s.find(b)!=s.end()){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
    }

}
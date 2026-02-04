#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    string s;
    cin>>s;
    set<string> se;
    string a="";
    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            a+=s[j];
            se.insert(a);
        }
        a="";
    }
    cout<<se.size();
}
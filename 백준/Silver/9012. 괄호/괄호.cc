#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    string a;
    int count=0;
    for(int i=0; i<n; i++){
        cin>>a;
        for(int j=0; j<a.size(); j++){
            if(a[j]=='('){
                count++;
            }
            else if(a[j]==')'){
                if(--count<0){
                    break;
                }
            }
        }
        if(count!=0){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
        count=0;
    }
}
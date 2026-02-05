#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    string a;
    getline(cin, a);
    stack<char> sta;
    int i;
    while(a!="."){
        for(i=0; i<a.size(); i++){
            if(a[i]=='(' || a[i]=='['){
                sta.push(a[i]);
            }
            if(a[i]==')'){
                if(sta.empty() || sta.top()!='('){
                    cout<<"no"<<'\n';
                    goto exit;
                    break;
                }
                sta.pop();
            }
            if(a[i]==']'){
                if(sta.empty() || sta.top()!='['){
                    cout<<"no"<<'\n';
                    goto exit;
                    break;
                }
                sta.pop();
            }
        }
        if(sta.size()!=0){
            cout<<"no"<<'\n';
        }
        else{
            cout<<"yes"<<'\n';
        }
        exit:
            while (!sta.empty()) {
                sta.pop();
            }
            getline(cin, a);
    }
}
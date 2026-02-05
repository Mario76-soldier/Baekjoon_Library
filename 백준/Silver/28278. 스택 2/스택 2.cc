#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    int inst, a;
    stack<int> sta;
    for(int i=0; i<n; i++){
        cin>>inst;
        switch (inst){
            case 1:
                cin>>a;
                sta.push(a);
                break;
            case 2:
                if(sta.empty()){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<sta.top()<<'\n';
                    sta.pop();
                }
                break;
            case 3:
                cout<<sta.size()<<'\n';
                break;
            case 4: 
                if(sta.empty()){
                    cout<<1<<'\n';
                }
                else{
                    cout<<0<<'\n';
                }
                break;
            case 5:
                if(sta.empty()){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<sta.top()<<'\n';
                }
                break;
        }
    }
}
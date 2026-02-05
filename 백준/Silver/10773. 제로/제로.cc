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
    int a;
    stack<int> sta;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a==0){
            sta.pop();
        }
        else{
            sta.push(a);
        }
    }
    int sum=0;
    while(!sta.empty()){
        sum+=sta.top();
        sta.pop();
    }
    cout<<sum<<'\n';
}
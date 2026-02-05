#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    queue<int> q;
    for(int i=0; i<n; i++){
        q.push(i+1);
    }
    int count=1;
    cout<<"<";
    while(q.size()>1){
        if(count%m==0){
            cout<<q.front()<<", ";
        }
        else{
            q.push(q.front());
        }
        q.pop();
        count++;
    }
    cout<<q.front()<<">";
}
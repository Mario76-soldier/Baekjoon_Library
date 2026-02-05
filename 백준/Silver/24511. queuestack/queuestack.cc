#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, a;
    cin>>n;
    deque<int> que;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    for(int i=0; i<n; i++){
        cin>>a;
        if(vec[i]==0){
            que.push_front(a);
        }
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>a;
        que.push_back(a);
        cout<<que.front()<<' ';
        que.pop_front();
    }
}
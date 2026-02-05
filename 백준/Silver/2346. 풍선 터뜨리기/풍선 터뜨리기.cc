#include <iostream>
#include <cmath>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, index, a;
    cin>>n;
    deque<pair<int, int>> deq;
    for(int i=1; i<=n; i++){
        cin>>a;
        deq.push_back({i, a});
    }
    for(int i=0; i<n; i++){
        cout<<deq.front().first<<' ';
        index=deq.front().second;
        deq.pop_front();
        if(index<0){
            for(int j=0; j<abs(index); j++){
                deq.push_front(deq.back());
                deq.pop_back();
            }
        }
        else{
            for(int j=0; j<index-1; j++){
                deq.push_back(deq.front());
                deq.pop_front();
            }
        }
    }
}